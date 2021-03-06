/*
 * Copyright (c) 2018, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <asm_macros.S>

	.globl	wa_cve_2017_5715_bpiall_vbar

vector_base wa_cve_2017_5715_bpiall_vbar
	/* We encode the exception entry in the bottom 3 bits of SP */
	add	sp, sp, #1	/* Reset: 0b111 */
	add	sp, sp, #1	/* Undef: 0b110 */
	add	sp, sp, #1	/* Syscall: 0b101 */
	add	sp, sp, #1	/* Prefetch abort: 0b100 */
	add	sp, sp, #1	/* Data abort: 0b011 */
	add	sp, sp, #1	/* Reserved: 0b010 */
	add	sp, sp, #1	/* IRQ: 0b001 */
	nop			/* FIQ: 0b000 */

	/*
	 * Invalidate the branch predictor, `r0` is a dummy register
	 * and is unused.
	 */
	stcopr	r0, BPIALL
	isb

	/*
	 * As we cannot use any temporary registers and cannot
	 * clobber SP, we can decode the exception entry using
	 * an unrolled binary search.
	 *
	 * Note, if this code is re-used by other secure payloads,
	 * the below exception entry vectors must be changed to
	 * the vectors specific to that secure payload.
	 */

	tst	sp, #4
	bne	1f

	tst	sp, #2
	bne	3f

	/* Expected encoding: 0x1 and 0x0 */
	tst	sp, #1
	/* Restore original value of SP by clearing the bottom 3 bits */
	bic	sp, sp, #0x7
	bne	plat_panic_handler	/* IRQ */
	b	sp_min_handle_fiq	/* FIQ */

1:
	tst	sp, #2
	bne	2f

	/* Expected encoding: 0x4 and 0x5 */
	tst	sp, #1
	bic	sp, sp, #0x7
	bne	sp_min_handle_smc	/* Syscall */
	b	plat_panic_handler	/* Prefetch abort */

2:
	/* Expected encoding: 0x7 and 0x6 */
	tst	sp, #1
	bic	sp, sp, #0x7
	bne	sp_min_entrypoint	/* Reset */
	b	plat_panic_handler	/* Undef */

3:
	/* Expected encoding: 0x2 and 0x3 */
	tst	sp, #1
	bic	sp, sp, #0x7
	bne	plat_panic_handler	/* Data abort */
	b	plat_panic_handler	/* Reserved */
