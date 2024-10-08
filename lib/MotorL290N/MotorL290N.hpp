#pragma once
#include <Arduino.h>

class MotorL290N
{

private:
    char *DIRECAO;
    int SPEED = 100;
    int DELAY = 1000;
    int IN1 = 11;
    int IN2 = 9;
    int IN3 = 8;
    int IN4 = 7;
    int ENA = 6;
    int ENB = 5;

public:
    void motor_setup();
    char *get_direction();
    void set_direction(char *direction);
    void run_right();
    void run_left();
    void run_forward();
    void run_back();
    void stop_running();
};