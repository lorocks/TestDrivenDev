#pragma once

int my_function1(int input);

class PID{
    private:
        double Kp, Ki, Kd;
    public:
        const double const getKp();
        const double const getKi();
        const double const getKd();
        double compute();
};