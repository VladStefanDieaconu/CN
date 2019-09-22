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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/Fuck/CN/lab08_skel - Copy/tester.vh";
static unsigned int ng1[] = {1U, 0U};
static const char *ng2 = "%s(%2d, %2d): OK (out = (%4b%4b))";
static unsigned int ng3[] = {1U, 1U};
static const char *ng4 = "%s(%2d, %2d): FAILED => (%4b%4b) vs (%4b%4b)";
static const char *ng5 = "/home/ise/Fuck/CN/lab08_skel - Copy/test_ual.v";
static int ng6[] = {0, 0};
static int ng7[] = {1, 0};
static int ng8[] = {1312902724, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng9[] = {0U, 0U};
static unsigned int ng10[] = {15U, 0U};
static unsigned int ng11[] = {6U, 0U};
static unsigned int ng12[] = {9U, 0U};
static int ng13[] = {5787474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng14[] = {2U, 0U};
static unsigned int ng15[] = {3U, 0U};
static unsigned int ng16[] = {7U, 0U};
static unsigned int ng17[] = {4U, 0U};
static unsigned int ng18[] = {10U, 0U};
static unsigned int ng19[] = {5U, 0U};
static int ng20[] = {4277316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng21[] = {12U, 0U};
static int ng22[] = {5461314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng23[] = {8U, 0U};
static unsigned int ng24[] = {14U, 0U};
static int ng25[] = {5068108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng26[] = {16U, 0U};
static unsigned int ng27[] = {254U, 0U};
static unsigned int ng28[] = {240U, 0U};
static const char *ng29 = "Teste UAL = %2d/23";



static int sp_tester(char *t1, char *t2)
{
    char t9[8];
    char t24[8];
    char t37[8];
    char t48[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;

LAB0:    t0 = 1;
    xsi_set_current_line(8, ng0);

LAB2:    xsi_set_current_line(9, ng0);
    t3 = (t1 + 4120);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 3960);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    xsi_vlog_signed_equal(t9, 8, t5, 8, t8, 8);
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB3;

LAB4:    xsi_set_current_line(12, ng0);

LAB7:    xsi_set_current_line(13, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t1 + 3480);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(14, ng0);
    t3 = (t1 + 3640);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 4280);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t10 = (t1 + 4440);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 3960);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t9, 0, 8);
    t21 = (t9 + 4);
    t22 = (t20 + 4);
    t11 = *((unsigned int *)t20);
    t12 = (t11 >> 4);
    *((unsigned int *)t9) = t12;
    t13 = *((unsigned int *)t22);
    t14 = (t13 >> 4);
    *((unsigned int *)t21) = t14;
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t15 & 15U);
    t23 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t23 & 15U);
    t25 = (t1 + 3960);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t24, 0, 8);
    t28 = (t24 + 4);
    t29 = (t27 + 4);
    t30 = *((unsigned int *)t27);
    t31 = (t30 >> 0);
    *((unsigned int *)t24) = t31;
    t32 = *((unsigned int *)t29);
    t33 = (t32 >> 0);
    *((unsigned int *)t28) = t33;
    t34 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t34 & 15U);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 & 15U);
    t36 = (t1 + 4120);
    t38 = (t36 + 56U);
    t39 = *((char **)t38);
    memset(t37, 0, 8);
    t40 = (t37 + 4);
    t41 = (t39 + 4);
    t42 = *((unsigned int *)t39);
    t43 = (t42 >> 4);
    *((unsigned int *)t37) = t43;
    t44 = *((unsigned int *)t41);
    t45 = (t44 >> 4);
    *((unsigned int *)t40) = t45;
    t46 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t46 & 15U);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t47 & 15U);
    t49 = (t1 + 4120);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    memset(t48, 0, 8);
    t52 = (t48 + 4);
    t53 = (t51 + 4);
    t54 = *((unsigned int *)t51);
    t55 = (t54 >> 0);
    *((unsigned int *)t48) = t55;
    t56 = *((unsigned int *)t53);
    t57 = (t56 >> 0);
    *((unsigned int *)t52) = t57;
    t58 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t58 & 15U);
    t59 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t59 & 15U);
    t60 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng4, 8, t60, (char)118, t5, 8192, (char)119, t8, 4, (char)119, t17, 4, (char)118, t9, 4, (char)118, t24, 4, (char)118, t37, 4, (char)118, t48, 4);

LAB5:    t0 = 0;

LAB1:    return t0;
LAB3:    xsi_set_current_line(9, ng0);

LAB6:    xsi_set_current_line(10, ng0);
    t16 = ((char*)((ng1)));
    t17 = (t1 + 3480);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 1);
    xsi_set_current_line(11, ng0);
    t3 = (t1 + 3640);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 4280);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t10 = (t1 + 4440);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 4120);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t9, 0, 8);
    t21 = (t9 + 4);
    t22 = (t20 + 4);
    t11 = *((unsigned int *)t20);
    t12 = (t11 >> 4);
    *((unsigned int *)t9) = t12;
    t13 = *((unsigned int *)t22);
    t14 = (t13 >> 4);
    *((unsigned int *)t21) = t14;
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t15 & 15U);
    t23 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t23 & 15U);
    t25 = (t1 + 4120);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t24, 0, 8);
    t28 = (t24 + 4);
    t29 = (t27 + 4);
    t30 = *((unsigned int *)t27);
    t31 = (t30 >> 0);
    *((unsigned int *)t24) = t31;
    t32 = *((unsigned int *)t29);
    t33 = (t32 >> 0);
    *((unsigned int *)t28) = t33;
    t34 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t34 & 15U);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 & 15U);
    t36 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng2, 6, t36, (char)118, t5, 8192, (char)119, t8, 4, (char)119, t17, 4, (char)118, t9, 4, (char)118, t24, 4);
    goto LAB5;

}

static void Initial_37_0(char *t0)
{
    char t40[8];
    char t44[8];
    char t70[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t71;

LAB0:    t1 = (t0 + 5352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng5);

LAB4:    xsi_set_current_line(38, ng5);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(41, ng5);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(42, ng5);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(43, ng5);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(45, ng5);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(46, ng5);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng5);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(49, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(50, ng5);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(56, ng5);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8192);
    xsi_set_current_line(57, ng5);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(58, ng5);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(59, ng5);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(60, ng5);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(61, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(62, ng5);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2040);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1880);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 1480U);
    t13 = *((char **)t12);
    t12 = (t0 + 2200);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 2360);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 5160);
    t20 = (t0 + 848);
    t21 = xsi_create_subprogram_invocation(t19, 0, t0, t20, 0, 0);
    t22 = (t0 + 3640);
    xsi_vlogvar_assign_value(t22, t5, 0, 0, 8192);
    t23 = (t0 + 3800);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 5);
    t24 = (t0 + 3960);
    xsi_vlogvar_assign_value(t24, t11, 0, 0, 8);
    t25 = (t0 + 4120);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 8);
    t26 = (t0 + 4280);
    xsi_vlogvar_assign_value(t26, t15, 0, 0, 4);
    t27 = (t0 + 4440);
    xsi_vlogvar_assign_value(t27, t18, 0, 0, 4);

LAB8:    t28 = (t0 + 5256);
    t29 = *((char **)t28);
    t30 = (t29 + 80U);
    t31 = *((char **)t30);
    t32 = (t31 + 272U);
    t33 = *((char **)t32);
    t34 = (t33 + 0U);
    t35 = *((char **)t34);
    t36 = ((int  (*)(char *, char *))t35)(t0, t29);
    if (t36 != 0)
        goto LAB10;

LAB9:    t29 = (t0 + 5256);
    t37 = *((char **)t29);
    t29 = (t0 + 3480);
    t38 = (t29 + 56U);
    t39 = *((char **)t38);
    memcpy(t40, t39, 8);
    t41 = (t0 + 848);
    t42 = (t0 + 5160);
    t43 = 0;
    xsi_delete_subprogram_invocation(t41, t37, t0, t42, t43);
    memset(t44, 0, 8);
    t45 = (t2 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t2);
    t48 = *((unsigned int *)t40);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB14;

LAB11:    if (t56 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t44) = 1;

LAB14:    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(72, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB10:    t28 = (t0 + 5352U);
    *((char **)t28) = &&LAB8;
    goto LAB1;

LAB13:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(62, ng5);

LAB18:    xsi_set_current_line(63, ng5);
    t66 = (t0 + 3000);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = ((char*)((ng7)));
    memset(t70, 0, 8);
    xsi_vlog_unsigned_add(t70, 32, t68, 8, t69, 32);
    t71 = (t0 + 3000);
    xsi_vlogvar_assign_value(t71, t70, 0, 0, 8);
    goto LAB17;

LAB19:    xsi_set_current_line(73, ng5);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8192);
    xsi_set_current_line(74, ng5);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(75, ng5);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(76, ng5);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(77, ng5);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(78, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB20:    xsi_set_current_line(79, ng5);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2040);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1880);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 1480U);
    t13 = *((char **)t12);
    t12 = (t0 + 2200);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 2360);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 5160);
    t20 = (t0 + 848);
    t21 = xsi_create_subprogram_invocation(t19, 0, t0, t20, 0, 0);
    t22 = (t0 + 3640);
    xsi_vlogvar_assign_value(t22, t5, 0, 0, 8192);
    t23 = (t0 + 3800);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 5);
    t24 = (t0 + 3960);
    xsi_vlogvar_assign_value(t24, t11, 0, 0, 8);
    t25 = (t0 + 4120);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 8);
    t26 = (t0 + 4280);
    xsi_vlogvar_assign_value(t26, t15, 0, 0, 4);
    t27 = (t0 + 4440);
    xsi_vlogvar_assign_value(t27, t18, 0, 0, 4);

