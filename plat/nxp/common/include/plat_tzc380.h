/*
 * Copyright 2018 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Author Pankaj Gupta <pankaj.gupta@nxp.com>
 */

#ifndef _PLAT_TZC380_H_
#define _PLAT_TZC380_H_

#include "tzc380.h"

#define TZC380_REGION_GAURD_SIZE	(66 * 1024 * 1024)

/* Four Region:
 *	Region 0: Default region marked as Non-Secure.
 *	Region 1: Secure Region on DRAM 1 for  2MB out of  2MB,
 *			excluding 0 sub-region(=256KB).
 *	Region 2: Secure Region on DRAM 1 for 54MB out of 64MB,
 *			excluding 1 sub-rgion(=8MB) of 8MB
 *	Region 3: Secure Region on DRAM 1 for  6MB out of  8MB,
 *			excluding 2 sub-rgion(=1MB) of 2MB
 *
 *      For TZC-380 MAX_NUM_TZC_REGION will remain = 4.
 *
 * Note: No need to confifure Non-Secure region as it falls in region-0.
 */
#define MAX_NUM_TZC_REGION	4

/* List of MAX_NUM_TZC_REGION TZC regions' boundaries and configurations. */

static struct tzc380_reg tzc380_reg_list[] = {
	{
		TZASC_REGION_SECURITY_NSRW,	/* .secure attr */
		0x0,			/* .enabled */
		0x0,			/* .lowaddr */
		0x0,			/* .highaddr */
		0x0,			/* .size */
		0x0,			/* .submask */
	},
	{
		TZASC_REGION_SECURITY_SRW,
		TZASC_REGION_ENABLED,
		0x0,
		0x0,
		TZASC_REGION_SIZE_2MB,
		0x0,			/* Disable region 7 */
	},
	{
		TZASC_REGION_SECURITY_SRW,
		TZASC_REGION_ENABLED,
		0x0,
		0x0,
		TZASC_REGION_SIZE_64MB,
		0x80,			/* Disable region 7 */
	},
	/* reserve 2M non-scure memory for OPTEE public memory */
	{
		TZASC_REGION_SECURITY_SRW,
		TZASC_REGION_ENABLED,
		0x0,
		0x0,
		TZASC_REGION_SIZE_8MB,
		0xC0,			/* Disable region 6 & 7 */
	},

	{}
};

#endif /* _PLAT_TZC380_H_ */
