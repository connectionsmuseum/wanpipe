/*
 * Copyright (c) 2001
 *	Alex Feldman <al.feldman@sangoma.com>.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by Alex Feldman.
 * 4. Neither the name of the author nor the names of any co-contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY Alex Feldman AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL Alex Feldman OR THE VOICES IN HIS HEAD
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 *
 *	$Id: sdla_te1_pmc.h,v 1.4 2007-04-25 21:23:03 sangoma Exp $
 */

/*****************************************************************************
 * sdla_te1_pmc.h	Sangoma TE1 configuration definitions (PMC).
 *
 * Author:      Alex Feldman
 *
 * ============================================================================
 * Aprl 30, 2001	Alex Feldman	Initial version.
 ****************************************************************************
*/
#ifndef	__SDLA_TE1_PMC_H
#    define	__SDLA_TE1_PMC_H

/*
 ******************************************************************************
						  DEFINES AND MACROS
 ******************************************************************************
*/
#define PMC4_LINE_DELTA			0x100

#define REG_GLOBAL_CFG			0x00
#define BIT_GLOBAL_PIO_OE		0x80
#define BIT_GLOBAL_PIO			0x40
#define BIT_GLOBAL_TRKEN		0x04
#define BIT_GLOBAL_E1			0x01

#define REG_RECEIVE_OPT			0x02
#define BIT_RECEIVE_OPT_UNF		0x40
#define BIT_RECEIVE_OPT_RXELSTBYP	0x20

#define REG_TX_LINE_CONF		0x04
#define BIT_TX_LINE_CONF_TJATBYP	0x80
#define BIT_TX_LINE_CONF_TAISEN		0x40
#define BIT_TX_LINE_CONF_TAUXP		0x20

#define REG_TX_TIMING_OPT		0x06
#define BIT_TX_PLLREF1			0x08
#define BIT_TX_PLLREF0			0x04
#define BIT_TX_TXELSTBYP		0x01

#define REG_MASTER_DIAG			0x0A
#define BIT_MASTER_DIAG_PAYLB		0x20
#define BIT_MASTER_DIAG_LINELB		0x10
#define BIT_MASTER_DIAG_DDLB		0x04

#define REG_REVISION_CHIP_ID		0x0D
#define MASK_CHIP_ID			0xE0
#define CHIP_ID_COMET_QUAD		0x40
#define CHIP_ID_COMET			0x20
#define DECODE_CHIPID(chip_id)						\
		(chip_id == CHIP_ID_COMET_QUAD) ? "COMET-QUAD" :	\
		(chip_id == CHIP_ID_COMET) ? "COMET" : "Unknown"

#define REG_RESET			0x0E
#define BIT_RESET			0x01

#define REG_PRGD_CTRL			0x0F
#define BIT_PRGD_CTRL_HDLC3		0x80
#define BIT_PRGD_CTRL_HDLC2		0x40
#define BIT_PRGD_CTRL_HDLC1		0x20
#define BIT_PRGD_CTRL_Nx56k_GEN		0x10
#define BIT_PRGD_CTRL_Nx56k_DET		0x08
#define BIT_PRGD_CTRL_RXPATGEN		0x04
#define BIT_PRGD_CTRL_UNF_GEN		0x02
#define BIT_PRGD_CTRL_UNF_DET		0x01

#define REG_CDRC_CFG			0x10
#define BIT_CDRC_CFG_AMI		0x80
#define BIT_CDRC_CFG_LOS1		0x40
#define BIT_CDRC_CFG_LOS0		0x20

#define REG_CDRC_INT_STATUS		0x12
#define BIT_CDRC_INT_STATUS_LCVI	0x80
#define BIT_CDRC_INT_STATUS_LOSI	0x40
#define BIT_CDRC_INT_STATUS_LCSDI	0x20
#define BIT_CDRC_INT_STATUS_ZNDI	0x10
#define BIT_CDRC_INT_STATUS_LOSV	0x01

#define REG_ALTLOS_STATUS		0x13
#define BIT_ALTLOS_STATUS_ALTLOSE	0x80
#define BIT_ALTLOS_STATUS_ALTLOSI	0x40
#define BIT_ALTLOS_STATUS_ALTLOS	0x01

#define REG_RJAT_CFG			0x17
#define BIT_RJAT_CENT			0x10

#define REG_TJAT_CFG			0x1B
#define BIT_TJAT_CENT			0x10

#define REG_RX_ELST_CFG			0x1C
#define MASK_RX_ELST_CFG		0x03
#define BIT_RX_ELST_IR			0x02
#define BIT_RX_ELST_OR			0x01

#define REG_TX_ELST_CFG			0x20
#define MASK_TX_ELST_CFG		0x03
#define BIT_TX_ELST_IR			0x02
#define BIT_TX_ELST_OR			0x01

#define REG_BRIF_CFG			0x30
#define BIT_BRIF_NXDS0_1		0x80
#define BIT_BRIF_NXDS0_0		0x40
#define BIT_BRIF_CMODE			0x20
#define BIT_BRIF_DE			0x10
#define BIT_BRIF_FE			0x08
#define BIT_BRIF_CMS			0x04
#define BIT_BRIF_RATE1			0x02
#define BIT_BRIF_RATE0			0x01

#define REG_BRIF_FR_PULSE_CFG		0x31
#define BIT_BRIF_FPMODE			0x20
#define BIT_BRIF_ROHM			0x08

