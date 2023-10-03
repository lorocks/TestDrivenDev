#pragma once


class PID{
    private:
        double Kp, Ki, Kd;
    public:
        const double getKp();
        const double getKi();
        const double getKd();
        double compute();
};