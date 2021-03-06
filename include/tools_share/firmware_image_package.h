/*
 * Copyright (c) 2014-2018, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef __FIRMWARE_IMAGE_PACKAGE_H__
#define __FIRMWARE_IMAGE_PACKAGE_H__

#include <stdint.h>
#include <uuid.h>

/* This is used as a signature to validate the blob header */
#define TOC_HEADER_NAME	0xAA640001


/* ToC Entry UUIDs */
#define UUID_TRUSTED_UPDATE_FIRMWARE_SCP_BL2U \
	{0x03279265, 0x742f, 0x44e6, 0x8d, 0xff, {0x57, 0x9a, 0xc1, 0xff, 0x06, 0x10} }
#define UUID_TRUSTED_UPDATE_FIRMWARE_BL2U \
	{0x37ebb360, 0xe5c1, 0x41ea, 0x9d, 0xf3, {0x19, 0xed, 0xa1, 0x1f, 0x68, 0x01} }
#define UUID_TRUSTED_UPDATE_FIRMWARE_NS_BL2U \
	{0x111d514f, 0xe52b, 0x494e, 0xb4, 0xc5, {0x83, 0xc2, 0xf7, 0x15, 0x84, 0x0a} }
#define UUID_TRUSTED_FWU_CERT \
	{0xb28a4071, 0xd618, 0x4c87, 0x8b, 0x2e, {0xc6, 0xdc, 0xcd, 0x50, 0xf0, 0x96} }
#define UUID_TRUSTED_BOOT_FIRMWARE_BL2 \
	{0x0becf95f, 0x224d, 0x4d3e, 0xa5, 0x44, {0xc3, 0x9d, 0x81, 0xc7, 0x3f, 0x0a} }
#define UUID_SCP_FIRMWARE_SCP_BL2 \
	{0x3dfd6697, 0xbe89, 0x49e8, 0xae, 0x5d, {0x78, 0xa1, 0x40, 0x60, 0x82, 0x13} }
#define UUID_EL3_RUNTIME_FIRMWARE_BL31 \
	{0x6d08d447, 0xfe4c, 0x4698, 0x9b, 0x95, {0x29, 0x50, 0xcb, 0xbd, 0x5a, 0x00} }
#define UUID_SECURE_PAYLOAD_BL32 \
	{0x89e1d005, 0xdc53, 0x4713, 0x8d, 0x2b, {0x50, 0x0a, 0x4b, 0x7a, 0x3e, 0x38} }
#define UUID_SECURE_PAYLOAD_BL32_EXTRA1 \
	{0x9bc2700b, 0x5a2a, 0x4078, 0x9f, 0x65, {0x0a, 0x56, 0x82, 0x73, 0x82, 0x88} }
#define UUID_SECURE_PAYLOAD_BL32_EXTRA2 \
	{0xb17ba88e, 0xa2cf, 0x4d3f, 0x85, 0xfd, {0xe7, 0xbb, 0xa5, 0x02, 0x20, 0xd9} }
#define UUID_NON_TRUSTED_FIRMWARE_BL33 \
	{0xa7eed0d6, 0xeafc, 0x4bd5, 0x97, 0x82, {0x99, 0x34, 0xf2, 0x34, 0xb6, 0xe4} }


/* Key certificates */
#define UUID_ROT_KEY_CERT \
	{0x721d2d86, 0x60f8, 0x11e4, 0x92, 0x0b, {0x8b, 0xe7, 0x62, 0x16, 0x0f, 0x24} }
#define UUID_TRUSTED_KEY_CERT \
	{0x90e87e82, 0x60f8, 0x11e4, 0xa1, 0xb4, {0x77, 0x7a, 0x21, 0xb4, 0xf9, 0x4c} }
#define UUID_NON_TRUSTED_WORLD_KEY_CERT \
	{0x3d87671c, 0x635f, 0x11e4, 0x97, 0x8d, {0x27, 0xc0, 0xc7, 0x14, 0x8a, 0xbd} }
#define UUID_SCP_FW_KEY_CERT \
	{0xa1214202, 0x60f8, 0x11e4, 0x8d, 0x9b, {0xf3, 0x3c, 0x0e, 0x15, 0xa0, 0x14} }
#define UUID_SOC_FW_KEY_CERT \
	{0xccbeb88a, 0x60f9, 0x11e4, 0x9a, 0xd0, {0xeb, 0x48, 0x22, 0xd8, 0xdc, 0xf8} }
#define UUID_TRUSTED_OS_FW_KEY_CERT \
	{0x03d67794, 0x60fb, 0x11e4, 0x85, 0xdd, {0xb7, 0x10, 0x5b, 0x8c, 0xee, 0x04} }