#define REG_BRIF_DATA_CFG		0x32
#define BIT_BRIF_DATA_TRI_0		0x01	/* PMC4351 */
#define BIT_BRIF_DATA_TRI		0x01	/* PMC4354 */

#define REG_BTIF_CFG			0x40
#define BIT_BTIF_NXDS0_1		0x80
#define BIT_BTIF_NXDS0_0		0x40
#define BIT_BTIF_CMODE			0x20
#define BIT_BTIF_DE			0x10
#define BIT_BTIF_FE			0x08
#define BIT_BTIF_RATE0			0x01

#define REG_BTIF_FR_PULSE_CFG		0x41
#define BIT_BTIF_FPMODE			0x01

#define REG_BTIF_CFG_STATUS		0x42
#define BIT_BTIF_CFG_STATUS_TPTYP	0x80
#define BIT_BTIF_CFG_STATUS_TPTYE	0x40
#define BIT_BTIF_CFG_STATUS_TDI		0x20
#define BIT_BTIF_CFG_STATUS_TSIGI	0x10
#define BIT_BTIF_CFG_STATUS_PTY_EXTD	0x08

#define REG_BTIF_BIT_OFF		0x44
#define BIT_BTIF_BIT_OFF_BOFF_EN	0x08
#define BIT_BTIF_BIT_OFF_BOFF_2		0x04
#define BIT_BTIF_BIT_OFF_BOFF_1		0x02
#define BIT_BTIF_BIT_OFF_BOFF_0		0x01

#define REG_T1_FRMR_CFG			0x48
#define BIT_T1_FRMR_ESF			0x20
#define BIT_T1_FRMR_ESFFA		0x10
#define BIT_T1_FRMR_FMS1		0x08
#define BIT_T1_FRMR_FMS0		0x04
#define BIT_T1_FRMR_JPN			0x02

#define REG_SIGX_CFG			0x50
#define BIT_SIGX_ESF			0x04
#define BIT_SIGX_IND			0x02
#define BIT_SIGX_PCCE			0x01
#define BIT_SIGX_SIGE			0x20
#define BIT_SIGX_COSS			0x40
#define REG_SIGX_CHG_30_25		0x50
#define MASK_SIGX_COSS_30_25		0x3F
#define REG_SIGX_CHG_24_17		0x51
#define REG_SIGX_CHG_16_9		0x52
#define REG_SIGX_CHG_8_1		0x53

#define REG_SIGX_TIMESLOT_IND_STATUS	0x51
#define BIT_SIGX_BUSY			0x80
#define REG_SIGX_TIMESLOT_IND_ACCESS	0x52
#define BIT_SIGX_TS_IND_ACCESS_READ	0x80
#define REG_SIGX_TIMESLOT_IND_DATA_BUFFER 0x53

#define REG_SIGX_CURRENT		0x10
#define BIT_SIGX_CURRENT_A_N		0x80
#define BIT_SIGX_CURRENT_B_N		0x40
#define BIT_SIGX_CURRENT_C_N		0x20
#define BIT_SIGX_CURRENT_D_N		0x10
#define BIT_SIGX_CURRENT_A_N16		0x08
#define BIT_SIGX_CURRENT_B_N16		0x04
#define BIT_SIGX_CURRENT_C_N16		0x02
#define BIT_SIGX_CURRENT_D_N16		0x01
#define BIT_SIGX_A			0x08
#define BIT_SIGX_B			0x04
#define BIT_SIGX_C			0x02
#define BIT_SIGX_D			0x01

#define REG_SIGX_DELAYED_SIGDATA	0x20
#define BIT_SIGX_DELAYED_SIGDATA_A	0x08
#define BIT_SIGX_DELAYED_SIGDATA_B	0x04
#define BIT_SIGX_DELAYED_SIGDATA_C	0x02
#define BIT_SIGX_DELAYED_SIGDATA_D	0x01

#define REG_SIGX_CHANCFG		0x40
#define BIT_SIGX_CHANCFG_RINV1		0x08
#define BIT_SIGX_CHANCFG_RINV0		0x04
#define BIT_SIGX_CHANCFG_RFIX		0x04
#define BIT_SIGX_CHANCFG_RPOL		0x02
#define BIT_SIGX_CHANCFG_RDEBE		0x01

#define REG_T1_XBAS_CFG			0x54
#define BIT_T1_XBAS_JPN			0x40
#define BIT_T1_XBAS_B8ZS		0x20
#define BIT_T1_XBAS_ESF			0x10
#define BIT_T1_XBAS_FMS1		0x08
#define BIT_T1_XBAS_FMS0		0x04
#define BIT_T1_XBAS_ZCS1		0x02
#define BIT_T1_XBAS_ZCS0		0x01

#define REG_T1_XBAS_ALARM_TX		0x55
#define BIT_T1_XBAS_ALARM_TX_XYEL	0x02
#define BIT_T1_XBAS_ALARM_TX_XAIS	0x01

