#pragma once
#include "Document.hpp"

void Document::set_direcao(const char *d)
{
    this->direcao = d;
}

const char *Document::get_direcao()
{
    return this->direcao;
}