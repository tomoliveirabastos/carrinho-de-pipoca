#pragma once
#include <stdio.h>
#include <ArduinoJson.h>
#include <Arduino.h>
#include "MotorL290N.hpp"
#include "Document.hpp"
#include "CarMove.hpp"

MotorL290N *motorL290N = new MotorL290N();

void setup()
{
    Serial.begin(9600);

    motorL290N->motor_setup();
}

void loop()
{
    const char *json = "{\"direcao\":\"para_direita\",\"sentido\": \"frente\"}";

    if (Serial.available())
    {
        JsonDocument doc;
        DeserializationError error = deserializeJson(doc, json);

        if (error)
        {
            Serial.print(F("deserializeJson() failed: "));
            Serial.println(error.f_str());
        }
        else
        {

            Document *d = new Document();
            d->set_direcao(doc["direcao"]);
            CarMove::with_direction_must_to_move(motorL290N, d);
        }
    }
}