/* PMON Framing Bit Error Count */
#define REG_PMON_BIT_ERROR		0x59
#define BITS_PMON_BIT_ERROR		0x7F
/* PMON OOF/COFA/Far End Block Error Count LSB */
#define REG_PMON_OOF_FEB_LSB_ERROR	0x5A
/* PMON OOF/COFA/Far End Block Error Count MSB */
#define REG_PMON_OOF_FEB_MSB_ERROR	0x5B
#define BITS_PMON_OOF_FEB_MSB_ERROR	0x03
/* PMON Bit Error/CRC Error Count LSB */
#define REG_PMON_BIT_CRC_LSB_ERROR	0x5C
/* PMON Bit Error/CRC Error Count MSB */
#define REG_PMON_BIT_CRC_MSB_ERROR	0x5D
#define BITS_PMON_BIT_CRC_MSB_ERROR	0x03
/* PMON LCV Count LSB */
#define REG_PMON_LCV_LSB_COUNT		0x5E
/* PMON LCV Count MSB */
#define REG_PMON_LCV_MSB_COUNT		0x5F
#define BITS_PMON_LCV_MSB_COUNT		0x1F

#define REG_T1_ALMI_CFG			0x60
#define BIT_T1_ALMI_CFG_ESF		0x10
#define BIT_T1_ALMI_CFG_FMS1		0x08
#define BIT_T1_ALMI_CFG_FMS0		0x04

#define REG_T1_ALMI_DET_STATUS		0x63
#define BIT_T1_ALMI_DET_STATUS_REDD	0x04
#define BIT_T1_ALMI_DET_STATUS_YELD	0x02
#define BIT_T1_ALMI_DET_STATUS_AISD	0x01

/* T1 XBOC Code */
#define REG_T1_XBOC_CODE		0x67
#define BITS_T1_XBOC_DISABLE		0x3F 
#define MASK_T1_XBOC_CODE		0x3F 

/* T1 RBOC Enable */
#define REG_T1_RBOC_ENABLE		0x6A
#define BIT_T1_RBOC_ENABLE_IDLE		0x04
#define BIT_T1_RBOC_ENABLE_AVC		0x02
#define BIT_T1_RBOC_ENABLE_BOCE		0x01

/* T1 RBOC Code Status */
#define REG_T1_RBOC_CODE_STATUS		0x6B
#define BIT_T1_RBOC_CODE_STATUS_IDLEI	0x80
#define BIT_T1_RBOC_CODE_STATUS_BOCI	0x40
#define MASK_T1_RBOC_CODE_STATUS	0x3F

/* TPSC Indirect Register Access */
#define REG_TPSC_CFG					0x6C
#define MASK_TPSC_CFG					0x03
#define BIT_TPSC_IND					0x02
#define BIT_TPSC_PCCE					0x01
#define REG_TPSC_MICRO_ACCESS_STATUS			0x6D
#define BIT_TPSC_BUSY					0x80
#define REG_TPSC_CHANNEL_INDIRECT_ADDRESS_CONTROL	0x6E
#define REG_TPSC_CHANNEL_INDIRECT_DATA_BUFFER		0x6F
#define REG_TPSC_DATA_CTRL_BYTE				0x20
#define MASK_TPSC_DATA_CTRL_BYTE			0xFC
#define BIT_TPSC_DATA_CTRL_BYTE_INVERT			0x80
#define BIT_TPSC_DATA_CTRL_BYTE_IDLE_DS0		0x40
#define BIT_TPSC_DATA_CTRL_BYTE_SIGNINV			0x10
#define BIT_TPSC_DATA_CTRL_BYTE_LOOP			0x04
#define BIT_TPSC_DATA_CTRL_BYTE_ZCS0			0x02
#define BIT_TPSC_DATA_CTRL_BYTE_ZCS1			0x01
#define REG_TPSC_IDLE_CODE_BYTE				0x40
#define REG_TPSC_SIGNALING_BYTE				0x60
#define REG_TPSC_E1_CTRL_BYTE				0x60
#define BIT_TPSC_E1_CTRL_BYTE_SUBS			0x80
#define BIT_TPSC_E1_CTRL_BYTE_DS0			0x40
#define BIT_TPSC_E1_CTRL_BYTE_DS1			0x20
#define BIT_TPSC_E1_CTRL_BYTE_A				0x08
#define BIT_TPSC_E1_CTRL_BYTE_B				0x04
#define BIT_TPSC_E1_CTRL_BYTE_C				0x02
#define BIT_TPSC_E1_CTRL_BYTE_D				0x01
#define BIT_TPSC_SIGBYTE_SIGC_0			0x80
#define BIT_TPSC_SIGBYTE_SIGC_1			0x40
#define BIT_TPSC_SIGBYTE_DS1			0x20
#define BIT_TPSC_SIGBYTE_SIGSRC			0x10
#define BIT_TPSC_SIGBYTE_A			0x08
#define BIT_TPSC_SIGBYTE_B			0x04
#define BIT_TPSC_SIGBYTE_C			0x02
#define BIT_TPSC_SIGBYTE_D			0x01

/* RPSC Indirect Register Access */
#define REG_RPSC_CFG					0x70
#define MASK_RPSC_CFG					0x03
#define BIT_RPSC_IND					0x02
#define BIT_RPSC_PCCE					0x01
#define REG_RPSC_MICRO_ACCESS_STATUS			0x71
#define BIT_RPSC_BUSY					0x80
#define REG_RPSC_CHANNEL_INDIRECT_ADDRESS_CONTROL	0x72
#define REG_RPSC_CHANNEL_INDIRECT_DATA_BUFFER		0x73
#define REG_RPSC_DATA_CTRL_BYTE				0x20
#define MASK_RPSC_DATA_CTRL_BYTE			0xFC
#define BIT_RPSC_DATA_CTRL_BYTE_DTRKC			0x40
#define BIT_RPSC_DATA_CTRL_BYTE_SIGNINV			0x04
#define REG_RPSC_DATA_COND_BYTE				0x40
#define REG_RPSC_SIGBYTE				0x60
#define BIT_RPSC_SIGBYTE_A				0x08
#define BIT_RPSC_SIGBYTE_B				0x04
#define BIT_RPSC_SIGBYTE_C				0x02
#define BIT_RPSC_SIGBYTE_D				0x01

