#pragma once
#include <ArduinoJson.h>

class Document
{
private:
    const char *direcao;

public:
    void set_direcao(const char *);
    const char *get_direcao();
};