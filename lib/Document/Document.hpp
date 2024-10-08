#pragma once
#include <ArduinoJson.h>

class Document
{
private:
    char *direcao = "para_frente";
    char *sentido = "para_frente";

public:
    Document(const char *jsonString);
    Document *load_json(char *json);
    char *get_direcao();
    char *get_sentido();
};