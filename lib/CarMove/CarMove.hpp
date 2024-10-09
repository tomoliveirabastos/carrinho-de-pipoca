#pragma once
#include "MotorL290N.hpp"
#include "Document.hpp"

class CarMove
{
public:
    static void with_direction_must_to_move(MotorL290N *m, Document *j);
    static void customPrint(const char *, Document *);
};