/*
 * emu_tc_programming.cpp
 *
 *  Created on: Jan 13, 2017
 *      Author: user
 */

#include <public/emu_hw_timecode_drv_v1.h>
#include <public/emu_sc_channel_drv_v1.h>
#include <public/emu_gss_v1.h>


#define FT_UAH_EXP_SERV_129_00XX


#ifdef FT_UAH_EXP_SERV_129_00XX

//TODO (DONE)

// Los valores que queremos de Kpx y Kpy los cambiamos en el segundo 4 segundo el LOG dado
EmuGSS_TCProgram129_2 prog_FT_00XX_step_0(UNITIME_AFTER_POWER_ON + 4,
					"FT_UAH_EXP_step 0, Set Kpx=0.2 and Kpy=0.2", 0.2, 0.2);

// Los valores que queremos de CVx y CVy los cambiamos en el segundo 8 segundo el LOG dado
EmuGSS_TCProgram129_1 prog_FT_00XX_step_1(UNITIME_AFTER_POWER_ON + 8,
					"FT_UAH_EXP_step 1, Set Command Vx=-0.1 and Vy=0.3", -0.1, 0.3);

// Los valores que queremos de Kpx y Kpy los cambiamos en el segundo 34 segundo el LOG dado
EmuGSS_TCProgram129_2 prog_FT_00XX_step_2(UNITIME_AFTER_POWER_ON + 34,
					"FT_UAH_EXP_step 2, Set Kpx=0.5 and Kpy=0.5", 0.5, 0.5);

// Los valores que queremos de CVx y CVy los cambiamos en el segundo 38 segundo el LOG dado
EmuGSS_TCProgram129_1 prog_FT_00XX_step_3(UNITIME_AFTER_POWER_ON + 38,
					"FT_UAH_EXP_step 3, Set Command Vx=0.4 and Vy=-0.2", 0.4, -0.2);


#endif

