/**
 * @file src.cpp
 * @author Lowell Lobo
 * @brief Source file that hold the function definition of class PID
 * @version 0.1
 * @date 2023-10-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "pid.hpp"

/**
 * @brief Return the Proportional gain value
 * 
 * @return const double 
 */
const double PID::getKp(){
  return 1;
}
/**
 * @brief Return the Derivative gain value
 * 
 * @return const double 
 */
const double PID::getKd(){
  return 1;
}
/**
 * @brief Return the Integral gain value
 * 
 * @return const double 
 */
const double PID::getKi(){
  return 1;
}
/**
 * @brief Function to calculate the control output at given time value of the system
 * 
 * @param setPoint The desired orientation of the system. Used in calculating system error
 * @param pVaraible The actual orientation of the system. Used in calculating system error
 * @param dtime Smallest defined time for discrete time integration and differentiation
 * @return double 
 */
double PID::compute(double setPoint, double pVaraible, double dtime){
  return 1;
}
