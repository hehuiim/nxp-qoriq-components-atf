#
# Copyright 2018 NXP
#
# SPDX-License-Identifier: BSD-3-Clause
#
# Author Ruchika Gupta <ruchika.gupta@nxp.com>
#

CSF_HDR_SOURCES	:=  plat/nxp/drivers/auth/csf_hdr_parser/csf_hdr_parser.c

ifdef BL2_SOURCES
CSF_HDR_SOURCES	+=  plat/nxp/drivers/auth/csf_hdr_parser/plat_img_parser.c
endif

PLAT_INCLUDES	+= -Iplat/nxp/drivers/auth/csf_hdr_parser/

$(eval $(call add_define, CSF_HEADER_PREPENDED))


# Path to CST directory is required to generate the CSF header
# and prepend it to image before fip image gets generated
ifeq (${CST_DIR},)
  $(error Error: CST_DIR not set)
endif

# Rules are created for generating and appending CSF header to images before
# FIT image generation

# CST_BL31
define CST_BL31_RULE
$(1): $(2)
	@echo " Generating CSF Header for $$@ $$<"
	$(Q)$(CST_DIR)/create_hdr_esbc --in $(2) --out $(1) --app_off ${CSF_HDR_SZ} \
					--app $(2) ${BL31_INPUT_FILE}
endef

CST_BL31_SUFFIX := .cst

# CST_BL32
define CST_BL32_RULE
$(1): $(2)
	@echo " Generating CSF Header for $$@ $$<"
	$(Q)$(CST_DIR)/create_hdr_esbc --in $(2) --out $(1) --app_off ${CSF_HDR_SZ} \
					--app $(2) ${BL32_INPUT_FILE}
endef

CST_BL32_SUFFIX := .cst

# CST_BL33
define CST_BL33_RULE
$(1): $(2)
	@echo " Generating CSF Header for $$@ $$<"
	$(Q)$(CST_DIR)/create_hdr_esbc --in $(2) --out $(1) --app_off ${CSF_HDR_SZ} \
					--app $(2) ${BL33_INPUT_FILE}
endef

CST_BL33_SUFFIX := .cst

# CST_SCP_BL2
define CST_SCP_BL2_RULE
$(1): $(2)
	@echo " Generating CSF Header for $$@ $$<"
	$(Q)$(CST_DIR)/create_hdr_esbc --in $(2) --out $(1) --app_off ${CSF_HDR_SZ} \
					--app $(2) ${FUSE_INPUT_FILE}
endef

CST_SCP_BL2_SUFFIX := .cst
