#pragma once
#include "Document.hpp"

Document::Document(const char *j)
{
    JsonDocument doc;
    deserializeJson(doc, j);

    this->direcao = doc["direcao"];
    this->sentido = doc["sentido"];
}

char *Document::get_direcao()
{
    return this->direcao;
}

char *Document::get_sentido()
{
    return this->sentido;
}