#define REG_E1_TRAN_CFG			0x80
#define BIT_E1_TRAN_AMI			0x80
#define BIT_E1_TRAN_SIGEN		0x40
#define BIT_E1_TRAN_DLEN		0x20
#define BIT_E1_TRAN_GENCRC		0x10
#define BIT_E1_TRAN_FDIS		0x08
#define BIT_E1_TRAN_FEBEDIS		0x04
#define BIT_E1_TRAN_INDIS		0x02
#define BIT_E1_TRAN_XDIS		0x01

#define REG_E1_TRAN_TX_ALARM_CTRL	0x81
#define BIT_E1_TRAN_TX_ALARM_RAI	0x08
#define BIT_E1_TRAN_TX_ALARM_YBIT	0x04
#define BIT_E1_TRAN_TX_ALARM_AIS	0x01

#define REG_E1_TRAN_NATB_CODESEL	0x86
#define BIT_E1_TRAN_NATB_CODESEL_SaSEL2	0x80
#define BIT_E1_TRAN_NATB_CODESEL_SaSEL1	0x40
#define BIT_E1_TRAN_NATB_CODESEL_SaSEL0	0x20
#define BIT_E1_TRAN_NATB_CODESEL_Sa4	0x60
#define BIT_E1_TRAN_NATB_CODESEL_Sa5	0x80
#define BIT_E1_TRAN_NATB_CODESEL_Sa6	0xA0
#define BIT_E1_TRAN_NATB_CODESEL_Sa7	0xC0
#define BIT_E1_TRAN_NATB_CODESEL_Sa8	0xE0

#define REG_E1_TRAN_NATB_CODE		0x87
#define BIT_E1_TRAN_NATB_CODE_SaXEN1	0x80
#define BIT_E1_TRAN_NATB_CODE_SaXEN2	0x40
#define BIT_E1_TRAN_NATB_CODE_SaXEN3	0x20
#define BIT_E1_TRAN_NATB_CODE_SaXEN4	0x10
#define BIT_E1_TRAN_NATB_CODE_SaX1	0x08
#define BIT_E1_TRAN_NATB_CODE_SaX2	0x04
#define BIT_E1_TRAN_NATB_CODE_SaX3	0x02
#define BIT_E1_TRAN_NATB_CODE_SaX4	0x01

#define REG_E1_FRMR_CFG			0x90
#define BIT_E1_FRMR_CRCEN		0x80
#define BIT_E1_FRMR_CASDIS		0x40
#define BIT_E1_FRMR_REFCRCEN		0x02

/* E1 FRMR Maintenance Mode Options */
#define REG_E1_FRMR_MAINT_OPT		0x91
#define BIT_E1_FRMR_MAINT_OPT_AISC	0x02

/* E1 FRMR framing status */
#define REG_E1_FRMR_FR_STATUS		0x96
#define BIT_E1_FRMR_FR_STATUS_C2NCIWV	0x80
#define BIT_E1_FRMR_FR_STATUS_OOFV	0x40
#define BIT_E1_FRMR_FR_STATUS_OOSMFV	0x20
#define BIT_E1_FRMR_FR_STATUS_OOCMFV	0x10
#define BIT_E1_FRMR_FR_STATUS_OOOFV	0x08
#define BIT_E1_FRMR_FR_STATUS_RAICCRCV	0x04
#define BIT_E1_FRMR_FR_STATUS_CFEBEV	0x02
#define BIT_E1_FRMR_FR_STATUS_V52LINKV	0x01

/* E1 FRMR Maintenance/Alram Status */
#define REG_E1_FRMR_MAINT_STATUS	0x97
#define BIT_E1_FRMR_MAINT_STATUS_RAIV	0x80
#define BIT_E1_FRMR_MAINT_STATUS_RED	0x08
#define BIT_E1_FRMR_MAINT_STATUS_AIS	0x04

 /* TDPR Configuration */
#define REG_TDPR_CFG			0xA8
#define BIT_TDPR_CFG_EN			0x01

/* TDPR Transmit Data */
#define REG_TDPR_TX_DATA		0xAD

/* Comet-QUAD Master Interrupt Source */
#define REG_COMET_QUAD_MASTER_INTR	0xBC
#define BITS_COMET_QUAD_MASTER_INTR	0x0F

/* RDLC Configuration */
#define REG_RDLC_CFG			0xC0
#define BIT_RDLC_CFG_EN			0x01

/* RDLC Interrupt Control */
#define REG_RDLC_INT_CTRL		0xC1
#define BIT_RDLC_INT_CTRL_INTE		0x80

/* RDLC Status */
#define REG_RDLC_STATUS			0xC2
#define BIT_RDLC_STATUS_PKIN		0x10
#define BIT_RDLC_STATUS_INTR		0x01

/* RDLC Data */
#define REG_RDLC_DATA			0xC3
 