#define UUID_NON_TRUSTED_FW_KEY_CERT \
	{0x2a83d58a, 0x60fb, 0x11e4, 0x8a, 0xaf, {0xdf, 0x30, 0xbb, 0xc4, 0x98, 0x59} }
/* Content certificates */
#define UUID_TRUSTED_BOOT_FW_CERT \
	{0xea69e2d6, 0x635d, 0x11e4, 0x8d, 0x8c, {0x9f, 0xba, 0xbe, 0x99, 0x56, 0xa5} }
#define UUID_SCP_FW_CONTENT_CERT \
	{0x046fbe44, 0x635e, 0x11e4, 0xb2, 0x8b, {0x73, 0xd8, 0xea, 0xae, 0x96, 0x56} }
#define UUID_SOC_FW_CONTENT_CERT \
	{0x200cb2e2, 0x635e, 0x11e4, 0x9c, 0xe8, {0xab, 0xcc, 0xf9, 0x2b, 0xb6, 0x66} }
#define UUID_TRUSTED_OS_FW_CONTENT_CERT \
	{0x11449fa4, 0x635e, 0x11e4, 0x87, 0x28, {0x3f, 0x05, 0x72, 0x2a, 0xf3, 0x3d} }
#define UUID_NON_TRUSTED_FW_CONTENT_CERT \
	{0xf3c1c48e, 0x635d, 0x11e4, 0xa7, 0xa9, {0x87, 0xee, 0x40, 0xb2, 0x3f, 0xa7} }
/* Dynamic configs */
#define UUID_HW_CONFIG \
	{0xd9f1b808, 0xcfc9, 0x4993, 0xa9, 0x62, {0x6f, 0xbc, 0x6b, 0x72, 0x65, 0xcc} }
#define UUID_TB_FW_CONFIG \
	{0xff58046c, 0x6baf, 0x4f7d, 0x82, 0xed, {0xaa, 0x27, 0xbc, 0x69, 0xbf, 0xd2} }

/* PHy images configs */
#define UUID_DDR_IMEM_UDIMM_1D \
	{0x83e3db5b, 0x9fd1, 0x06c7, 0xd4, 0x91, {0x76, 0x4f, 0x9d, 0x23, 0x2d, 0x2d} }

#define UUID_DDR_IMEM_UDIMM_2D \
	{0x21eb0efa, 0x7fe0, 0x658e, 0x95, 0xd8, {0x2b, 0x94, 0xf6, 0xb8, 0x28, 0x0a} }

#define UUID_DDR_DMEM_UDIMM_1D \
	{0x7efdbbba, 0xf05b, 0xb8eb, 0xeb, 0x71, {0xb1, 0x85, 0x07, 0xdd, 0xe1, 0x32} }

#define UUID_DDR_DMEM_UDIMM_2D \
	{0xda6199b6, 0x92f9, 0x9e4b, 0x0c, 0x49, {0x74, 0xa5, 0xe0, 0x5c, 0xbe, 0xc3} }

#define UUID_DDR_IMEM_RDIMM_1D \
	{0x52663342, 0x94d8, 0xc14d, 0x91, 0xcc, {0x26, 0x8f, 0x7a, 0x67, 0xf1, 0xa2} }

#define UUID_DDR_IMEM_RDIMM_2D \
	{0xba73952e, 0xcab5, 0xc77c, 0xef, 0xc9, {0x5e, 0xb0, 0x42, 0xec, 0x08, 0x7a} }

#define UUID_DDR_DMEM_RDIMM_1D \
	{0xed17511c, 0x0d30, 0xbaae, 0x87, 0x03, {0x1f, 0x37, 0x85, 0xec, 0xe1, 0x44} }

#define UUID_DDR_DMEM_RDIMM_2D \
	{0x78900ae9, 0xd611, 0xba8b, 0x24, 0x35, {0xec, 0x10, 0x75, 0x4f, 0x56, 0xa5} }

#define UUID_FUSE_PROV \
	{0x429045ec, 0x0d30, 0xbaae, 0x87, 0x03, {0x1f, 0x37, 0x85, 0xec, 0xe1, 0x44} }

#define UUID_FUSE_UP \
	{0x78ef4689, 0xd611, 0xba8b, 0x24, 0x35, {0xec, 0x10, 0x75, 0x4f, 0x56, 0xa5} }

typedef struct fip_toc_header {
	uint32_t	name;
	uint32_t	serial_number;
	uint64_t	flags;
} fip_toc_header_t;

typedef struct fip_toc_entry {
	uuid_t		uuid;
	uint64_t	offset_address;
	uint64_t	size;
	uint64_t	flags;
} fip_toc_entry_t;

#endif /* __FIRMWARE_IMAGE_PACKAGE_H__ */
