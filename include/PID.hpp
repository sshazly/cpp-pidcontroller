/** @file PID.hpp
 *  @brief Library for class PID.
 *
 *  @author Sherif Shazly (sshazly)
 *  @copyright (2017) Sherif Shazly (ENPM808X)
 *  @bug calculate method not implemented.
 */

#pragma once
#include<iostream>
#include <cmath>
using namespace std;

// Define the PID class with variable kp, kd, ki
class PID
{
	public:
		void setGain(double _kp, double _ki, double _kd);
		double getKi();
		double getKp();
		double getKd();
		double calculate(double setpoint, double pv);
		void initialize(double _dt);
	private:
		double kp;					///<kp
		double kd;					///<ki
		double ki;					///<kd
		double preError;                                ///< previous error
    	 	double integral;                             ///< previous integral
		double dt;
};

// subfunction to set the private gain variables
void PID::setGain(double _kp, double _ki, double _kd)
{
	this->kp = _kp;
	this->ki = _ki;
	this->kd = _kd;
}

// subfunction to initialize the PID controller
void PID::initialize(double _dt)
{
	this->dt = _dt;
	this->integral=0;
	this->preError=0;
}

// subfunction to get the private gain variable Ki
double PID::getKi()
{
	return (ki);
}

// subfunction to get the private gain variable Kp
double PID::getKp()
{
	return (kp);
}

// subfunction to get the private gain variable Kd
double PID::getKd()
{
	return (kd);
}

// subfunction to calculate the increment neccessary to converge previous value (pv) to setpoint
double PID::calculate(double setpoint, double pv)
{
return 0;
}