LAB21:    t28 = (t0 + 5256);
    t29 = *((char **)t28);
    t30 = (t29 + 80U);
    t31 = *((char **)t30);
    t32 = (t31 + 272U);
    t33 = *((char **)t32);
    t34 = (t33 + 0U);
    t35 = *((char **)t34);
    t36 = ((int  (*)(char *, char *))t35)(t0, t29);
    if (t36 != 0)
        goto LAB23;

LAB22:    t29 = (t0 + 5256);
    t37 = *((char **)t29);
    t29 = (t0 + 3480);
    t38 = (t29 + 56U);
    t39 = *((char **)t38);
    memcpy(t40, t39, 8);
    t41 = (t0 + 848);
    t42 = (t0 + 5160);
    t43 = 0;
    xsi_delete_subprogram_invocation(t41, t37, t0, t42, t43);
    memset(t44, 0, 8);
    t45 = (t2 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t2);
    t48 = *((unsigned int *)t40);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB27;

LAB24:    if (t56 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t44) = 1;

LAB27:    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB28;

LAB29:
LAB30:    xsi_set_current_line(89, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB23:    t28 = (t0 + 5352U);
    *((char **)t28) = &&LAB21;
    goto LAB1;

LAB26:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB27;

LAB28:    xsi_set_current_line(79, ng5);

LAB31:    xsi_set_current_line(80, ng5);
    t66 = (t0 + 3000);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = ((char*)((ng7)));
    memset(t70, 0, 8);
    xsi_vlog_unsigned_add(t70, 32, t68, 8, t69, 32);
    t71 = (t0 + 3000);
    xsi_vlogvar_assign_value(t71, t70, 0, 0, 8);
    goto LAB30;

LAB32:    xsi_set_current_line(90, ng5);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8192);
    xsi_set_current_line(91, ng5);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(92, ng5);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(93, ng5);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(94, ng5);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(95, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB33:    xsi_set_current_line(96, ng5);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2040);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1880);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 1480U);
    t13 = *((char **)t12);
    t12 = (t0 + 2200);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 2360);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 5160);
    t20 = (t0 + 848);
    t21 = xsi_create_subprogram_invocation(t19, 0, t0, t20, 0, 0);
    t22 = (t0 + 3640);
    xsi_vlogvar_assign_value(t22, t5, 0, 0, 8192);
    t23 = (t0 + 3800);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 5);
    t24 = (t0 + 3960);
    xsi_vlogvar_assign_value(t24, t11, 0, 0, 8);
    t25 = (t0 + 4120);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 8);
    t26 = (t0 + 4280);
    xsi_vlogvar_assign_value(t26, t15, 0, 0, 4);
    t27 = (t0 + 4440);
    xsi_vlogvar_assign_value(t27, t18, 0, 0, 4);

LAB34:    t28 = (t0 + 5256);
    t29 = *((char **)t28);
    t30 = (t29 + 80U);
    t31 = *((char **)t30);
    t32 = (t31 + 272U);
    t33 = *((char **)t32);
    t34 = (t33 + 0U);
    t35 = *((char **)t34);
    t36 = ((int  (*)(char *, char *))t35)(t0, t29);
    if (t36 != 0)
        goto LAB36;

LAB35:    t29 = (t0 + 5256);
    t37 = *((char **)t29);
    t29 = (t0 + 3480);
    t38 = (t29 + 56U);
    t39 = *((char **)t38);
    memcpy(t40, t39, 8);
    t41 = (t0 + 848);
    t42 = (t0 + 5160);
    t43 = 0;
    xsi_delete_subprogram_invocation(t41, t37, t0, t42, t43);
    memset(t44, 0, 8);
    t45 = (t2 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t2);
    t48 = *((unsigned int *)t40);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB40;

LAB37:    if (t56 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t44) = 1;

LAB40:    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB41;

LAB42:
LAB43:    xsi_set_current_line(106, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB36:    t28 = (t0 + 5352U);
    *((char **)t28) = &&LAB34;
    goto LAB1;

LAB39:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(96, ng5);

LAB44:    xsi_set_current_line(97, ng5);
    t66 = (t0 + 3000);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = ((char*)((ng7)));
    memset(t70, 0, 8);
    xsi_vlog_unsigned_add(t70, 32, t68, 8, t69, 32);
    t71 = (t0 + 3000);
    xsi_vlogvar_assign_value(t71, t70, 0, 0, 8);
    goto LAB43;

LAB45:    xsi_set_current_line(107, ng5);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8192);
    xsi_set_current_line(108, ng5);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(109, ng5);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(110, ng5);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(111, ng5);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(112, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB46;
    goto LAB1;

LAB46:    xsi_set_current_line(113, ng5);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2040);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1880);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 1480U);
    t13 = *((char **)t12);
    t12 = (t0 + 2200);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 2360);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 5160);
    t20 = (t0 + 848);
    t21 = xsi_create_subprogram_invocation(t19, 0, t0, t20, 0, 0);
    t22 = (t0 + 3640);
    xsi_vlogvar_assign_value(t22, t5, 0, 0, 8192);
    t23 = (t0 + 3800);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 5);
    t24 = (t0 + 3960);
    xsi_vlogvar_assign_value(t24, t11, 0, 0, 8);
    t25 = (t0 + 4120);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 8);
    t26 = (t0 + 4280);
    xsi_vlogvar_assign_value(t26, t15, 0, 0, 4);
    t27 = (t0 + 4440);
    xsi_vlogvar_assign_value(t27, t18, 0, 0, 4);

LAB47:    t28 = (t0 + 5256);
    t29 = *((char **)t28);
    t30 = (t29 + 80U);
    t31 = *((char **)t30);
    t32 = (t31 + 272U);
    t33 = *((char **)t32);
    t34 = (t33 + 0U);
    t35 = *((char **)t34);
    t36 = ((int  (*)(char *, char *))t35)(t0, t29);
    if (t36 != 0)
        goto LAB49;

LAB48:    t29 = (t0 + 5256);
    t37 = *((char **)t29);
    t29 = (t0 + 3480);
    t38 = (t29 + 56U);
    t39 = *((char **)t38);
    memcpy(t40, t39, 8);
    t41 = (t0 + 848);
    t42 = (t0 + 5160);
    t43 = 0;
    xsi_delete_subprogram_invocation(t41, t37, t0, t42, t43);
    memset(t44, 0, 8);
    t45 = (t2 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t2);
    t48 = *((unsigned int *)t40);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB53;

LAB50:    if (t56 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t44) = 1;

LAB53:    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB54;

LAB55:
LAB56:    xsi_set_current_line(123, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB58;
    goto LAB1;

LAB49:    t28 = (t0 + 5352U);
    *((char **)t28) = &&LAB47;
    goto LAB1;

LAB52:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(113, ng5);

LAB57:    xsi_set_current_line(114, ng5);
    t66 = (t0 + 3000);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = ((char*)((ng7)));
    memset(t70, 0, 8);
    xsi_vlog_unsigned_add(t70, 32, t68, 8, t69, 32);
    t71 = (t0 + 3000);
    xsi_vlogvar_assign_value(t71, t70, 0, 0, 8);
    goto LAB56;

LAB58:    xsi_set_current_line(124, ng5);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8192);
    xsi_set_current_line(125, ng5);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(126, ng5);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(127, ng5);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(128, ng5);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(129, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB59;
    goto LAB1;

LAB59:    xsi_set_current_line(130, ng5);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2040);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1880);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 1480U);
    t13 = *((char **)t12);
    t12 = (t0 + 2200);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 2360);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 5160);
    t20 = (t0 + 848);
    t21 = xsi_create_subprogram_invocation(t19, 0, t0, t20, 0, 0);
    t22 = (t0 + 3640);
    xsi_vlogvar_assign_value(t22, t5, 0, 0, 8192);
    t23 = (t0 + 3800);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 5);
    t24 = (t0 + 3960);
    xsi_vlogvar_assign_value(t24, t11, 0, 0, 8);
    t25 = (t0 + 4120);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 8);
    t26 = (t0 + 4280);
    xsi_vlogvar_assign_value(t26, t15, 0, 0, 4);
    t27 = (t0 + 4440);
    xsi_vlogvar_assign_value(t27, t18, 0, 0, 4);

