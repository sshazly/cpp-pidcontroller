/** @file main.cpp
 *  @brief Runs PID controller in forloop (2 iterations) and prints.
 *
 *  @author Sherif Shazly (sshazly)
 *  @copyright (2017) Sherif Shazly
 *  @bug No known bugs.
 */


#include <PID.hpp>
#include <iostream>
#include <sstream>
#include <gnuplot_i.hpp>
#include <vector>
#include <cmath>
using namespace std;
int main() {
  std::vector<double> value,time;

  double kp = 0.1;
  double ki = 0.05;
  double kd = 0.005;
  double target = 10;
  double val = 0;
  double dt = 0.1;
  double t=0;
  /// cout << "Please input Kp, Ki, Kd for PID control (separated by a space)" << endl;
  /// cin >> kp >> ki >> kd;
  /// cout << "Please input setpoint, initial velocity, delta time (separated by a space)" << endl;
  /// cin >> target >> val >> dt;
  class PID pid; 	 	/// Declare pid as class PID
  pid.setGain(kp,ki,kd); 	/// Set gain values (pointless, not used in calculation)
  pid.initialize(dt);
  for (int i = 0; i < 100; i++) {
				/// Calculate increment
        double inc = pid.calculate(target, val); 
				/// Print values to console
        const char* p="velocity:% 7.3f     increment:% 7.3f\n";
        printf(p, val, inc);
        val += inc; 		/// add increment to dynamic value
        t += dt;
        value.push_back(val);
        time.push_back(t);
  }
  Gnuplot gp;
  gp.set_style("lines");
  gp.set_xlabel("time");
  gp.set_ylabel("PID output");
  gp.plot_xy(time,value);
  cout << "Press Enter to quit";
  cin.get();

  return (0);
}