#define REG_CSU_CFG			0xD6
#define MASK_CSU_CFG			0xC7
#define BIT_CSU_MODE2			0x04
#define BIT_CSU_MODE1			0x02
#define BIT_CSU_MODE0			0x01

/* RLPS Equalization Indirect Data (MSB) */
#define REG_RLPS_IND_DATA_1		0xD8	
/* RLPS Equalization Indirect Data		 */
#define REG_RLPS_IND_DATA_2		0xD9	
/* RLPS Equalization Indirect Data		 */
#define REG_RLPS_IND_DATA_3		0xDA	
/* RLPS Equalization Indirect Data (LSB) */
#define REG_RLPS_IND_DATA_4		0xDB	

#define REG_EQ_VREF			0xDC

#define REG_RLPS_FUSE_CTRL_STAT		0xDD

#define REG_PRGD_INT_STATUS_EN		0xE1
#define BIT_PRGD_INT_STATUS_EN_SYNCE	0x80
#define BIT_PRGD_INT_STATUS_EN_BEE	0x40
#define BIT_PRGD_INT_STATUS_EN_XFERE	0x20
#define BIT_PRGD_INT_STATUS_EN_SYNCV	0x10
#define BIT_PRGD_INT_STATUS_EN_SYNCI	0x08
#define BIT_PRGD_INT_STATUS_EN_BEI	0x04
#define BIT_PRGD_INT_STATUS_EN_XFERI	0x02
#define BIT_PRGD_INT_STATUS_EN_OVR	0x01

#define REG_XLPG_LINE_CFG		0xF0
#define BIT_XLPG_LINE_CFG_HIGHZ		0x80

#define REG_XLPG_WAVEFORM_ADDR		0xF2

#define REG_XLPG_WAVEFORM_DATA		0xF3

#define REG_XLPG_TNC			0xF4
#define BIT_XLPG_TNC_7			0x80
#define BIT_XLPG_TNC_6			0x40
#define BIT_XLPG_TNC_5			0x20
#define BIT_XLPG_TNC_4			0x10
#define BIT_XLPG_TNC_3			0x08
#define BIT_XLPG_TNC_2			0x04
#define BIT_XLPG_TNC_1			0x02

#define REG_XLPG_TPC			0xF5
#define BIT_XLPG_TPC_7			0x80
#define BIT_XLPG_TPC_6			0x40
#define BIT_XLPG_TPC_5			0x20
#define BIT_XLPG_TPC_4			0x10
#define BIT_XLPG_TPC_3			0x08
#define BIT_XLPG_TPC_2			0x04
#define BIT_XLPG_TPC_1			0x02

#define REG_XLPG_INIT			0xF6

#define REG_RLPS_CFG_STATUS		0xF8
#define BIT_RLPS_CFG_STATUS_ALOSI	0x80
#define BIT_RLPS_CFG_STATUS_ALOSV	0x40
#define BIT_RLPS_CFG_STATUS_ALOSE	0x20
#define BIT_RLPS_CFG_STATUS_SQUELCHE	0x10
#define BIT_RLPS_CFG_STATUS_LONGE	0x01

#define REG_RLPS_ALOS_DET_CLR_THR	0xF9
#define BIT_RLPS_ALOS_CLR_THR_2		0x40
#define BIT_RLPS_ALOS_CLR_THR_1		0x20
#define BIT_RLPS_ALOS_CLR_THR_0		0x10
#define BIT_RLPS_ALOS_DET_THR_2		0x04
#define BIT_RLPS_ALOS_DET_THR_1		0x02
#define BIT_RLPS_ALOS_DET_THR_0		0x01

#define REG_RLPS_ALOS_DET_PER		0xFA
#define BIT_RLPS_ALOS_DET_PER_7		0x80
#define BIT_RLPS_ALOS_DET_PER_6		0x40
#define BIT_RLPS_ALOS_DET_PER_5		0x20
#define BIT_RLPS_ALOS_DET_PER_4		0x10
#define BIT_RLPS_ALOS_DET_PER_3		0x08
#define BIT_RLPS_ALOS_DET_PER_2		0x04
#define BIT_RLPS_ALOS_DET_PER_1		0x02
#define BIT_RLPS_ALOS_DET_PER_0		0x01

#define REG_RLPS_ALOS_CLR_PER		0xFB
#define BIT_RLPS_ALOS_CLR_PER_7		0x80
#define BIT_RLPS_ALOS_CLR_PER_6		0x40
#define BIT_RLPS_ALOS_CLR_PER_5		0x20
#define BIT_RLPS_ALOS_CLR_PER_4		0x10
#define BIT_RLPS_ALOS_CLR_PER_3		0x08
#define BIT_RLPS_ALOS_CLR_PER_2		0x04
#define BIT_RLPS_ALOS_CLR_PER_1		0x02
#define BIT_RLPS_ALOS_CLR_PER_0		0x01

/* RLPS Equalization Indirect Address    */
#define REG_RLPS_EQ_ADDR		0xFC

/* RLPS Equalization Read/Write Select	 */
#define REG_RLPS_EQ_RWB			0xFD
#define BIT_RLPS_EQ_RWB			0x80

#define REG_RLPS_EQ_STATUS		0xFE