LAB60:    t28 = (t0 + 5256);
    t29 = *((char **)t28);
    t30 = (t29 + 80U);
    t31 = *((char **)t30);
    t32 = (t31 + 272U);
    t33 = *((char **)t32);
    t34 = (t33 + 0U);
    t35 = *((char **)t34);
    t36 = ((int  (*)(char *, char *))t35)(t0, t29);
    if (t36 != 0)
        goto LAB62;

LAB61:    t29 = (t0 + 5256);
    t37 = *((char **)t29);
    t29 = (t0 + 3480);
    t38 = (t29 + 56U);
    t39 = *((char **)t38);
    memcpy(t40, t39, 8);
    t41 = (t0 + 848);
    t42 = (t0 + 5160);
    t43 = 0;
    xsi_delete_subprogram_invocation(t41, t37, t0, t42, t43);
    memset(t44, 0, 8);
    t45 = (t2 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t2);
    t48 = *((unsigned int *)t40);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB66;

LAB63:    if (t56 != 0)
        goto LAB65;

LAB64:    *((unsigned int *)t44) = 1;

LAB66:    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB67;

LAB68:
LAB69:    xsi_set_current_line(140, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB71;
    goto LAB1;

LAB62:    t28 = (t0 + 5352U);
    *((char **)t28) = &&LAB60;
    goto LAB1;

LAB65:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB66;

LAB67:    xsi_set_current_line(130, ng5);

LAB70:    xsi_set_current_line(131, ng5);
    t66 = (t0 + 3000);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = ((char*)((ng7)));
    memset(t70, 0, 8);
    xsi_vlog_unsigned_add(t70, 32, t68, 8, t69, 32);
    t71 = (t0 + 3000);
    xsi_vlogvar_assign_value(t71, t70, 0, 0, 8);
    goto LAB69;

LAB71:    xsi_set_current_line(141, ng5);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8192);
    xsi_set_current_line(142, ng5);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(143, ng5);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(144, ng5);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(145, ng5);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(146, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB72;
    goto LAB1;

LAB72:    xsi_set_current_line(147, ng5);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2040);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1880);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 1480U);
    t13 = *((char **)t12);
    t12 = (t0 + 2200);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 2360);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 5160);
    t20 = (t0 + 848);
    t21 = xsi_create_subprogram_invocation(t19, 0, t0, t20, 0, 0);
    t22 = (t0 + 3640);
    xsi_vlogvar_assign_value(t22, t5, 0, 0, 8192);
    t23 = (t0 + 3800);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 5);
    t24 = (t0 + 3960);
    xsi_vlogvar_assign_value(t24, t11, 0, 0, 8);
    t25 = (t0 + 4120);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 8);
    t26 = (t0 + 4280);
    xsi_vlogvar_assign_value(t26, t15, 0, 0, 4);
    t27 = (t0 + 4440);
    xsi_vlogvar_assign_value(t27, t18, 0, 0, 4);

LAB73:    t28 = (t0 + 5256);
    t29 = *((char **)t28);
    t30 = (t29 + 80U);
    t31 = *((char **)t30);
    t32 = (t31 + 272U);
    t33 = *((char **)t32);
    t34 = (t33 + 0U);
    t35 = *((char **)t34);
    t36 = ((int  (*)(char *, char *))t35)(t0, t29);
    if (t36 != 0)
        goto LAB75;

LAB74:    t29 = (t0 + 5256);
    t37 = *((char **)t29);
    t29 = (t0 + 3480);
    t38 = (t29 + 56U);
    t39 = *((char **)t38);
    memcpy(t40, t39, 8);
    t41 = (t0 + 848);
    t42 = (t0 + 5160);
    t43 = 0;
    xsi_delete_subprogram_invocation(t41, t37, t0, t42, t43);
    memset(t44, 0, 8);
    t45 = (t2 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t2);
    t48 = *((unsigned int *)t40);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB79;

LAB76:    if (t56 != 0)
        goto LAB78;

LAB77:    *((unsigned int *)t44) = 1;

LAB79:    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB80;

LAB81:
LAB82:    xsi_set_current_line(157, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB84;
    goto LAB1;

LAB75:    t28 = (t0 + 5352U);
    *((char **)t28) = &&LAB73;
    goto LAB1;

LAB78:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB79;

LAB80:    xsi_set_current_line(147, ng5);

LAB83:    xsi_set_current_line(148, ng5);
    t66 = (t0 + 3000);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = ((char*)((ng7)));
    memset(t70, 0, 8);
    xsi_vlog_unsigned_add(t70, 32, t68, 8, t69, 32);
    t71 = (t0 + 3000);
    xsi_vlogvar_assign_value(t71, t70, 0, 0, 8);
    goto LAB82;

LAB84:    xsi_set_current_line(158, ng5);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8192);
    xsi_set_current_line(159, ng5);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(160, ng5);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(161, ng5);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(162, ng5);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(163, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB85;
    goto LAB1;

LAB85:    xsi_set_current_line(164, ng5);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2040);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1880);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 1480U);
    t13 = *((char **)t12);
    t12 = (t0 + 2200);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 2360);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 5160);
    t20 = (t0 + 848);
    t21 = xsi_create_subprogram_invocation(t19, 0, t0, t20, 0, 0);
    t22 = (t0 + 3640);
    xsi_vlogvar_assign_value(t22, t5, 0, 0, 8192);
    t23 = (t0 + 3800);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 5);
    t24 = (t0 + 3960);
    xsi_vlogvar_assign_value(t24, t11, 0, 0, 8);
    t25 = (t0 + 4120);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 8);
    t26 = (t0 + 4280);
    xsi_vlogvar_assign_value(t26, t15, 0, 0, 4);
    t27 = (t0 + 4440);
    xsi_vlogvar_assign_value(t27, t18, 0, 0, 4);

LAB86:    t28 = (t0 + 5256);
    t29 = *((char **)t28);
    t30 = (t29 + 80U);
    t31 = *((char **)t30);
    t32 = (t31 + 272U);
    t33 = *((char **)t32);
    t34 = (t33 + 0U);
    t35 = *((char **)t34);
    t36 = ((int  (*)(char *, char *))t35)(t0, t29);
    if (t36 != 0)
        goto LAB88;

LAB87:    t29 = (t0 + 5256);
    t37 = *((char **)t29);
    t29 = (t0 + 3480);
    t38 = (t29 + 56U);
    t39 = *((char **)t38);
    memcpy(t40, t39, 8);
    t41 = (t0 + 848);
    t42 = (t0 + 5160);
    t43 = 0;
    xsi_delete_subprogram_invocation(t41, t37, t0, t42, t43);
    memset(t44, 0, 8);
    t45 = (t2 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t2);
    t48 = *((unsigned int *)t40);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB92;

LAB89:    if (t56 != 0)
        goto LAB91;

LAB90:    *((unsigned int *)t44) = 1;

LAB92:    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB93;

LAB94:
LAB95:    xsi_set_current_line(175, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB97;
    goto LAB1;

LAB88:    t28 = (t0 + 5352U);
    *((char **)t28) = &&LAB86;
    goto LAB1;

LAB91:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB92;

LAB93:    xsi_set_current_line(164, ng5);

LAB96:    xsi_set_current_line(165, ng5);
    t66 = (t0 + 3000);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = ((char*)((ng7)));
    memset(t70, 0, 8);
    xsi_vlog_unsigned_add(t70, 32, t68, 8, t69, 32);
    t71 = (t0 + 3000);
    xsi_vlogvar_assign_value(t71, t70, 0, 0, 8);
    goto LAB95;

LAB97:    xsi_set_current_line(176, ng5);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8192);
    xsi_set_current_line(177, ng5);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(178, ng5);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(179, ng5);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(180, ng5);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(181, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB98;
    goto LAB1;

LAB98:    xsi_set_current_line(182, ng5);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2040);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1880);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 1480U);
    t13 = *((char **)t12);
    t12 = (t0 + 2200);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 2360);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 5160);
    t20 = (t0 + 848);
    t21 = xsi_create_subprogram_invocation(t19, 0, t0, t20, 0, 0);
    t22 = (t0 + 3640);
    xsi_vlogvar_assign_value(t22, t5, 0, 0, 8192);
    t23 = (t0 + 3800);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 5);
    t24 = (t0 + 3960);
    xsi_vlogvar_assign_value(t24, t11, 0, 0, 8);
    t25 = (t0 + 4120);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 8);
    t26 = (t0 + 4280);
    xsi_vlogvar_assign_value(t26, t15, 0, 0, 4);
    t27 = (t0 + 4440);
    xsi_vlogvar_assign_value(t27, t18, 0, 0, 4);

LAB99:    t28 = (t0 + 5256);
    t29 = *((char **)t28);
    t30 = (t29 + 80U);
    t31 = *((char **)t30);
    t32 = (t31 + 272U);
    t33 = *((char **)t32);
    t34 = (t33 + 0U);
    t35 = *((char **)t34);
    t36 = ((int  (*)(char *, char *))t35)(t0, t29);
    if (t36 != 0)
        goto LAB101;

