#pragma once
#include "CarMove.hpp"
#include <stdio.h>

void CarMove::with_direction_must_to_move(MotorL290N *m, Document *j)
{
    if (strcmp(j->get_direcao(), "para_direita"))
        m->run_right();

    if (strcmp(j->get_direcao(), "para_frente"))
        m->run_forward();

    if (strcmp(j->get_direcao(), "para_tras"))
        m->run_back();

    if (strcmp(j->get_direcao(), "para_esquerda"))
        m->run_left();
}