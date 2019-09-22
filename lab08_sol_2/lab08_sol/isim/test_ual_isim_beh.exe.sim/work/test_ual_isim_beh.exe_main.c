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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_08443760597564045175_4122600708_init();
    work_m_14874940590448701610_3190593924_init();
    work_m_05503432345961221475_0833183191_init();
    work_m_06946556034003279232_4265375256_init();
    work_m_08491845025798156491_1345475044_init();
    work_m_03987277753332022221_1755210615_init();
    work_m_14236533281396458456_1512250407_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_14236533281396458456_1512250407");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