LAB100:    t29 = (t0 + 5256);
    t37 = *((char **)t29);
    t29 = (t0 + 3480);
    t38 = (t29 + 56U);
    t39 = *((char **)t38);
    memcpy(t40, t39, 8);
    t41 = (t0 + 848);
    t42 = (t0 + 5160);
    t43 = 0;
    xsi_delete_subprogram_invocation(t41, t37, t0, t42, t43);
    memset(t44, 0, 8);
    t45 = (t2 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t2);
    t48 = *((unsigned int *)t40);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB105;

LAB102:    if (t56 != 0)
        goto LAB104;

LAB103:    *((unsigned int *)t44) = 1;

LAB105:    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB106;

LAB107:
LAB108:    xsi_set_current_line(193, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB110;
    goto LAB1;

LAB101:    t28 = (t0 + 5352U);
    *((char **)t28) = &&LAB99;
    goto LAB1;

LAB104:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB105;

LAB106:    xsi_set_current_line(182, ng5);

LAB109:    xsi_set_current_line(183, ng5);
    t66 = (t0 + 3000);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = ((char*)((ng7)));
    memset(t70, 0, 8);
    xsi_vlog_unsigned_add(t70, 32, t68, 8, t69, 32);
    t71 = (t0 + 3000);
    xsi_vlogvar_assign_value(t71, t70, 0, 0, 8);
    goto LAB108;

LAB110:    xsi_set_current_line(194, ng5);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8192);
    xsi_set_current_line(195, ng5);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(196, ng5);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(197, ng5);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(198, ng5);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(199, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB111;
    goto LAB1;

LAB111:    xsi_set_current_line(200, ng5);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2040);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1880);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 1480U);
    t13 = *((char **)t12);
    t12 = (t0 + 2200);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 2360);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 5160);
    t20 = (t0 + 848);
    t21 = xsi_create_subprogram_invocation(t19, 0, t0, t20, 0, 0);
    t22 = (t0 + 3640);
    xsi_vlogvar_assign_value(t22, t5, 0, 0, 8192);
    t23 = (t0 + 3800);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 5);
    t24 = (t0 + 3960);
    xsi_vlogvar_assign_value(t24, t11, 0, 0, 8);
    t25 = (t0 + 4120);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 8);
    t26 = (t0 + 4280);
    xsi_vlogvar_assign_value(t26, t15, 0, 0, 4);
    t27 = (t0 + 4440);
    xsi_vlogvar_assign_value(t27, t18, 0, 0, 4);

LAB112:    t28 = (t0 + 5256);
    t29 = *((char **)t28);
    t30 = (t29 + 80U);
    t31 = *((char **)t30);
    t32 = (t31 + 272U);
    t33 = *((char **)t32);
    t34 = (t33 + 0U);
    t35 = *((char **)t34);
    t36 = ((int  (*)(char *, char *))t35)(t0, t29);
    if (t36 != 0)
        goto LAB114;

LAB113:    t29 = (t0 + 5256);
    t37 = *((char **)t29);
    t29 = (t0 + 3480);
    t38 = (t29 + 56U);
    t39 = *((char **)t38);
    memcpy(t40, t39, 8);
    t41 = (t0 + 848);
    t42 = (t0 + 5160);
    t43 = 0;
    xsi_delete_subprogram_invocation(t41, t37, t0, t42, t43);
    memset(t44, 0, 8);
    t45 = (t2 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t2);
    t48 = *((unsigned int *)t40);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB118;

LAB115:    if (t56 != 0)
        goto LAB117;

LAB116:    *((unsigned int *)t44) = 1;

LAB118:    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB119;

LAB120:
LAB121:    xsi_set_current_line(211, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB123;
    goto LAB1;

LAB114:    t28 = (t0 + 5352U);
    *((char **)t28) = &&LAB112;
    goto LAB1;

LAB117:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB118;

LAB119:    xsi_set_current_line(200, ng5);

LAB122:    xsi_set_current_line(201, ng5);
    t66 = (t0 + 3000);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = ((char*)((ng7)));
    memset(t70, 0, 8);
    xsi_vlog_unsigned_add(t70, 32, t68, 8, t69, 32);
    t71 = (t0 + 3000);
    xsi_vlogvar_assign_value(t71, t70, 0, 0, 8);
    goto LAB121;

LAB123:    xsi_set_current_line(212, ng5);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8192);
    xsi_set_current_line(213, ng5);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(214, ng5);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(215, ng5);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(216, ng5);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(217, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB124;
    goto LAB1;

LAB124:    xsi_set_current_line(218, ng5);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2040);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1880);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 1480U);
    t13 = *((char **)t12);
    t12 = (t0 + 2200);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 2360);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 5160);
    t20 = (t0 + 848);
    t21 = xsi_create_subprogram_invocation(t19, 0, t0, t20, 0, 0);
    t22 = (t0 + 3640);
    xsi_vlogvar_assign_value(t22, t5, 0, 0, 8192);
    t23 = (t0 + 3800);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 5);
    t24 = (t0 + 3960);
    xsi_vlogvar_assign_value(t24, t11, 0, 0, 8);
    t25 = (t0 + 4120);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 8);
    t26 = (t0 + 4280);
    xsi_vlogvar_assign_value(t26, t15, 0, 0, 4);
    t27 = (t0 + 4440);
    xsi_vlogvar_assign_value(t27, t18, 0, 0, 4);

LAB125:    t28 = (t0 + 5256);
    t29 = *((char **)t28);
    t30 = (t29 + 80U);
    t31 = *((char **)t30);
    t32 = (t31 + 272U);
    t33 = *((char **)t32);
    t34 = (t33 + 0U);
    t35 = *((char **)t34);
    t36 = ((int  (*)(char *, char *))t35)(t0, t29);
    if (t36 != 0)
        goto LAB127;

LAB126:    t29 = (t0 + 5256);
    t37 = *((char **)t29);
    t29 = (t0 + 3480);
    t38 = (t29 + 56U);
    t39 = *((char **)t38);
    memcpy(t40, t39, 8);
    t41 = (t0 + 848);
    t42 = (t0 + 5160);
    t43 = 0;
    xsi_delete_subprogram_invocation(t41, t37, t0, t42, t43);
    memset(t44, 0, 8);
    t45 = (t2 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t2);
    t48 = *((unsigned int *)t40);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB131;

LAB128:    if (t56 != 0)
        goto LAB130;

LAB129:    *((unsigned int *)t44) = 1;

LAB131:    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB132;

LAB133:
LAB134:    xsi_set_current_line(228, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB136;
    goto LAB1;

LAB127:    t28 = (t0 + 5352U);
    *((char **)t28) = &&LAB125;
    goto LAB1;

LAB130:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB131;

LAB132:    xsi_set_current_line(218, ng5);

LAB135:    xsi_set_current_line(219, ng5);
    t66 = (t0 + 3000);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = ((char*)((ng7)));
    memset(t70, 0, 8);
    xsi_vlog_unsigned_add(t70, 32, t68, 8, t69, 32);
    t71 = (t0 + 3000);
    xsi_vlogvar_assign_value(t71, t70, 0, 0, 8);
    goto LAB134;

LAB136:    xsi_set_current_line(229, ng5);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8192);
    xsi_set_current_line(230, ng5);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(231, ng5);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(232, ng5);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(233, ng5);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(234, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB137;
    goto LAB1;

LAB137:    xsi_set_current_line(235, ng5);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2040);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1880);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 1480U);
    t13 = *((char **)t12);
    t12 = (t0 + 2200);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 2360);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 5160);
    t20 = (t0 + 848);
    t21 = xsi_create_subprogram_invocation(t19, 0, t0, t20, 0, 0);
    t22 = (t0 + 3640);
    xsi_vlogvar_assign_value(t22, t5, 0, 0, 8192);
    t23 = (t0 + 3800);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 5);
    t24 = (t0 + 3960);
    xsi_vlogvar_assign_value(t24, t11, 0, 0, 8);
    t25 = (t0 + 4120);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 8);
    t26 = (t0 + 4280);
    xsi_vlogvar_assign_value(t26, t15, 0, 0, 4);
    t27 = (t0 + 4440);
    xsi_vlogvar_assign_value(t27, t18, 0, 0, 4);

LAB138:    t28 = (t0 + 5256);
    t29 = *((char **)t28);
    t30 = (t29 + 80U);
    t31 = *((char **)t30);
    t32 = (t31 + 272U);
    t33 = *((char **)t32);
    t34 = (t33 + 0U);
    t35 = *((char **)t34);
    t36 = ((int  (*)(char *, char *))t35)(t0, t29);
    if (t36 != 0)
        goto LAB140;

LAB139:    t29 = (t0 + 5256);
    t37 = *((char **)t29);
    t29 = (t0 + 3480);
    t38 = (t29 + 56U);
    t39 = *((char **)t38);
    memcpy(t40, t39, 8);
    t41 = (t0 + 848);
    t42 = (t0 + 5160);
    t43 = 0;
    xsi_delete_subprogram_invocation(t41, t37, t0, t42, t43);
    memset(t44, 0, 8);
    t45 = (t2 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t2);
    t48 = *((unsigned int *)t40);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB144;