#define REG_RLPS_EQ_CFG			0xFF
#define MASK_RLPS_EQ_CFG		0xC7
#define BIT_RLPS_EQ_RESERVED		0x08	/* PMC4351 */
#define BIT_RLPS_EQ_FREQ_2		0x02	/* PMC4351 */
#define BIT_RLPS_EQ_FREQ_1		0x02	/* PMC4351 */
#define BIT_RLPS_EQ_FREQ_0		0x01	/* PMC4351 */
#define BIT_RLPS_EQ_EQEN		0x08	/* PMC4354 */
#define BIT_RLPS_EQ_RESERVED_3		0x04	/* PMC4354 */
#define BIT_RLPS_EQ_RESERVED_1		0x03	/* PMC4354 */
#define BIT_RLPS_EQ_RESERVED_0		0x01	/* PMC4354 */

/********************************************/
/************ Interrupt Register ************/
/********************************************/
#define REG_INT_SRC_1			0x07
#define BITS_TX_INT_SRC_1		0x0C
#define BITS_RX_INT_SRC_1		0xF3
#define BIT_INT_SRC_1_PMON		0x80
#define BIT_INT_SRC_1_PRGD		0x40
#define BIT_INT_SRC_1_FRMR		0x20
#define BIT_INT_SRC_1_SIGX		0x10
#define BIT_INT_SRC_1_APRM		0x08
#define BIT_INT_SRC_1_TJAT		0x04
#define BIT_INT_SRC_1_RJAT		0x02
#define BIT_INT_SRC_1_CDRC		0x01

#define REG_INT_SRC_2			0x08
#define BITS_TX_INT_SRC_2		0x0F
#define BITS_RX_INT_SRC_2		0xF0
#define BIT_INT_SRC_2_RX_ELST		0x80
#define BIT_INT_SRC_2_RDLC_3		0x40
#define BIT_INT_SRC_2_RDLC_2		0x20
#define BIT_INT_SRC_2_RDLC_1		0x10
#define BIT_INT_SRC_2_TX_ELST		0x08
#define BIT_INT_SRC_2_TDPR_3		0x04
#define BIT_INT_SRC_2_TDPR_2		0x02
#define BIT_INT_SRC_2_TDPR_1		0x01

#define REG_INT_SRC_3			0x09
#define BITS_TX_INT_SRC_3		0x15
#define BITS_RX_INT_SRC_3		0xEA
#define BIT_INT_SRC_3_IBCD		0x80
#define BIT_INT_SRC_3_PDVD		0x40
#define BIT_INT_SRC_3_RBOC		0x20
#define BIT_INT_SRC_3_XPDE		0x10
#define BIT_INT_SRC_3_ALMI		0x08
#define BIT_INT_SRC_3_TRAN		0x04
#define BIT_INT_SRC_3_RLPS		0x02
#define BIT_INT_SRC_3_BTIF		0x01
 
#define REG_CDRC_INT_EN			0x11
#define BIT_CDRC_INT_EN_LCVE		0x80
#define BIT_CDRC_INT_EN_LOSE		0x40
#define BIT_CDRC_INT_EN_LCSDE		0x20
#define BIT_CDRC_INT_EN_ZNDE		0x10
 
#define REG_CDRC_INT_STATUS		0x12
#define BIT_CDRC_INT_STATUS_LCVI	0x80
#define BIT_CDRC_INT_STATUS_LOSI	0x40
#define BIT_CDRC_INT_STATUS_LCSDI	0x20
#define BIT_CDRC_INT_STATUS_ZNDI	0x10
#define BIT_CDRC_INT_STATUS_LOSV	0x01

#define REG_RJAT_INT_STATUS		0x14
#define BIT_RJAT_INT_STATUS_OVRI	0x02
#define BIT_RJAT_INT_STATUS_UNDI	0x01

#define REG_TJAT_INT_STATUS		0x18
#define BIT_TJAT_INT_STATUS_OVRI	0x02
#define BIT_TJAT_INT_STATUS_UNDI	0x01
 
#define REG_RX_ELST_INT_EN_STATUS	0x1D
#define BIT_RX_ELST_INT_EN_STATUS_SLIPE	0x04
#define BIT_RX_ELST_INT_EN_STATUS_SLIPD	0x02
#define BIT_RX_ELST_INT_EN_STATUS_SLIPI	0x01

#define REG_TX_ELST_INT_EN_STATUS	0x21
#define BIT_TX_ELST_INT_EN_STATUS_SLIPE	0x04
#define BIT_TX_ELST_INT_EN_STATUS_SLIPD	0x02
#define BIT_TX_ELST_INT_EN_STATUS_SLIPI	0x01

#define REG_T1_FRMR_INT_EN		0x49
#define BIT_T1_FRMR_INT_EN_COFAE	0x20
#define BIT_T1_FRMR_INT_EN_FERE		0x10
#define BIT_T1_FRMR_INT_EN_BEEE		0x08
#define BIT_T1_FRMR_INT_EN_SFEE		0x04
#define BIT_T1_FRMR_INT_EN_MFPE		0x02
#define BIT_T1_FRMR_INT_EN_INFRE	0x01	

#define REG_T1_FRMR_INT_STATUS		0x4A
#define BIT_T1_FRMR_INT_STATUS_COFAI	0x80
#define BIT_T1_FRMR_INT_STATUS_FERI	0x40
#define BIT_T1_FRMR_INT_STATUS_BEEI	0x20
#define BIT_T1_FRMR_INT_STATUS_SFEI	0x10
#define BIT_T1_FRMR_INT_STATUS_MFPI	0x08
#define BIT_T1_FRMR_INT_STATUS_INFRI	0x04
#define BIT_T1_FRMR_INT_STATUS_MFP	0x02
#define BIT_T1_FRMR_INT_STATUS_INFR	0x01

