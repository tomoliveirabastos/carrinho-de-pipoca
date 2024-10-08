#pragma once
#include "MotorL290N.hpp"
#include "Document.hpp"

class CarMove
{
public:
    void with_direction_must_to_move(MotorL290N *m, Document *j);
};