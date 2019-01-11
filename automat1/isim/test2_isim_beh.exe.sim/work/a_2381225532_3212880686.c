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
static const char *ng0 = "C:/Users/Kuca/Desktop/ARS 23.6/automat1/automat1.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2381225532_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    int t6;
    char *t7;
    int t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(21, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 1968U);
    t3 = *((char **)t1);
    t4 = xsi_mem_cmp(t3, t2, 2U);
    if (t4 == 1)
        goto LAB3;

LAB7:    t1 = (t0 + 2088U);
    t5 = *((char **)t1);
    t6 = xsi_mem_cmp(t5, t2, 2U);
    if (t6 == 1)
        goto LAB4;

LAB8:    t1 = (t0 + 2208U);
    t7 = *((char **)t1);
    t8 = xsi_mem_cmp(t7, t2, 2U);
    if (t8 == 1)
        goto LAB5;

LAB9:
LAB6:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 1968U);
    t2 = *((char **)t1);
    t1 = (t0 + 4120);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 2U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t1 = (t0 + 4008);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(23, ng0);
    t1 = (t0 + 1032U);
    t9 = *((char **)t1);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)2);
    if (t11 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(26, ng0);
    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    t1 = (t0 + 4120);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 2U);
    xsi_driver_first_trans_fast(t1);

LAB12:    goto LAB2;

LAB4:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t11 = (t10 == (unsigned char)2);
    if (t11 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 2208U);
    t2 = *((char **)t1);
    t1 = (t0 + 4120);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 2U);
    xsi_driver_first_trans_fast(t1);

LAB15:    goto LAB2;

LAB5:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t11 = (t10 == (unsigned char)2);
    if (t11 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 1968U);
    t2 = *((char **)t1);
    t1 = (t0 + 4120);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 2U);
    xsi_driver_first_trans_fast(t1);

LAB18:    goto LAB2;

LAB10:;
LAB11:    xsi_set_current_line(24, ng0);
    t1 = (t0 + 1968U);
    t12 = *((char **)t1);
    t1 = (t0 + 4120);
    t13 = (t1 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t12, 2U);
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB14:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 2088U);
    t3 = *((char **)t1);
    t1 = (t0 + 4120);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t12 = *((char **)t9);
    memcpy(t12, t3, 2U);
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB17:    xsi_set_current_line(34, ng0);
    t1 = (t0 + 2208U);
    t3 = *((char **)t1);
    t1 = (t0 + 4120);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t12 = *((char **)t9);
    memcpy(t12, t3, 2U);
    xsi_driver_first_trans_fast(t1);
    goto LAB18;

}

static void work_a_2381225532_3212880686_p_1(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 1152U);
    t2 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4024);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 1672U);
    t4 = *((char **)t3);
    t3 = (t0 + 4184);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t4, 2U);
    xsi_driver_first_trans_fast(t3);
    goto LAB3;

}

static void work_a_2381225532_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    int t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 1968U);
    t3 = *((char **)t1);
    t4 = xsi_mem_cmp(t3, t2, 2U);
    if (t4 == 1)
        goto LAB3;

LAB7:    t1 = (t0 + 2088U);
    t5 = *((char **)t1);
    t6 = xsi_mem_cmp(t5, t2, 2U);
    if (t6 == 1)
        goto LAB4;

LAB8:    t1 = (t0 + 2208U);
    t7 = *((char **)t1);
    t8 = xsi_mem_cmp(t7, t2, 2U);
    if (t8 == 1)
        goto LAB5;

LAB9:
LAB6:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 4248);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t1 = (t0 + 4040);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 4248);
    t9 = (t1 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB4:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 4248);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 4248);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB10:;
}


extern void work_a_2381225532_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2381225532_3212880686_p_0,(void *)work_a_2381225532_3212880686_p_1,(void *)work_a_2381225532_3212880686_p_2};
	xsi_register_didat("work_a_2381225532_3212880686", "isim/test2_isim_beh.exe.sim/work/a_2381225532_3212880686.didat");
	xsi_register_executes(pe);
}
