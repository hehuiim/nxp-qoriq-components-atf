/*
 * Copyright (c) 2015-2016, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <arch.h>
#include <asm_macros.S>

	.globl	nvg_set_request_data
	.globl	nvg_set_request
	.globl	nvg_get_result

/* void nvg_set_request_data(uint64_t req, uint64_t data) */
func nvg_set_request_data
	msr	s3_0_c15_c1_2, x0
	msr	s3_0_c15_c1_3, x1
	ret
endfunc nvg_set_request_data

/* void nvg_set_request(uint64_t req) */
func nvg_set_request
	msr	s3_0_c15_c1_2, x0
	ret
endfunc nvg_set_request

/* uint64_t nvg_get_result(void) */
func nvg_get_result
	mrs	x0, s3_0_c15_c1_3
	ret
endfunc nvg_get_result