LAB141:    if (t56 != 0)
        goto LAB143;

LAB142:    *((unsigned int *)t44) = 1;

LAB144:    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB145;

LAB146:
LAB147:    xsi_set_current_line(246, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB149;
    goto LAB1;

LAB140:    t28 = (t0 + 5352U);
    *((char **)t28) = &&LAB138;
    goto LAB1;

LAB143:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB144;

LAB145:    xsi_set_current_line(235, ng5);

LAB148:    xsi_set_current_line(236, ng5);
    t66 = (t0 + 3000);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = ((char*)((ng7)));
    memset(t70, 0, 8);
    xsi_vlog_unsigned_add(t70, 32, t68, 8, t69, 32);
    t71 = (t0 + 3000);
    xsi_vlogvar_assign_value(t71, t70, 0, 0, 8);
    goto LAB147;

LAB149:    xsi_set_current_line(247, ng5);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8192);
    xsi_set_current_line(248, ng5);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(249, ng5);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(250, ng5);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(251, ng5);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(252, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB150;
    goto LAB1;

LAB150:    xsi_set_current_line(253, ng5);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2040);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1880);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 1480U);
    t13 = *((char **)t12);
    t12 = (t0 + 2200);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 2360);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 5160);
    t20 = (t0 + 848);
    t21 = xsi_create_subprogram_invocation(t19, 0, t0, t20, 0, 0);
    t22 = (t0 + 3640);
    xsi_vlogvar_assign_value(t22, t5, 0, 0, 8192);
    t23 = (t0 + 3800);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 5);
    t24 = (t0 + 3960);
    xsi_vlogvar_assign_value(t24, t11, 0, 0, 8);
    t25 = (t0 + 4120);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 8);
    t26 = (t0 + 4280);
    xsi_vlogvar_assign_value(t26, t15, 0, 0, 4);
    t27 = (t0 + 4440);
    xsi_vlogvar_assign_value(t27, t18, 0, 0, 4);

LAB151:    t28 = (t0 + 5256);
    t29 = *((char **)t28);
    t30 = (t29 + 80U);
    t31 = *((char **)t30);
    t32 = (t31 + 272U);
    t33 = *((char **)t32);
    t34 = (t33 + 0U);
    t35 = *((char **)t34);
    t36 = ((int  (*)(char *, char *))t35)(t0, t29);
    if (t36 != 0)
        goto LAB153;

LAB152:    t29 = (t0 + 5256);
    t37 = *((char **)t29);
    t29 = (t0 + 3480);
    t38 = (t29 + 56U);
    t39 = *((char **)t38);
    memcpy(t40, t39, 8);
    t41 = (t0 + 848);
    t42 = (t0 + 5160);
    t43 = 0;
    xsi_delete_subprogram_invocation(t41, t37, t0, t42, t43);
    memset(t44, 0, 8);
    t45 = (t2 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t2);
    t48 = *((unsigned int *)t40);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB157;

LAB154:    if (t56 != 0)
        goto LAB156;

LAB155:    *((unsigned int *)t44) = 1;

LAB157:    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB158;

LAB159:
LAB160:    xsi_set_current_line(264, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB162;
    goto LAB1;

LAB153:    t28 = (t0 + 5352U);
    *((char **)t28) = &&LAB151;
    goto LAB1;

LAB156:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB157;

LAB158:    xsi_set_current_line(253, ng5);

LAB161:    xsi_set_current_line(254, ng5);
    t66 = (t0 + 3000);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = ((char*)((ng7)));
    memset(t70, 0, 8);
    xsi_vlog_unsigned_add(t70, 32, t68, 8, t69, 32);
    t71 = (t0 + 3000);
    xsi_vlogvar_assign_value(t71, t70, 0, 0, 8);
    goto LAB160;

LAB162:    xsi_set_current_line(265, ng5);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8192);
    xsi_set_current_line(266, ng5);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(267, ng5);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(268, ng5);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(269, ng5);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(270, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB163;
    goto LAB1;

LAB163:    xsi_set_current_line(271, ng5);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2040);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1880);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 1480U);
    t13 = *((char **)t12);
    t12 = (t0 + 2200);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 2360);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 5160);
    t20 = (t0 + 848);
    t21 = xsi_create_subprogram_invocation(t19, 0, t0, t20, 0, 0);
    t22 = (t0 + 3640);
    xsi_vlogvar_assign_value(t22, t5, 0, 0, 8192);
    t23 = (t0 + 3800);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 5);
    t24 = (t0 + 3960);
    xsi_vlogvar_assign_value(t24, t11, 0, 0, 8);
    t25 = (t0 + 4120);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 8);
    t26 = (t0 + 4280);
    xsi_vlogvar_assign_value(t26, t15, 0, 0, 4);
    t27 = (t0 + 4440);
    xsi_vlogvar_assign_value(t27, t18, 0, 0, 4);

LAB164:    t28 = (t0 + 5256);
    t29 = *((char **)t28);
    t30 = (t29 + 80U);
    t31 = *((char **)t30);
    t32 = (t31 + 272U);
    t33 = *((char **)t32);
    t34 = (t33 + 0U);
    t35 = *((char **)t34);
    t36 = ((int  (*)(char *, char *))t35)(t0, t29);
    if (t36 != 0)
        goto LAB166;

LAB165:    t29 = (t0 + 5256);
    t37 = *((char **)t29);
    t29 = (t0 + 3480);
    t38 = (t29 + 56U);
    t39 = *((char **)t38);
    memcpy(t40, t39, 8);
    t41 = (t0 + 848);
    t42 = (t0 + 5160);
    t43 = 0;
    xsi_delete_subprogram_invocation(t41, t37, t0, t42, t43);
    memset(t44, 0, 8);
    t45 = (t2 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t2);
    t48 = *((unsigned int *)t40);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB170;

LAB167:    if (t56 != 0)
        goto LAB169;

LAB168:    *((unsigned int *)t44) = 1;

LAB170:    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB171;

LAB172:
LAB173:    xsi_set_current_line(281, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB175;
    goto LAB1;

LAB166:    t28 = (t0 + 5352U);
    *((char **)t28) = &&LAB164;
    goto LAB1;

LAB169:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB170;

LAB171:    xsi_set_current_line(271, ng5);

LAB174:    xsi_set_current_line(272, ng5);
    t66 = (t0 + 3000);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = ((char*)((ng7)));
    memset(t70, 0, 8);
    xsi_vlog_unsigned_add(t70, 32, t68, 8, t69, 32);
    t71 = (t0 + 3000);
    xsi_vlogvar_assign_value(t71, t70, 0, 0, 8);
    goto LAB173;

LAB175:    xsi_set_current_line(282, ng5);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8192);
    xsi_set_current_line(283, ng5);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(284, ng5);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(285, ng5);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(286, ng5);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(287, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB176;
    goto LAB1;

LAB176:    xsi_set_current_line(288, ng5);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2040);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1880);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 1480U);
    t13 = *((char **)t12);
    t12 = (t0 + 2200);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 2360);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 5160);
    t20 = (t0 + 848);
    t21 = xsi_create_subprogram_invocation(t19, 0, t0, t20, 0, 0);
    t22 = (t0 + 3640);
    xsi_vlogvar_assign_value(t22, t5, 0, 0, 8192);
    t23 = (t0 + 3800);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 5);
    t24 = (t0 + 3960);
    xsi_vlogvar_assign_value(t24, t11, 0, 0, 8);
    t25 = (t0 + 4120);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 8);
    t26 = (t0 + 4280);
    xsi_vlogvar_assign_value(t26, t15, 0, 0, 4);
    t27 = (t0 + 4440);
    xsi_vlogvar_assign_value(t27, t18, 0, 0, 4);

LAB177:    t28 = (t0 + 5256);
    t29 = *((char **)t28);
    t30 = (t29 + 80U);
    t31 = *((char **)t30);
    t32 = (t31 + 272U);
    t33 = *((char **)t32);
    t34 = (t33 + 0U);
    t35 = *((char **)t34);
    t36 = ((int  (*)(char *, char *))t35)(t0, t29);
    if (t36 != 0)
        goto LAB179;

LAB178:    t29 = (t0 + 5256);
    t37 = *((char **)t29);
    t29 = (t0 + 3480);
    t38 = (t29 + 56U);
    t39 = *((char **)t38);
    memcpy(t40, t39, 8);
    t41 = (t0 + 848);
    t42 = (t0 + 5160);
    t43 = 0;
    xsi_delete_subprogram_invocation(t41, t37, t0, t42, t43);
    memset(t44, 0, 8);
    t45 = (t2 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t2);
    t48 = *((unsigned int *)t40);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB183;

LAB180:    if (t56 != 0)
        goto LAB182;

LAB181:    *((unsigned int *)t44) = 1;

LAB183:    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB184;