#define REG_IBCD_CFG			0x4C
#define BIT_IBCD_CFG_DSEL1		0x08
#define BIT_IBCD_CFG_DSEL0		0x04
#define BIT_IBCD_CFG_ASEL1		0x02
#define BIT_IBCD_CFG_ASEL0		0x01

#define REG_IBCD_INT_EN_STATUS		0x4D
#define BIT_IBCD_INT_EN_STATUS_LBACP	0x80
#define BIT_IBCD_INT_EN_STATUS_LBDCP	0x40
#define BIT_IBCD_INT_EN_STATUS_LBAE	0x20
#define BIT_IBCD_INT_EN_STATUS_LBDE	0x10
#define BIT_IBCD_INT_EN_STATUS_LBAI	0x08
#define BIT_IBCD_INT_EN_STATUS_LBDI	0x04
#define BIT_IBCD_INT_EN_STATUS_LBA	0x02
#define BIT_IBCD_INT_EN_STATUS_LBD	0x01

#define REG_IBCD_ACTIVATE_CODE		0x4E
#define BIT_IBCD_ACTIVATE_CODE_ACT7	0x80
#define BIT_IBCD_ACTIVATE_CODE_ACT6	0x40
#define BIT_IBCD_ACTIVATE_CODE_ACT5	0x20
#define BIT_IBCD_ACTIVATE_CODE_ACT4	0x10
#define BIT_IBCD_ACTIVATE_CODE_ACT3	0x08
#define BIT_IBCD_ACTIVATE_CODE_ACT2	0x04
#define BIT_IBCD_ACTIVATE_CODE_ACT1	0x02
#define BIT_IBCD_ACTIVATE_CODE_ACT0	0x01

#define REG_IBCD_DEACTIVATE_CODE	0x4F
#define BIT_IBCD_DEACTIVATE_CODE_DACT7	0x80
#define BIT_IBCD_DEACTIVATE_CODE_DACT6	0x40
#define BIT_IBCD_DEACTIVATE_CODE_DACT5	0x20
#define BIT_IBCD_DEACTIVATE_CODE_DACT4	0x10
#define BIT_IBCD_DEACTIVATE_CODE_DACT3	0x08
#define BIT_IBCD_DEACTIVATE_CODE_DACT2	0x04
#define BIT_IBCD_DEACTIVATE_CODE_DACT1	0x02
#define BIT_IBCD_DEACTIVATE_CODE_DACT0	0x01

#define REG_PMON_INT_EN_STATUS		0x58
#define BIT_PMON_INT_EN_STATUS_INTE	0x04
#define BIT_PMON_INT_EN_STATUS_XFER	0x02
#define BIT_PMON_INT_EN_STATUS_OVR	0x01

#define REG_T1_ALMI_INT_EN		0x61
#define BIT_T1_ALMI_INT_EN_FASTD	0x10
#define BIT_T1_ALMI_INT_EN_ACCEL	0x08
#define BIT_T1_ALMI_INT_EN_YELE		0x04
#define BIT_T1_ALMI_INT_EN_REDE		0x02
#define BIT_T1_ALMI_INT_EN_AISE		0x01

#define REG_T1_ALMI_INT_STATUS		0x62
#define BIT_T1_ALMI_INT_STATUS_YELI	0x20
#define BIT_T1_ALMI_INT_STATUS_REDI	0x10
#define BIT_T1_ALMI_INT_STATUS_AISI	0x08
#define BIT_T1_ALMI_INT_STATUS_YEL	0x04
#define BIT_T1_ALMI_INT_STATUS_RED	0x02
#define BIT_T1_ALMI_INT_STATUS_AIS	0x01

#define REG_PDVD_INT_EN_STATUS		0x65
#define BIT_PDVD_INT_EN_STATUS_PDV	0x10
#define BIT_PDVD_INT_EN_STATUS_Z16DI	0x08
#define BIT_PDVD_INT_EN_STATUS_PDVI	0x04
#define BIT_PDVD_INT_EN_STATUS_Z16DE	0x02
#define BIT_PDVD_INT_EN_STATUS_PDVE	0x01

#define REG_XPDE_INT_EN_STATUS		0x69
#define BIT_XPDE_INT_EN_STATUS_STUFE	0x80
#define BIT_XPDE_INT_EN_STATUS_STUFF	0x40
#define BIT_XPDE_INT_EN_STATUS_STUFI	0x20
#define BIT_XPDE_INT_EN_STATUS_PDV	0x10
#define BIT_XPDE_INT_EN_STATUS_Z16DI	0x08
#define BIT_XPDE_INT_EN_STATUS_PDVI	0x04
#define BIT_XPDE_INT_EN_STATUS_Z16DE	0x02
#define BIT_XPDE_INT_EN_STATUS_PDVE	0x01
 
#define REG_T1_APRM_INT_STATUS		0x7A
#define BIT_T1_APRM_INT_STATUS_INTR	0x01

