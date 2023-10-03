#pragma once


class PID{
    private:
        double Kp;
        double Ki;
        double Kd;
        double integral;
        double prevError;
        
    public:
        PID(double kp=0, double ki=0, double kd=0) 
        : Kp(kp), Ki(ki), Kd(kd), integral(0), prevError(0)
        {
        }
        const double getKp();
        const double getKi();
        const double getKd();
        double compute();
};