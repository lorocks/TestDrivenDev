/**
 * @file src.cpp
 * @author Lowell Lobo
 * @author @abhimanyu-saxena
 * @author @KshitijKarnawat
 * @brief Source file that hold the function definition of class PID
 * @version 0.1
 * @date 2023-10-02
 *
 * @copyright Copyright (c) 2023
 *
 */
#include "pid.hpp"

const double PID::getKp() { return Kp; }

const double PID::getKd() { return Kd; }

const double PID::getKi() { return Ki; }

double PID::compute(double setPoint, double pVariable, double dtime) {
  // Calculate the error
  double error = setPoint - pVariable;

  // Calculate the integral of error
  integral += error * dtime;

  // Calculate the derivative of error
  double derivative = (error - prevError) / dtime;

  // Calculate the control output
  double output = (Kp * error) + (Ki * integral) + (Kd * derivative);

  // Update the previous error
  prevError = error;

  return output;
}
