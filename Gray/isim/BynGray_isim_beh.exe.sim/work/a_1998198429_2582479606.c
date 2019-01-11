/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/.Xilinx/za slati/SKLOPJEDAN/grejev kod/BynGray/BynGray.vhd";



static void work_a_1998198429_2582479606_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    int t13;
    char *t14;
    int t16;
    char *t17;
    int t19;
    char *t20;
    int t22;
    char *t23;
    int t25;
    int64 t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 4399);
    t4 = xsi_mem_cmp(t1, t2, 3U);
    if (t4 == 1)
        goto LAB3;

LAB12:    t5 = (t0 + 4402);
    t7 = xsi_mem_cmp(t5, t2, 3U);
    if (t7 == 1)
        goto LAB4;

LAB13:    t8 = (t0 + 4405);
    t10 = xsi_mem_cmp(t8, t2, 3U);
    if (t10 == 1)
        goto LAB5;

LAB14:    t11 = (t0 + 4408);
    t13 = xsi_mem_cmp(t11, t2, 3U);
    if (t13 == 1)
        goto LAB6;

LAB15:    t14 = (t0 + 4411);
    t16 = xsi_mem_cmp(t14, t2, 3U);
    if (t16 == 1)
        goto LAB7;

LAB16:    t17 = (t0 + 4414);
    t19 = xsi_mem_cmp(t17, t2, 3U);
    if (t19 == 1)
        goto LAB8;

LAB17:    t20 = (t0 + 4417);
    t22 = xsi_mem_cmp(t20, t2, 3U);
    if (t22 == 1)
        goto LAB9;

LAB18:    t23 = (t0 + 4420);
    t25 = xsi_mem_cmp(t23, t2, 3U);
    if (t25 == 1)
        goto LAB10;

LAB19:
LAB11:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 4447);
    t3 = (t0 + 2752);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:    t1 = (t0 + 2672);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(34, ng0);
    t26 = (20 * 1000LL);
    t27 = (t0 + 4423);
    t29 = (t0 + 2752);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memcpy(t33, t27, 3U);
    xsi_driver_first_trans_delta(t29, 0U, 3U, t26);
    t34 = (t0 + 2752);
    xsi_driver_intertial_reject(t34, t26, t26);
    goto LAB2;

LAB4:    xsi_set_current_line(35, ng0);
    t26 = (20 * 1000LL);
    t1 = (t0 + 4426);
    t3 = (t0 + 2752);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_delta(t3, 0U, 3U, t26);
    t11 = (t0 + 2752);
    xsi_driver_intertial_reject(t11, t26, t26);
    goto LAB2;

LAB5:    xsi_set_current_line(36, ng0);
    t26 = (20 * 1000LL);
    t1 = (t0 + 4429);
    t3 = (t0 + 2752);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_delta(t3, 0U, 3U, t26);
    t11 = (t0 + 2752);
    xsi_driver_intertial_reject(t11, t26, t26);
    goto LAB2;

LAB6:    xsi_set_current_line(37, ng0);
    t26 = (20 * 1000LL);
    t1 = (t0 + 4432);
    t3 = (t0 + 2752);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_delta(t3, 0U, 3U, t26);
    t11 = (t0 + 2752);
    xsi_driver_intertial_reject(t11, t26, t26);
    goto LAB2;

LAB7:    xsi_set_current_line(38, ng0);
    t26 = (20 * 1000LL);
    t1 = (t0 + 4435);
    t3 = (t0 + 2752);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_delta(t3, 0U, 3U, t26);
    t11 = (t0 + 2752);
    xsi_driver_intertial_reject(t11, t26, t26);
    goto LAB2;

LAB8:    xsi_set_current_line(39, ng0);
    t26 = (20 * 1000LL);
    t1 = (t0 + 4438);
    t3 = (t0 + 2752);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_delta(t3, 0U, 3U, t26);
    t11 = (t0 + 2752);
    xsi_driver_intertial_reject(t11, t26, t26);
    goto LAB2;

LAB9:    xsi_set_current_line(40, ng0);
    t26 = (20 * 1000LL);
    t1 = (t0 + 4441);
    t3 = (t0 + 2752);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_delta(t3, 0U, 3U, t26);
    t11 = (t0 + 2752);
    xsi_driver_intertial_reject(t11, t26, t26);
    goto LAB2;

LAB10:    xsi_set_current_line(41, ng0);
    t26 = (20 * 1000LL);
    t1 = (t0 + 4444);
    t3 = (t0 + 2752);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_delta(t3, 0U, 3U, t26);
    t11 = (t0 + 2752);
    xsi_driver_intertial_reject(t11, t26, t26);
    goto LAB2;

LAB20:;
}


extern void work_a_1998198429_2582479606_init()
{
	static char *pe[] = {(void *)work_a_1998198429_2582479606_p_0};
	xsi_register_didat("work_a_1998198429_2582479606", "isim/BynGray_isim_beh.exe.sim/work/a_1998198429_2582479606.didat");
	xsi_register_executes(pe);
}
