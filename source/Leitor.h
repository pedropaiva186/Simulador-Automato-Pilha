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
        void lerJson(std::string path);

        Automato criarAutomato();

    private:
        json file;
};

#endif