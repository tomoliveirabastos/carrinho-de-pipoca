#pragma once
#include "MotorL290N.hpp"

void MotorL290N::motor_setup()
{
    pinMode(this->ENA, OUTPUT);
    pinMode(this->IN1, OUTPUT);
    pinMode(this->IN2, OUTPUT);
    pinMode(this->IN3, OUTPUT);
    pinMode(this->IN4, OUTPUT);
    pinMode(this->ENB, OUTPUT);
}

void MotorL290N::stop_running()
{
    digitalWrite(this->IN1, LOW);
    digitalWrite(this->IN2, LOW);
    digitalWrite(this->IN3, LOW);
    digitalWrite(this->IN4, LOW);

    delay(this->DELAY);
}

void MotorL290N::run_back()
{
    digitalWrite(this->IN1, LOW);
    digitalWrite(this->IN2, HIGH);
    digitalWrite(this->IN3, LOW);
    digitalWrite(this->IN4, HIGH);

    analogWrite(this->ENA, this->SPEED);
    analogWrite(this->ENB, this->SPEED);
    delay(this->DELAY);
}

int MotorL290N::get_delay()
{
    return this->DELAY;
}

void MotorL290N::run_forward()
{
    digitalWrite(this->IN1, HIGH);
    digitalWrite(this->IN2, LOW);
    digitalWrite(this->IN3, HIGH);
    digitalWrite(this->IN4, LOW);

    analogWrite(this->ENA, this->SPEED);
    analogWrite(this->ENB, this->SPEED);

    delay(this->DELAY);
}

void MotorL290N::run_left()
{
    digitalWrite(this->IN1, HIGH);
    digitalWrite(this->IN2, LOW);
    digitalWrite(this->IN3, HIGH);
    digitalWrite(this->IN4, HIGH);

    analogWrite(this->ENA, this->SPEED);
    analogWrite(this->ENB, this->SPEED);
    delay(this->DELAY);
}

void MotorL290N::run_right()
{
    digitalWrite(this->IN1, HIGH);
    digitalWrite(this->IN2, HIGH);
    digitalWrite(this->IN4, HIGH);
    digitalWrite(this->IN3, LOW);

    analogWrite(this->ENA, this->SPEED);
    analogWrite(this->ENB, this->SPEED);
    delay(this->DELAY);
}

char *MotorL290N::get_direction()
{
    return this->DIRECAO;
}

void MotorL290N::set_direction(char *d)
{
    this->DIRECAO = d;
}