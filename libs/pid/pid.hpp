/**
 * @file pid.hpp
 * @author Lowell Lobo
 * @brief .hpp file that contains the declration of PID controller class
 * @version 0.1
 * @date 2023-10-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#pragma once

/**
 * @brief A class that holds the methods to implement a PID controller
 * 
 */
class PID{
    private:
        /**
        * @brief Proportional gain attribute
        * 
        */
        double Kp;
        /**
         * @brief Integral gain attribute
         * 
         */
        double Ki;
        /**
         * @brief Derivative gain attribute
         * 
         */
        double Kd;
        /**
         * @brief Variable to hold the integral of error over time
         * 
         */
        double integral;
        /**
         * @brief Variable to hold the previous error value
         * 
         */
        double prevError;
        
    public:
        /**
        * @brief Construct a new PID object
        * 
        * @param kp The proportional gain value
        * @param ki The integral gain value
        * @param kd The derivative gain value
        */
        PID(double kp=0, double ki=0, double kd=0) 
        : Kp(kp), Ki(ki), Kd(kd), integral(0), prevError(0)
        {
        }
        /**
         * @brief Function Declaration to Get the Kp object
         * 
         * @return const double 
         */
        const double getKp();
        /**
         * @brief Function Declaration to Get the Ki object
         * 
         * @return const double 
         */
        const double getKi();
        /**
         * @brief Function Declaration to Get the Kd object
         * 
         * @return const double 
         */
        const double getKd();
        /**
         * @brief Function declaration for computing teh control output
         * 
         * @return double 
         */
        double compute(double setPoint, double pVariable, double dtime);
        /**
         * @brief Destroy the PID object
         * 
         */
        ~PID(){}
};