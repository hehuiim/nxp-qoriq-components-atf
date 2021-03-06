/*
 * Copyright (c) 2017, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef __HIKEY_PRIVATE_H__
#define __HIKEY_PRIVATE_H__

#include <bl_common.h>

#define RANDOM_MAX		0x7fffffffffffffff
#define RANDOM_MAGIC		0x9a4dbeaf

struct random_serial_num {
	uint64_t	magic;
	uint64_t	data;
	char		serialno[32];
};

/*
 * Function and variable prototypes
 */
void hikey_init_mmu_el1(unsigned long total_base,
			unsigned long total_size,
			unsigned long ro_start,
			unsigned long ro_limit,
			unsigned long coh_start,
			unsigned long coh_limit);
void hikey_init_mmu_el3(unsigned long total_base,
			unsigned long total_size,
			unsigned long ro_start,
			unsigned long ro_limit,
			unsigned long coh_start,
			unsigned long coh_limit);

void hikey_ddr_init(void);
void hikey_io_setup(void);

void hikey_sp804_init(void);
void hikey_gpio_init(void);
void hikey_pmussi_init(void);
void hikey_hi6553_init(void);
void init_mmc0_pll(void);
void reset_mmc0_clk(void);
void init_media_clk(void);
void init_mmc1_pll(void);
void reset_mmc1_clk(void);
void hikey_mmc_pll_init(void);
void hikey_rtc_init(void);

int hikey_get_partition_size(const char *arg, int left, char *response);
int hikey_get_partition_type(const char *arg, int left, char *response);

int hikey_erase(const char *arg);
int hikey_flash(const char *arg);
int hikey_oem(const char *arg);
int hikey_reboot(const char *arg);
void hikey_security_setup(void);

const char *hikey_init_serialno(void);
int hikey_read_serialno(struct random_serial_num *serialno);
int hikey_write_serialno(struct random_serial_num *serialno);

void init_acpu_dvfs(void);

#endif /* __HIKEY_PRIVATE_H__ */
