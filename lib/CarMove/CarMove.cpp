#pragma once
#include "CarMove.hpp"
#include <stdio.h>

void CarMove::customPrint(const char *t, Document *j)
{
    Serial.println(strcat((char *)t, j->get_direcao()));
}

void CarMove::with_direction_must_to_move(MotorL290N *m, Document *j)
{
    if (strcmp(j->get_direcao(), "para_direita") != 0)
    {
        customPrint("run_right", j);
        m->run_right();
    }

    if (strcmp(j->get_direcao(), "para_frente") != 0)
    {
        customPrint("run_forward", j);
        m->run_forward();
    }

    if (strcmp(j->get_direcao(), "para_tras") != 0)
    {
        customPrint("run_back", j);
        m->run_back();
    }

    if (strcmp(j->get_direcao(), "para_esquerda") != 0)
    {
        customPrint("run_left", j);
        m->run_left();
    }
}
