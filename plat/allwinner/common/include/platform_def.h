/*
 * Copyright (c) 2017-2018, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef PLATFORM_DEF_H
#define PLATFORM_DEF_H

#include <common_def.h>
#include <sunxi_mmap.h>
#include <tbbr/tbbr_img_def.h>
#include <utils_def.h>

#define BL31_BASE			SUNXI_SRAM_A2_BASE
#define BL31_LIMIT			(SUNXI_SRAM_A2_BASE + SUNXI_SRAM_A2_SIZE)

/* The traditional U-Boot load address is 160MB into DRAM, so at 0x4a000000 */
#define PLAT_SUNXI_NS_IMAGE_OFFSET	(SUNXI_DRAM_BASE + (160U << 20))

/* How much memory to reserve as secure for BL32, if configured */
#define SUNXI_DRAM_SEC_SIZE		(32U << 20)

/* How much DRAM to map (to map BL33, for fetching the DTB from U-Boot) */
#define SUNXI_DRAM_MAP_SIZE		(64U << 20)

#define CACHE_WRITEBACK_SHIFT		6
#define CACHE_WRITEBACK_GRANULE		(1 << CACHE_WRITEBACK_SHIFT)

#define MAX_MMAP_REGIONS		(3 + PLATFORM_MMAP_REGIONS)
#define MAX_XLAT_TABLES			1

#define PLAT_MAX_PWR_LVL_STATES		U(2)
#define PLAT_MAX_RET_STATE		U(1)
#define PLAT_MAX_OFF_STATE		U(2)

#define PLAT_MAX_PWR_LVL		U(2)
#define PLAT_NUM_PWR_DOMAINS		(1 + \
					 PLATFORM_CLUSTER_COUNT + \
					 PLATFORM_CORE_COUNT)

#define PLAT_PHY_ADDR_SPACE_SIZE	(1ULL << 32)
#define PLAT_VIRT_ADDR_SPACE_SIZE	(1ULL << 28)

#define PLATFORM_CLUSTER_COUNT		1
#define PLATFORM_CORE_COUNT		(PLATFORM_CLUSTER_COUNT * \
					 PLATFORM_MAX_CPUS_PER_CLUSTER)
#define PLATFORM_MAX_CPUS_PER_CLUSTER	4
#define PLATFORM_MMAP_REGIONS		4
#define PLATFORM_STACK_SIZE		(0x1000 / PLATFORM_CORE_COUNT)

#ifndef SPD_none
#ifndef BL32_BASE
#define BL32_BASE			SUNXI_DRAM_BASE
#endif
#endif

#endif /* PLATFORM_DEF_H */