/** @file test.cpp
 *  @brief Arbitrary tests to verify that class subfunctions behave correctly.
 *
 *  This contains two tests, the first test is the calculation of the proportional component, a 
 *  subtraction problem (when kp=1). The second test is the setGain, getKi, getKp, and getKd.
 *
 *  @author Sherif Shazly (sshazly)
 *  @copyright (2017) Sherif Shazly
 *  @bug Test failure due to unequal values
 */

#include <gtest/gtest.h>
//#include </home/viki/cppSherif/cpp-boilerplateClone/include/lib.hpp>
#include <libPID.hpp>
// First test: pid.calculate(x,y) = x-y
TEST(calculateMethod, should_pass)
{
    PID pid;
    pid.setGain(1,0,0);//Set proportional gain to 1
    pid.initialize(.1);//Initialize dt as .1 (arbitrary value)
    EXPECT_EQ(3, pid.calculate(4,1)); // Calculate (4-1)*kp
    EXPECT_EQ(1, pid.calculate(1,0)); // Calculate (1-0)*kp
}

// Second test [Part 1] (Ki): pid.getKi()=pid.setGain(Kp,Ki,Kd) [the Ki value]
TEST(setGainMethod, should_pass_ki)
{
    PID pid;
    pid.setGain(0,1,0);
    double ki = pid.getKi();
    EXPECT_EQ(1, ki);
}

// Second test [Part 2] (Kp): pid.getKp()=pid.setGain(Kp,Ki,Kd) [the Kp value]
TEST(setGainMethod, should_pass_kp)
{
    PID pid;
    pid.setGain(1,0,0);
    double kp = pid.getKp();
    EXPECT_EQ(1, kp);
}

// Second test [Part 3]: pid.getKi()=pid.setGain(Kp,Ki,Kd) [the Kd value]
TEST(setGainMethod, should_pass_kd)
{
    PID pid;
    pid.setGain(0,0,1);
    double kd = pid.getKd();
    EXPECT_EQ(1, kd);
}
