/**
 * @file main.cpp
 * @author Lowell Lobo
 * @brief Code that implements a PID controller in C++
 * @version 0.1
 * @date 2023-10-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "lib.hpp"
#include "pid.hpp"

/**
 * @brief The main method of the appliaciton
 * 
 * @return int 
 */
int main() {
  cout << "Begin PID controller design" << endl;
  // Use this to find actual value in test
  // PID test(0.5, 0.2, 0.1);
  // double pvar = 0; 
  // double control_output;
  // for (int i = 0; i<5; i++){
  //   control_output = test.compute(50, pvar, 0.1);
  //   pvar += control_output;
  // }
  // cout << control_output << endl;
  return 0;
}
