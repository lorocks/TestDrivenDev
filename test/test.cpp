/**
 * @file test.cpp
 * @author Lowell Lobo
 * @brief Defines unit tests to be run and verified using GitHub Actions
 * It helps in testing the PID controller class design
 * @version 0.1
 * @date 2023-10-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <gtest/gtest.h>
#include "pid.hpp"

/**
 * @brief Global declaration of a PID controller test object to be used in testing
 * 
 */
PID test(0.5, 0.2, 0.1);

/**
 * @brief Construct a new TEST object
 * The test object checks to see if the compute method of the PID controller works as intended
 */
TEST(dummy_test_compute, testing_computed_method) {
  EXPECT_DOUBLE_EQ(test.compute(50, 0, 0.1), 26.5);
}

/**
 * @brief Construct a new TEST object
 * The test object checks the compute method after 5 PID loops with given parameters
 * 
 */
TEST(dummy_test_compute_overtime, testing_compute_with_time){
  /**
   * @brief Temporary varaibles to store the control output and process variable
   * 
   */
  double control_output;
  double pvar = 0;

  for (int i = 0; i<5; i++){
    control_output = test.compute(50, pvar, 0.1);
    pvar += control_output;
  }
  
  EXPECT_DOUBLE_EQ(control_output, 5.0056);
}

/**
 * @brief Construct a new TEST object
 * The test object checkes to see if returned Kp value is as intended
 */
TEST(dummy_test_getKp_value, testing_get_methods) {
  EXPECT_EQ(test.getKp(), 0.5);
}

/**
 * @brief Construct a new TEST object
 * The test object checkes to see if returned Kd value is as intended
 */
TEST(dummy_test_getKd_value, testing_get_methods) {
  EXPECT_EQ(test.getKd(), 0.1);
}

/**
 * @brief Construct a new TEST object
 * The test object checkes to see if returned Ki value is as intended
 */
TEST(dummy_test_getKi_value, testing_get_methods) {
  EXPECT_EQ(test.getKi(), 0.2);
}