LAB185:
LAB186:    xsi_set_current_line(298, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB188;
    goto LAB1;

LAB179:    t28 = (t0 + 5352U);
    *((char **)t28) = &&LAB177;
    goto LAB1;

LAB182:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB183;

LAB184:    xsi_set_current_line(288, ng5);

LAB187:    xsi_set_current_line(289, ng5);
    t66 = (t0 + 3000);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = ((char*)((ng7)));
    memset(t70, 0, 8);
    xsi_vlog_unsigned_add(t70, 32, t68, 8, t69, 32);
    t71 = (t0 + 3000);
    xsi_vlogvar_assign_value(t71, t70, 0, 0, 8);
    goto LAB186;

LAB188:    xsi_set_current_line(299, ng5);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8192);
    xsi_set_current_line(300, ng5);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(301, ng5);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(302, ng5);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(303, ng5);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(304, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB189;
    goto LAB1;

LAB189:    xsi_set_current_line(305, ng5);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2040);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1880);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 1480U);
    t13 = *((char **)t12);
    t12 = (t0 + 2200);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 2360);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 5160);
    t20 = (t0 + 848);
    t21 = xsi_create_subprogram_invocation(t19, 0, t0, t20, 0, 0);
    t22 = (t0 + 3640);
    xsi_vlogvar_assign_value(t22, t5, 0, 0, 8192);
    t23 = (t0 + 3800);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 5);
    t24 = (t0 + 3960);
    xsi_vlogvar_assign_value(t24, t11, 0, 0, 8);
    t25 = (t0 + 4120);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 8);
    t26 = (t0 + 4280);
    xsi_vlogvar_assign_value(t26, t15, 0, 0, 4);
    t27 = (t0 + 4440);
    xsi_vlogvar_assign_value(t27, t18, 0, 0, 4);

LAB190:    t28 = (t0 + 5256);
    t29 = *((char **)t28);
    t30 = (t29 + 80U);
    t31 = *((char **)t30);
    t32 = (t31 + 272U);
    t33 = *((char **)t32);
    t34 = (t33 + 0U);
    t35 = *((char **)t34);
    t36 = ((int  (*)(char *, char *))t35)(t0, t29);
    if (t36 != 0)
        goto LAB192;

LAB191:    t29 = (t0 + 5256);
    t37 = *((char **)t29);
    t29 = (t0 + 3480);
    t38 = (t29 + 56U);
    t39 = *((char **)t38);
    memcpy(t40, t39, 8);
    t41 = (t0 + 848);
    t42 = (t0 + 5160);
    t43 = 0;
    xsi_delete_subprogram_invocation(t41, t37, t0, t42, t43);
    memset(t44, 0, 8);
    t45 = (t2 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t2);
    t48 = *((unsigned int *)t40);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB196;

LAB193:    if (t56 != 0)
        goto LAB195;

LAB194:    *((unsigned int *)t44) = 1;

LAB196:    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB197;

LAB198:
LAB199:    xsi_set_current_line(317, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB201;
    goto LAB1;

LAB192:    t28 = (t0 + 5352U);
    *((char **)t28) = &&LAB190;
    goto LAB1;

LAB195:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB196;

LAB197:    xsi_set_current_line(305, ng5);

LAB200:    xsi_set_current_line(306, ng5);
    t66 = (t0 + 3000);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = ((char*)((ng7)));
    memset(t70, 0, 8);
    xsi_vlog_unsigned_add(t70, 32, t68, 8, t69, 32);
    t71 = (t0 + 3000);
    xsi_vlogvar_assign_value(t71, t70, 0, 0, 8);
    goto LAB199;

LAB201:    xsi_set_current_line(318, ng5);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8192);
    xsi_set_current_line(319, ng5);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(320, ng5);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(321, ng5);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(322, ng5);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(323, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB202;
    goto LAB1;

LAB202:    xsi_set_current_line(324, ng5);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2040);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1880);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 1480U);
    t13 = *((char **)t12);
    t12 = (t0 + 2200);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 2360);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 5160);
    t20 = (t0 + 848);
    t21 = xsi_create_subprogram_invocation(t19, 0, t0, t20, 0, 0);
    t22 = (t0 + 3640);
    xsi_vlogvar_assign_value(t22, t5, 0, 0, 8192);
    t23 = (t0 + 3800);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 5);
    t24 = (t0 + 3960);
    xsi_vlogvar_assign_value(t24, t11, 0, 0, 8);
    t25 = (t0 + 4120);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 8);
    t26 = (t0 + 4280);
    xsi_vlogvar_assign_value(t26, t15, 0, 0, 4);
    t27 = (t0 + 4440);
    xsi_vlogvar_assign_value(t27, t18, 0, 0, 4);

LAB203:    t28 = (t0 + 5256);
    t29 = *((char **)t28);
    t30 = (t29 + 80U);
    t31 = *((char **)t30);
    t32 = (t31 + 272U);
    t33 = *((char **)t32);
    t34 = (t33 + 0U);
    t35 = *((char **)t34);
    t36 = ((int  (*)(char *, char *))t35)(t0, t29);
    if (t36 != 0)
        goto LAB205;

LAB204:    t29 = (t0 + 5256);
    t37 = *((char **)t29);
    t29 = (t0 + 3480);
    t38 = (t29 + 56U);
    t39 = *((char **)t38);
    memcpy(t40, t39, 8);
    t41 = (t0 + 848);
    t42 = (t0 + 5160);
    t43 = 0;
    xsi_delete_subprogram_invocation(t41, t37, t0, t42, t43);
    memset(t44, 0, 8);
    t45 = (t2 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t2);
    t48 = *((unsigned int *)t40);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB209;

LAB206:    if (t56 != 0)
        goto LAB208;

LAB207:    *((unsigned int *)t44) = 1;

LAB209:    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB210;

LAB211:
LAB212:    xsi_set_current_line(335, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB214;
    goto LAB1;

LAB205:    t28 = (t0 + 5352U);
    *((char **)t28) = &&LAB203;
    goto LAB1;

LAB208:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB209;

LAB210:    xsi_set_current_line(324, ng5);

LAB213:    xsi_set_current_line(325, ng5);
    t66 = (t0 + 3000);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = ((char*)((ng7)));
    memset(t70, 0, 8);
    xsi_vlog_unsigned_add(t70, 32, t68, 8, t69, 32);
    t71 = (t0 + 3000);
    xsi_vlogvar_assign_value(t71, t70, 0, 0, 8);
    goto LAB212;

LAB214:    xsi_set_current_line(336, ng5);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8192);
    xsi_set_current_line(337, ng5);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(338, ng5);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(339, ng5);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(340, ng5);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(341, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB215;
    goto LAB1;

LAB215:    xsi_set_current_line(342, ng5);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2040);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1880);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 1480U);
    t13 = *((char **)t12);
    t12 = (t0 + 2200);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 2360);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 5160);
    t20 = (t0 + 848);
    t21 = xsi_create_subprogram_invocation(t19, 0, t0, t20, 0, 0);
    t22 = (t0 + 3640);
    xsi_vlogvar_assign_value(t22, t5, 0, 0, 8192);
    t23 = (t0 + 3800);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 5);
    t24 = (t0 + 3960);
    xsi_vlogvar_assign_value(t24, t11, 0, 0, 8);
    t25 = (t0 + 4120);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 8);
    t26 = (t0 + 4280);
    xsi_vlogvar_assign_value(t26, t15, 0, 0, 4);
    t27 = (t0 + 4440);
    xsi_vlogvar_assign_value(t27, t18, 0, 0, 4);

LAB216:    t28 = (t0 + 5256);
    t29 = *((char **)t28);
    t30 = (t29 + 80U);
    t31 = *((char **)t30);
    t32 = (t31 + 272U);
    t33 = *((char **)t32);
    t34 = (t33 + 0U);
    t35 = *((char **)t34);
    t36 = ((int  (*)(char *, char *))t35)(t0, t29);
    if (t36 != 0)
        goto LAB218;

LAB217:    t29 = (t0 + 5256);
    t37 = *((char **)t29);
    t29 = (t0 + 3480);
    t38 = (t29 + 56U);
    t39 = *((char **)t38);
    memcpy(t40, t39, 8);
    t41 = (t0 + 848);
    t42 = (t0 + 5160);
    t43 = 0;
    xsi_delete_subprogram_invocation(t41, t37, t0, t42, t43);
    memset(t44, 0, 8);
    t45 = (t2 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t2);
    t48 = *((unsigned int *)t40);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB222;

LAB219:    if (t56 != 0)
        goto LAB221;

LAB220:    *((unsigned int *)t44) = 1;

LAB222:    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB223;

