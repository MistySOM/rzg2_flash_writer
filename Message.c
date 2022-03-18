/*
 * Copyright (c) 2015-2021, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "dgtable.h"
/**********************
*  TITLE              *
***********************/
#define WRITER_VERSION	"V1.01"		/* Software Version */
#define WRITER_DATE	"Mar.18,2022"	/* Release date */

const char *const StartMessMonitorFive[START_MESS_MON_LINE] = {
				"Flash writer for RZ/Five Series "
				WRITER_VERSION " " WRITER_DATE,
				MESSAGE_END,
};

const char *const AllHelpMess[ALL_HELP_MESS_LINE] = {
#if SERIAL_FLASH == 1
				"        SPI Flash write command",
				" XCS            erase program to SPI Flash",
				" XLS2           write program to SPI Flash",
				" XLS3           write program to SPI Flash(Binary)",
				"",
#endif /* SERIAL_FLASH == 1 */
#if EMMC == 1
				"        eMMC write command",
				" EM_DCID        display register CID",
				" EM_DCSD        display register CSD",
				" EM_DECSD       display register EXT_CSD",
				" EM_SECSD       change register EXT_CSD byte",
				" EM_W           write program to eMMC",
				" EM_WB          write program to eMMC (Binary)",
				" EM_E           erase program to eMMC",
				"",
#endif /* EMMC == 1 */
				" RESET          Perform RESET of the CPU",
				" SUP            Scif speed UP (Change to speed up baud rate setting)",
				" SUD            Scif speed DOWN (Change to speed down baud rate setting)",
				" H              help",
				" D  {sadr {eadr}}          memory dump  (DM sets dump size)",
				" DM {B|W|L|X}              set&disp dump mode",
				" M  [adr]                  set memory(BYTE)",
				" MW [adr]                  set memory(WORD)",
				" ML [adr]                  set memory(LONG)",
				" MX [adr]                  set memory(LONG LONG)",
				" F  [sadr] [eadr] [data]   fill memory",
				" FL [sadr] [eadr] [data]   fill memory(LONG)",
				" FX [sadr] [eadr] [data]   fill memory(LONG LONG)",
				MESSAGE_END,
};