#define REG_E1_TRAN_INT_EN		0x84
#define BIT_E1_TRAN_INT_EN_SIGMFE	0x10
#define BIT_E1_TRAN_INT_EN_NFASE	0x08
#define BIT_E1_TRAN_INT_EN_MFE		0x04
#define BIT_E1_TRAN_INT_EN_SMFE		0x02
#define BIT_E1_TRAN_INT_EN_FRME		0x01

#define REG_E1_TRAN_INT_STATUS		0x85
#define BIT_E1_TRAN_INT_STATUS_SIGMFI	0x10
#define BIT_E1_TRAN_INT_STATUS_NFASI	0x08
#define BIT_E1_TRAN_INT_STATUS_MFI	0x04
#define BIT_E1_TRAN_INT_STATUS_SMFI	0x02
#define BIT_E1_TRAN_INT_STATUS_FRMI	0x01

#define REG_E1_FRMR_FRM_STAT_INT_EN		0x92
#define BIT_E1_FRMR_FRM_STAT_INT_EN_C2NCIWE	0x80
#define BIT_E1_FRMR_FRM_STAT_INT_EN_OOFE	0x40
#define BIT_E1_FRMR_FRM_STAT_INT_EN_OOSMFE	0x20
#define BIT_E1_FRMR_FRM_STAT_INT_EN_OOCMFE	0x10
#define BIT_E1_FRMR_FRM_STAT_INT_EN_COFAE	0x08
#define BIT_E1_FRMR_FRM_STAT_INT_EN_FERE	0x04
#define BIT_E1_FRMR_FRM_STAT_INT_EN_SMFERE	0x02
#define BIT_E1_FRMR_FRM_STAT_INT_EN_CMFERE	0x01
 
#define REG_E1_FRMR_M_A_INT_EN 		0x93
#define BIT_E1_FRMR_M_A_INT_EN_RAIE	0x80
#define BIT_E1_FRMR_M_A_INT_EN_RMAIE	0x40
#define BIT_E1_FRMR_M_A_INT_EN_AISDE	0x20
#define BIT_E1_FRMR_M_A_INT_EN_REDE	0x08
#define BIT_E1_FRMR_M_A_INT_EN_AISE	0x04
#define BIT_E1_FRMR_M_A_INT_EN_FEBEE	0x02
#define BIT_E1_FRMR_M_A_INT_EN_CRCEE	0x01

/* E1 FRMR Framing status Interrupt Indication */
#define REG_E1_FRMR_FRM_STAT_INT_IND 		0x94
#define BIT_E1_FRMR_FRM_STAT_INT_IND_C2NCIWI 	0x80
#define BIT_E1_FRMR_FRM_STAT_INT_IND_OOFI 	0x40
#define BIT_E1_FRMR_FRM_STAT_INT_IND_OOSMFI 	0x20
#define BIT_E1_FRMR_FRM_STAT_INT_IND_OOCMFI 	0x10
#define BIT_E1_FRMR_FRM_STAT_INT_IND_COFAI 	0x08
#define BIT_E1_FRMR_FRM_STAT_INT_IND_FERI 	0x04
#define BIT_E1_FRMR_FRM_STAT_INT_IND_SMFERI 	0x02
#define BIT_E1_FRMR_FRM_STAT_INT_IND_CMFERI 	0x01

#define REG_E1_FRMR_M_A_INT_IND 	0x95
#define BIT_E1_FRMR_M_A_INT_IND_RAII 	0x80
#define BIT_E1_FRMR_M_A_INT_IND_FMAII 	0x40
#define BIT_E1_FRMR_M_A_INT_IND_AISDI 	0x20
#define BIT_E1_FRMR_M_A_INT_IND_REDI 	0x08
#define BIT_E1_FRMR_M_A_INT_IND_AISI 	0x04
#define BIT_E1_FRMR_M_A_INT_IND_FEBEI 	0x02
#define BIT_E1_FRMR_M_A_INT_IND_CRCEI 	0x01

#define REG_E1_FRMR_P_A_INT_EN		0x9E
#define BIT_E1_FRMR_P_A_INT_EN_OOOFE	0x80
#define BIT_E1_FRMR_P_A_INT_EN_RAICCRCE	0x40
#define BIT_E1_FRMR_P_A_INT_EN_CFEBEE	0x20
#define BIT_E1_FRMR_P_A_INT_EN_V52LINKE	0x10
#define BIT_E1_FRMR_P_A_INT_EN_IFPE	0x08
#define BIT_E1_FRMR_P_A_INT_EN_ICSMFPE	0x04
#define BIT_E1_FRMR_P_A_INT_EN_ICMFPE	0x02
#define BIT_E1_FRMR_P_A_INT_EN_ISMFPE	0x01

#define REG_E1_FRMR_P_A_INT_STAT		0x9F
#define BIT_E1_FRMR_P_A_INT_STAT_OOOFI		0x80
#define BIT_E1_FRMR_P_A_INT_STAT_RAICCRCI	0x40
#define BIT_E1_FRMR_P_A_INT_STAT_CFEBEI		0x20
#define BIT_E1_FRMR_P_A_INT_STAT_V52LINKI	0x10
#define BIT_E1_FRMR_P_A_INT_STAT_IFPI		0x08
#define BIT_E1_FRMR_P_A_INT_STAT_ICSMFPI	0x04
#define BIT_E1_FRMR_P_A_INT_STAT_ICMFPI		0x02
#define BIT_E1_FRMR_P_A_INT_STAT_ISMFPI		0x01


#endif /* __SDLA_TE1_PMC_H */