#pragma once
#include <stdio.h>
#include <Arduino.h>
#include "MotorL290N.hpp"
#include "Document.hpp"

MotorL290N *motorL290N = new MotorL290N();

void setup()
{
    Serial.begin(9600);
    Serial.println("-- CONTROLE DE MOTORES DC COM DRIVER PONTE H L298N --");
    Serial.println("Digite: \n 1: para ligar os motores em uma direcao;\n 2: para mudar a direção; \n Qualquer outro valor: para parar os motores");

    motorL290N->motor_setup();
}

void loop()
{
    const char *json = "{\"direcao\":\"para_direita\",\"sentido\": \"frente\"}";

    if (Serial.available())
    {
        auto document = new Document(json);
    }
}
