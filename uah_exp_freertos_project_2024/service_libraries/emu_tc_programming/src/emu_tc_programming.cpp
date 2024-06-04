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

// Programa para el telecomando 129,1 que establece los valores de CVx y CVy
EmuGSS_TCProgram129_1 prog_FT_00XX_step_1(UNITIME_AFTER_POWER_ON + 8,
					"FT_UAH_EXP_step 0, Set Command Vx=-0.1 and Vy=0.3", -0.1, 0.3);

// Programa para el telecomando 129,2 que establece Kpx y Kpy
EmuGSS_TCProgram129_2 prog_FT_00XX_step_0(UNITIME_AFTER_POWER_ON + 4,
					"FT_UAH_EXP_step 1, Set Kpx=0.2 and Kpy=0.2", 0.2, 0.2);



#endif

