#ifndef Leitor_H
#define Leitor_H

#include <iostream>
#include <fstream>
#include <unordered_set>
#include <stack>
#include "../include/json.hpp"
#include "Automato.h"

using json = nlohmann::json;

class Leitor
{
    public:
        // Construtor da classe
        Leitor()
        {
            file = NULL;
        }

        // Método responsável por ler o arquivo e armazená-lo no campo designado
        void lerJson(std::string path);

        // Cria o autômato a partir das informações já retiradas do arquivo pela função "lerJson"
        Automato criarAutomato();

    private:
        json file;
};

#endif