LAB224:
LAB225:    xsi_set_current_line(352, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB227;
    goto LAB1;

LAB218:    t28 = (t0 + 5352U);
    *((char **)t28) = &&LAB216;
    goto LAB1;

LAB221:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB222;

LAB223:    xsi_set_current_line(342, ng5);

LAB226:    xsi_set_current_line(343, ng5);
    t66 = (t0 + 3000);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = ((char*)((ng7)));
    memset(t70, 0, 8);
    xsi_vlog_unsigned_add(t70, 32, t68, 8, t69, 32);
    t71 = (t0 + 3000);
    xsi_vlogvar_assign_value(t71, t70, 0, 0, 8);
    goto LAB225;

LAB227:    xsi_set_current_line(353, ng5);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8192);
    xsi_set_current_line(354, ng5);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(355, ng5);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(356, ng5);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(357, ng5);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(358, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB228;
    goto LAB1;

LAB228:    xsi_set_current_line(359, ng5);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2040);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1880);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 1480U);
    t13 = *((char **)t12);
    t12 = (t0 + 2200);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 2360);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 5160);
    t20 = (t0 + 848);
    t21 = xsi_create_subprogram_invocation(t19, 0, t0, t20, 0, 0);
    t22 = (t0 + 3640);
    xsi_vlogvar_assign_value(t22, t5, 0, 0, 8192);
    t23 = (t0 + 3800);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 5);
    t24 = (t0 + 3960);
    xsi_vlogvar_assign_value(t24, t11, 0, 0, 8);
    t25 = (t0 + 4120);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 8);
    t26 = (t0 + 4280);
    xsi_vlogvar_assign_value(t26, t15, 0, 0, 4);
    t27 = (t0 + 4440);
    xsi_vlogvar_assign_value(t27, t18, 0, 0, 4);

LAB229:    t28 = (t0 + 5256);
    t29 = *((char **)t28);
    t30 = (t29 + 80U);
    t31 = *((char **)t30);
    t32 = (t31 + 272U);
    t33 = *((char **)t32);
    t34 = (t33 + 0U);
    t35 = *((char **)t34);
    t36 = ((int  (*)(char *, char *))t35)(t0, t29);
    if (t36 != 0)
        goto LAB231;

LAB230:    t29 = (t0 + 5256);
    t37 = *((char **)t29);
    t29 = (t0 + 3480);
    t38 = (t29 + 56U);
    t39 = *((char **)t38);
    memcpy(t40, t39, 8);
    t41 = (t0 + 848);
    t42 = (t0 + 5160);
    t43 = 0;
    xsi_delete_subprogram_invocation(t41, t37, t0, t42, t43);
    memset(t44, 0, 8);
    t45 = (t2 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t2);
    t48 = *((unsigned int *)t40);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB235;

LAB232:    if (t56 != 0)
        goto LAB234;

LAB233:    *((unsigned int *)t44) = 1;

LAB235:    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB236;

LAB237:
LAB238:    xsi_set_current_line(369, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB240;
    goto LAB1;

LAB231:    t28 = (t0 + 5352U);
    *((char **)t28) = &&LAB229;
    goto LAB1;

LAB234:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB235;

LAB236:    xsi_set_current_line(359, ng5);

LAB239:    xsi_set_current_line(360, ng5);
    t66 = (t0 + 3000);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = ((char*)((ng7)));
    memset(t70, 0, 8);
    xsi_vlog_unsigned_add(t70, 32, t68, 8, t69, 32);
    t71 = (t0 + 3000);
    xsi_vlogvar_assign_value(t71, t70, 0, 0, 8);
    goto LAB238;

LAB240:    xsi_set_current_line(370, ng5);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8192);
    xsi_set_current_line(371, ng5);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(372, ng5);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(373, ng5);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(374, ng5);
    t2 = ((char*)((ng27)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(375, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB241;
    goto LAB1;

LAB241:    xsi_set_current_line(376, ng5);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2040);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1880);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 1480U);
    t13 = *((char **)t12);
    t12 = (t0 + 2200);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 2360);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 5160);
    t20 = (t0 + 848);
    t21 = xsi_create_subprogram_invocation(t19, 0, t0, t20, 0, 0);
    t22 = (t0 + 3640);
    xsi_vlogvar_assign_value(t22, t5, 0, 0, 8192);
    t23 = (t0 + 3800);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 5);
    t24 = (t0 + 3960);
    xsi_vlogvar_assign_value(t24, t11, 0, 0, 8);
    t25 = (t0 + 4120);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 8);
    t26 = (t0 + 4280);
    xsi_vlogvar_assign_value(t26, t15, 0, 0, 4);
    t27 = (t0 + 4440);
    xsi_vlogvar_assign_value(t27, t18, 0, 0, 4);

LAB242:    t28 = (t0 + 5256);
    t29 = *((char **)t28);
    t30 = (t29 + 80U);
    t31 = *((char **)t30);
    t32 = (t31 + 272U);
    t33 = *((char **)t32);
    t34 = (t33 + 0U);
    t35 = *((char **)t34);
    t36 = ((int  (*)(char *, char *))t35)(t0, t29);
    if (t36 != 0)
        goto LAB244;

LAB243:    t29 = (t0 + 5256);
    t37 = *((char **)t29);
    t29 = (t0 + 3480);
    t38 = (t29 + 56U);
    t39 = *((char **)t38);
    memcpy(t40, t39, 8);
    t41 = (t0 + 848);
    t42 = (t0 + 5160);
    t43 = 0;
    xsi_delete_subprogram_invocation(t41, t37, t0, t42, t43);
    memset(t44, 0, 8);
    t45 = (t2 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t2);
    t48 = *((unsigned int *)t40);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB248;

LAB245:    if (t56 != 0)
        goto LAB247;

LAB246:    *((unsigned int *)t44) = 1;

LAB248:    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB249;

LAB250:
LAB251:    xsi_set_current_line(386, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB253;
    goto LAB1;

LAB244:    t28 = (t0 + 5352U);
    *((char **)t28) = &&LAB242;
    goto LAB1;

LAB247:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB248;

LAB249:    xsi_set_current_line(376, ng5);

LAB252:    xsi_set_current_line(377, ng5);
    t66 = (t0 + 3000);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = ((char*)((ng7)));
    memset(t70, 0, 8);
    xsi_vlog_unsigned_add(t70, 32, t68, 8, t69, 32);
    t71 = (t0 + 3000);
    xsi_vlogvar_assign_value(t71, t70, 0, 0, 8);
    goto LAB251;

LAB253:    xsi_set_current_line(387, ng5);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8192);
    xsi_set_current_line(388, ng5);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(389, ng5);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(390, ng5);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(391, ng5);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(392, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB254;
    goto LAB1;

LAB254:    xsi_set_current_line(393, ng5);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2040);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1880);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 1480U);
    t13 = *((char **)t12);
    t12 = (t0 + 2200);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 2360);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 5160);
    t20 = (t0 + 848);
    t21 = xsi_create_subprogram_invocation(t19, 0, t0, t20, 0, 0);
    t22 = (t0 + 3640);
    xsi_vlogvar_assign_value(t22, t5, 0, 0, 8192);
    t23 = (t0 + 3800);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 5);
    t24 = (t0 + 3960);
    xsi_vlogvar_assign_value(t24, t11, 0, 0, 8);
    t25 = (t0 + 4120);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 8);
    t26 = (t0 + 4280);
    xsi_vlogvar_assign_value(t26, t15, 0, 0, 4);
    t27 = (t0 + 4440);
    xsi_vlogvar_assign_value(t27, t18, 0, 0, 4);

LAB255:    t28 = (t0 + 5256);
    t29 = *((char **)t28);
    t30 = (t29 + 80U);
    t31 = *((char **)t30);
    t32 = (t31 + 272U);
    t33 = *((char **)t32);
    t34 = (t33 + 0U);
    t35 = *((char **)t34);
    t36 = ((int  (*)(char *, char *))t35)(t0, t29);
    if (t36 != 0)
        goto LAB257;

LAB256:    t29 = (t0 + 5256);
    t37 = *((char **)t29);
    t29 = (t0 + 3480);
    t38 = (t29 + 56U);
    t39 = *((char **)t38);
    memcpy(t40, t39, 8);
    t41 = (t0 + 848);
    t42 = (t0 + 5160);
    t43 = 0;
    xsi_delete_subprogram_invocation(t41, t37, t0, t42, t43);
    memset(t44, 0, 8);
    t45 = (t2 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t2);
    t48 = *((unsigned int *)t40);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB261;

LAB258:    if (t56 != 0)
        goto LAB260;

LAB259:    *((unsigned int *)t44) = 1;

LAB261:    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB262;

LAB263:
LAB264:    xsi_set_current_line(403, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB266;
    goto LAB1;

LAB257:    t28 = (t0 + 5352U);
    *((char **)t28) = &&LAB255;
    goto LAB1;

LAB260:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB261;

LAB262:    xsi_set_current_line(393, ng5);

LAB265:    xsi_set_current_line(394, ng5);
    t66 = (t0 + 3000);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = ((char*)((ng7)));
    memset(t70, 0, 8);
    xsi_vlog_unsigned_add(t70, 32, t68, 8, t69, 32);
    t71 = (t0 + 3000);
    xsi_vlogvar_assign_value(t71, t70, 0, 0, 8);
    goto LAB264;

LAB266:    xsi_set_current_line(404, ng5);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8192);
    xsi_set_current_line(405, ng5);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(406, ng5);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(407, ng5);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(408, ng5);
    t2 = ((char*)((ng28)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(409, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB267;
    goto LAB1;

LAB267:    xsi_set_current_line(410, ng5);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2040);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1880);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 1480U);
    t13 = *((char **)t12);
    t12 = (t0 + 2200);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 2360);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 5160);
    t20 = (t0 + 848);
    t21 = xsi_create_subprogram_invocation(t19, 0, t0, t20, 0, 0);
    t22 = (t0 + 3640);
    xsi_vlogvar_assign_value(t22, t5, 0, 0, 8192);
    t23 = (t0 + 3800);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 5);
    t24 = (t0 + 3960);
    xsi_vlogvar_assign_value(t24, t11, 0, 0, 8);
    t25 = (t0 + 4120);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 8);
    t26 = (t0 + 4280);
    xsi_vlogvar_assign_value(t26, t15, 0, 0, 4);
    t27 = (t0 + 4440);
    xsi_vlogvar_assign_value(t27, t18, 0, 0, 4);

