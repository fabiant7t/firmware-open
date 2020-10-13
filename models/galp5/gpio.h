/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef MAINBOARD_GPIO_H
#define MAINBOARD_GPIO_H

#include <soc/gpe.h>
#include <soc/gpio.h>

#ifndef __ACPI__

/* Pad configuration in ramstage. */
static const struct pad_config gpio_table[] = {
		PAD_CFG_NF(GPD0, UP_20K, PWROK, NF1),
		PAD_CFG_NF(GPD1, NATIVE, PWROK, NF1),
		PAD_CFG_GPI(GPD2, NONE, PWROK),
		PAD_CFG_NF(GPD3, UP_20K, PWROK, NF1),
		PAD_CFG_NF(GPD4, NONE, PWROK, NF1),
		PAD_CFG_NF(GPD5, NONE, PWROK, NF1),
		PAD_CFG_NF(GPD6, NONE, DEEP, NF1),
		PAD_CFG_TERM_GPO(GPD7, 1, NONE, PWROK),
		PAD_CFG_NF(GPD8, NONE, PWROK, NF1),
		PAD_CFG_TERM_GPO(GPD9, 0, NONE, PWROK),
		PAD_CFG_NF(GPD10, UP_20K, DEEP, NF1),
		PAD_CFG_GPI(GPD11, UP_20K, DEEP),
		PAD_CFG_NF(GPP_A0, TODO_0x3f000, DEEP, NF1),
		PAD_CFG_NF(GPP_A1, TODO_0x3f000, DEEP, NF1),
		PAD_CFG_NF(GPP_A2, TODO_0x3f000, DEEP, NF1),
		PAD_CFG_NF(GPP_A3, TODO_0x3f000, DEEP, NF1),
		PAD_CFG_NF(GPP_A4, TODO_0x3f000, DEEP, NF1),
		PAD_CFG_NF(GPP_A5, TODO_0x3d000, DEEP, NF1),
		PAD_CFG_NF(GPP_A6, TODO_0x3c000, DEEP, NF1),
		PAD_NC(GPP_A7, NONE),
		PAD_CFG_NF(GPP_A8, TODO_0x3c000, DEEP, NF2),
		PAD_CFG_NF(GPP_A9, TODO_0x3c000, DEEP, NF3),
		PAD_NC(GPP_A10, NONE),
		PAD_NC(GPP_A11, NONE),
		PAD_NC(GPP_A12, NONE),
		PAD_CFG_TERM_GPO(GPP_A13, 1, NONE, PLTRST),
		PAD_NC(GPP_A14, NONE),
		PAD_NC(GPP_A15, NONE),
		PAD_NC(GPP_A16, NONE),
		PAD_NC(GPP_A17, NONE),
		PAD_CFG_NF(GPP_A18, TODO_0x24000, DEEP, NF1),
		PAD_NC(GPP_A19, NONE),
		PAD_NC(GPP_A20, NONE),
		PAD_NC(GPP_A21, NONE),
		PAD_NC(GPP_A22, NONE),
		PAD_CFG_TERM_GPO(GPP_A23, 0, NONE, PLTRST),
		PAD_CFG_NF(GPP_B0, TODO_0x3c000, DEEP, NF1),
		PAD_CFG_NF(GPP_B1, TODO_0x3c000, DEEP, NF1),
		PAD_CFG_GPI(GPP_B2, UP_20K, DEEP),
		_PAD_CFG_STRUCT(GPP_B3, 0x80800100, 0x0000),
		PAD_NC(GPP_B4, NONE),
		PAD_NC(GPP_B5, NONE),
		PAD_NC(GPP_B6, NONE),
		PAD_NC(GPP_B7, NONE),
		PAD_CFG_TERM_GPO(GPP_B8, 1, NONE, DEEP),
		PAD_NC(GPP_B9, NONE),
		PAD_NC(GPP_B10, NONE),
		PAD_CFG_NF(GPP_B11, NONE, PWROK, NF1),
		PAD_CFG_NF(GPP_B12, TODO_0x3c000, DEEP, NF1),
		PAD_CFG_NF(GPP_B13, TODO_0x3c000, DEEP, NF1),
		PAD_CFG_TERM_GPO(GPP_B14, 0, TODO_0x3c000, DEEP),
		PAD_CFG_TERM_GPO(GPP_B15, 1, NONE, DEEP),
		PAD_NC(GPP_B16, NONE),
		PAD_NC(GPP_B17, NONE),
		PAD_NC(GPP_B18, NONE),
		PAD_NC(GPP_B19, NONE),
		PAD_NC(GPP_B20, NONE),
		PAD_NC(GPP_B21, NONE),
		PAD_NC(GPP_B22, NONE),
		PAD_CFG_TERM_GPO(GPP_B23, 0, NONE, DEEP),
		PAD_CFG_NF(GPP_C0, TODO_0x3c000, DEEP, NF1),
		PAD_CFG_NF(GPP_C1, TODO_0x3c000, DEEP, NF1),
		PAD_NC(GPP_C2, NONE),
		PAD_CFG_NF(GPP_C3, NONE, DEEP, NF1),
		PAD_CFG_NF(GPP_C4, NONE, DEEP, NF1),
		PAD_NC(GPP_C5, NONE),
		PAD_CFG_NF(GPP_C6, NONE, PWROK, NF1),
		PAD_CFG_NF(GPP_C7, NONE, PWROK, NF1),
		PAD_NC(GPP_C8, NONE),
		PAD_NC(GPP_C9, NONE),
		PAD_NC(GPP_C10, NONE),
		PAD_NC(GPP_C11, NONE),
		PAD_NC(GPP_C12, NONE),
		PAD_NC(GPP_C13, NONE),
		_PAD_CFG_STRUCT(GPP_C14, 0x40100100, 0x3000),
		PAD_NC(GPP_C15, NONE),
		PAD_CFG_NF(GPP_C16, NONE, DEEP, NF1),
		PAD_CFG_NF(GPP_C17, NONE, DEEP, NF1),
		PAD_CFG_NF(GPP_C18, NONE, DEEP, NF1),
		PAD_CFG_NF(GPP_C19, NONE, DEEP, NF1),
		PAD_NC(GPP_C20, NONE),
		PAD_NC(GPP_C21, NONE),
		PAD_CFG_TERM_GPO(GPP_C22, 1, NONE, PLTRST),
		_PAD_CFG_STRUCT(GPP_C23, 0x40880100, 0x0000),
		PAD_CFG_GPI(GPP_D0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_D1, 1, NONE, PLTRST),
		PAD_CFG_GPI(GPP_D2, NONE, PLTRST),
		PAD_CFG_GPI(GPP_D3, NONE, PLTRST),
		PAD_NC(GPP_D4, NONE),
		PAD_CFG_NF(GPP_D5, NONE, DEEP, NF1),
		PAD_CFG_NF(GPP_D6, NONE, DEEP, NF1),
		PAD_CFG_NF(GPP_D7, NONE, DEEP, NF1),
		PAD_CFG_NF(GPP_D8, NONE, DEEP, NF1),
		PAD_NC(GPP_D9, NONE),
		PAD_NC(GPP_D10, NONE),
		PAD_CFG_GPI(GPP_D11, DN_20K, DEEP),
		PAD_CFG_GPI(GPP_D12, DN_20K, DEEP),
		PAD_CFG_TERM_GPO(GPP_D13, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_D14, 1, NONE, PLTRST),
		PAD_NC(GPP_D15, NONE),
		PAD_NC(GPP_D16, NONE),
		PAD_CFG_GPI(GPP_D17, DN_20K, DEEP),
		PAD_CFG_GPI(GPP_D18, DN_20K, DEEP),
		PAD_NC(GPP_D19, NONE),
		PAD_NC(GPP_E0, NONE),
		PAD_CFG_TERM_GPO(GPP_E1, 0, NONE, PLTRST),
		_PAD_CFG_STRUCT(GPP_E2, 0x40880100, 0x0000),
		PAD_CFG_GPI(GPP_E3, DN_20K, DEEP),
		PAD_NC(GPP_E4, NONE),
		PAD_NC(GPP_E5, NONE),
		PAD_NC(GPP_E6, NONE),
		_PAD_CFG_STRUCT(GPP_E7, 0x82840100, 0x0000),
		PAD_NC(GPP_E8, NONE),
		PAD_NC(GPP_E9, NONE),
		PAD_NC(GPP_E10, NONE),
		PAD_NC(GPP_E11, NONE),
		PAD_NC(GPP_E12, NONE),
		PAD_NC(GPP_E13, NONE),
		PAD_CFG_NF(GPP_E14, TODO_0x24000, DEEP, NF1),
		PAD_NC(GPP_E15, NONE),
		PAD_CFG_GPI(GPP_E16, DN_20K, DEEP),
		PAD_NC(GPP_E17, NONE),
		PAD_NC(GPP_E18, NATIVE),
		PAD_NC(GPP_E19, NATIVE),
		PAD_NC(GPP_E20, NONE),
		PAD_NC(GPP_E21, NONE),
		PAD_NC(GPP_E22, NONE),
		PAD_NC(GPP_E23, NONE),
		PAD_CFG_NF(GPP_F0, TODO_0x3c000, DEEP, NF1),
		PAD_CFG_NF(GPP_F1, TODO_0x3f000, DEEP, NF1),
		PAD_CFG_NF(GPP_F2, TODO_0x3c000, DEEP, NF1),
		PAD_CFG_NF(GPP_F3, TODO_0x3f000, DEEP, NF1),
		PAD_NC(GPP_F4, NONE),
		PAD_NC(GPP_F5, NONE),
		PAD_NC(GPP_F6, NONE),
		PAD_CFG_TERM_GPO(GPP_F7, 1, NONE, DEEP),
		PAD_NC(GPP_F8, NONE),
		PAD_CFG_TERM_GPO(GPP_F9, 1, NONE, DEEP),
		PAD_NC(GPP_F10, NONE),
		PAD_NC(GPP_F11, NONE),
		PAD_NC(GPP_F12, NONE),
		PAD_NC(GPP_F13, NONE),
		PAD_NC(GPP_F14, NONE),
		PAD_NC(GPP_F15, NONE),
		PAD_NC(GPP_F16, NONE),
		PAD_CFG_GPI(GPP_F17, NONE, PLTRST),
		PAD_NC(GPP_F18, NONE),
		PAD_NC(GPP_F19, NONE),
		PAD_NC(GPP_F20, TODO_0x3c000),
		PAD_CFG_GPI(GPP_F21, TODO_0x3d000, DEEP),
		PAD_NC(GPP_F22, TODO_0x3c000),
		PAD_NC(GPP_F23, TODO_0x3c000),
		PAD_CFG_TERM_GPO(GPP_H0, 1, NONE, PLTRST),
		PAD_NC(GPP_H1, NONE),
		PAD_NC(GPP_H2, NONE),
		PAD_CFG_GPI(GPP_H3, DN_20K, DEEP),
		PAD_CFG_NF(GPP_H4, NONE, DEEP, NF1),
		PAD_CFG_NF(GPP_H5, NONE, DEEP, NF1),
		PAD_NC(GPP_H6, NONE),
		PAD_NC(GPP_H7, NONE),
		PAD_CFG_GPI(GPP_H8, DN_20K, DEEP),
		PAD_CFG_GPI(GPP_H9, DN_20K, DEEP),
		PAD_CFG_NF(GPP_H10, NONE, DEEP, NF1),
		PAD_NC(GPP_H11, NONE),
		PAD_NC(GPP_H12, NONE),
		PAD_NC(GPP_H13, NONE),
		PAD_NC(GPP_H14, NONE),
		PAD_NC(GPP_H15, NONE),
		PAD_CFG_NF(GPP_H16, TODO_0x3c000, DEEP, NF1),
		PAD_CFG_NF(GPP_H17, TODO_0x3c000, DEEP, NF1),
		PAD_CFG_NF(GPP_H18, TODO_0x3c000, DEEP, NF1),
		PAD_NC(GPP_H19, TODO_0x3c000),
		PAD_NC(GPP_H20, NONE),
		PAD_NC(GPP_H21, NONE),
		PAD_NC(GPP_H22, NONE),
		PAD_NC(GPP_H23, NONE),
		PAD_CFG_NF(GPP_R0, TODO_0x3c000, DEEP, NF1),
		PAD_CFG_NF(GPP_R1, TODO_0x3fc00, DEEP, NF1),
		PAD_CFG_NF(GPP_R2, TODO_0x3fc00, DEEP, NF1),
		PAD_CFG_NF(GPP_R3, TODO_0x3fc00, DEEP, NF1),
		PAD_CFG_NF(GPP_R4, TODO_0x3c000, DEEP, NF1),
		PAD_NC(GPP_R5, NONE),
		PAD_NC(GPP_R6, NONE),
		PAD_NC(GPP_R7, NONE),
		PAD_NC(GPP_S0, TODO_0x1800000),
		PAD_NC(GPP_S1, TODO_0x1800000),
		PAD_NC(GPP_S2, TODO_0x1800000),
		PAD_NC(GPP_S3, TODO_0x1800000),
		PAD_NC(GPP_S4, TODO_0x1800000),
		PAD_NC(GPP_S5, TODO_0x1800000),
		PAD_NC(GPP_S6, TODO_0x1800000),
		PAD_NC(GPP_S7, TODO_0x1800000),
		PAD_NC(GPP_T2, NONE),
		PAD_NC(GPP_T3, NONE),
		PAD_CFG_TERM_GPO(GPP_U4, 1, NONE, PLTRST),
		PAD_CFG_TERM_GPO(GPP_U5, 1, NONE, PLTRST),
};

#endif

#endif