LAB268:    t28 = (t0 + 5256);
    t29 = *((char **)t28);
    t30 = (t29 + 80U);
    t31 = *((char **)t30);
    t32 = (t31 + 272U);
    t33 = *((char **)t32);
    t34 = (t33 + 0U);
    t35 = *((char **)t34);
    t36 = ((int  (*)(char *, char *))t35)(t0, t29);
    if (t36 != 0)
        goto LAB270;

LAB269:    t29 = (t0 + 5256);
    t37 = *((char **)t29);
    t29 = (t0 + 3480);
    t38 = (t29 + 56U);
    t39 = *((char **)t38);
    memcpy(t40, t39, 8);
    t41 = (t0 + 848);
    t42 = (t0 + 5160);
    t43 = 0;
    xsi_delete_subprogram_invocation(t41, t37, t0, t42, t43);
    memset(t44, 0, 8);
    t45 = (t2 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t2);
    t48 = *((unsigned int *)t40);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB274;

LAB271:    if (t56 != 0)
        goto LAB273;

LAB272:    *((unsigned int *)t44) = 1;

LAB274:    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB275;

LAB276:
LAB277:    xsi_set_current_line(420, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB279;
    goto LAB1;

LAB270:    t28 = (t0 + 5352U);
    *((char **)t28) = &&LAB268;
    goto LAB1;

LAB273:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB274;

LAB275:    xsi_set_current_line(410, ng5);

LAB278:    xsi_set_current_line(411, ng5);
    t66 = (t0 + 3000);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = ((char*)((ng7)));
    memset(t70, 0, 8);
    xsi_vlog_unsigned_add(t70, 32, t68, 8, t69, 32);
    t71 = (t0 + 3000);
    xsi_vlogvar_assign_value(t71, t70, 0, 0, 8);
    goto LAB277;

LAB279:    xsi_set_current_line(421, ng5);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8192);
    xsi_set_current_line(422, ng5);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(423, ng5);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(424, ng5);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(425, ng5);
    t2 = ((char*)((ng28)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(426, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB280;
    goto LAB1;

LAB280:    xsi_set_current_line(427, ng5);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2040);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1880);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 1480U);
    t13 = *((char **)t12);
    t12 = (t0 + 2200);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 2360);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 5160);
    t20 = (t0 + 848);
    t21 = xsi_create_subprogram_invocation(t19, 0, t0, t20, 0, 0);
    t22 = (t0 + 3640);
    xsi_vlogvar_assign_value(t22, t5, 0, 0, 8192);
    t23 = (t0 + 3800);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 5);
    t24 = (t0 + 3960);
    xsi_vlogvar_assign_value(t24, t11, 0, 0, 8);
    t25 = (t0 + 4120);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 8);
    t26 = (t0 + 4280);
    xsi_vlogvar_assign_value(t26, t15, 0, 0, 4);
    t27 = (t0 + 4440);
    xsi_vlogvar_assign_value(t27, t18, 0, 0, 4);

LAB281:    t28 = (t0 + 5256);
    t29 = *((char **)t28);
    t30 = (t29 + 80U);
    t31 = *((char **)t30);
    t32 = (t31 + 272U);
    t33 = *((char **)t32);
    t34 = (t33 + 0U);
    t35 = *((char **)t34);
    t36 = ((int  (*)(char *, char *))t35)(t0, t29);
    if (t36 != 0)
        goto LAB283;

LAB282:    t29 = (t0 + 5256);
    t37 = *((char **)t29);
    t29 = (t0 + 3480);
    t38 = (t29 + 56U);
    t39 = *((char **)t38);
    memcpy(t40, t39, 8);
    t41 = (t0 + 848);
    t42 = (t0 + 5160);
    t43 = 0;
    xsi_delete_subprogram_invocation(t41, t37, t0, t42, t43);
    memset(t44, 0, 8);
    t45 = (t2 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t2);
    t48 = *((unsigned int *)t40);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB287;

LAB284:    if (t56 != 0)
        goto LAB286;

LAB285:    *((unsigned int *)t44) = 1;

LAB287:    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB288;

LAB289:
LAB290:    xsi_set_current_line(437, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB292;
    goto LAB1;

LAB283:    t28 = (t0 + 5352U);
    *((char **)t28) = &&LAB281;
    goto LAB1;

LAB286:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB287;

LAB288:    xsi_set_current_line(427, ng5);

LAB291:    xsi_set_current_line(428, ng5);
    t66 = (t0 + 3000);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = ((char*)((ng7)));
    memset(t70, 0, 8);
    xsi_vlog_unsigned_add(t70, 32, t68, 8, t69, 32);
    t71 = (t0 + 3000);
    xsi_vlogvar_assign_value(t71, t70, 0, 0, 8);
    goto LAB290;

LAB292:    xsi_set_current_line(438, ng5);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8192);
    xsi_set_current_line(439, ng5);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(440, ng5);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(441, ng5);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(442, ng5);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(443, ng5);
    t2 = (t0 + 5160);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB293;
    goto LAB1;

LAB293:    xsi_set_current_line(444, ng5);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2040);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1880);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 1480U);
    t13 = *((char **)t12);
    t12 = (t0 + 2200);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 2360);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 5160);
    t20 = (t0 + 848);
    t21 = xsi_create_subprogram_invocation(t19, 0, t0, t20, 0, 0);
    t22 = (t0 + 3640);
    xsi_vlogvar_assign_value(t22, t5, 0, 0, 8192);
    t23 = (t0 + 3800);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 5);
    t24 = (t0 + 3960);
    xsi_vlogvar_assign_value(t24, t11, 0, 0, 8);
    t25 = (t0 + 4120);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 8);
    t26 = (t0 + 4280);
    xsi_vlogvar_assign_value(t26, t15, 0, 0, 4);
    t27 = (t0 + 4440);
    xsi_vlogvar_assign_value(t27, t18, 0, 0, 4);

LAB294:    t28 = (t0 + 5256);
    t29 = *((char **)t28);
    t30 = (t29 + 80U);
    t31 = *((char **)t30);
    t32 = (t31 + 272U);
    t33 = *((char **)t32);
    t34 = (t33 + 0U);
    t35 = *((char **)t34);
    t36 = ((int  (*)(char *, char *))t35)(t0, t29);
    if (t36 != 0)
        goto LAB296;

LAB295:    t29 = (t0 + 5256);
    t37 = *((char **)t29);
    t29 = (t0 + 3480);
    t38 = (t29 + 56U);
    t39 = *((char **)t38);
    memcpy(t40, t39, 8);
    t41 = (t0 + 848);
    t42 = (t0 + 5160);
    t43 = 0;
    xsi_delete_subprogram_invocation(t41, t37, t0, t42, t43);
    memset(t44, 0, 8);
    t45 = (t2 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t2);
    t48 = *((unsigned int *)t40);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB300;

LAB297:    if (t56 != 0)
        goto LAB299;

LAB298:    *((unsigned int *)t44) = 1;

LAB300:    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB301;

LAB302:
LAB303:    xsi_set_current_line(450, ng5);
    t2 = (t0 + 3000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng29, 2, t0, (char)118, t4, 8);
    goto LAB1;

LAB296:    t28 = (t0 + 5352U);
    *((char **)t28) = &&LAB294;
    goto LAB1;

LAB299:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB300;

LAB301:    xsi_set_current_line(444, ng5);

LAB304:    xsi_set_current_line(445, ng5);
    t66 = (t0 + 3000);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = ((char*)((ng7)));
    memset(t70, 0, 8);
    xsi_vlog_unsigned_add(t70, 32, t68, 8, t69, 32);
    t71 = (t0 + 3000);
    xsi_vlogvar_assign_value(t71, t70, 0, 0, 8);
    goto LAB303;

}

static void Always_453_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 5600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(453, ng5);
    t2 = (t0 + 5408);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(453, ng5);
    t4 = (t0 + 2840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2840);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}


extern void work_m_14236533281396458456_1512250407_init()
{
	static char *pe[] = {(void *)Initial_37_0,(void *)Always_453_1};
	static char *se[] = {(void *)sp_tester};
	xsi_register_didat("work_m_14236533281396458456_1512250407", "isim/test_ual_isim_beh.exe.sim/work/m_14236533281396458456_1512250407.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
