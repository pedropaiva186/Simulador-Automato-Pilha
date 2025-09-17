#ifndef Leitor_H
#define Leitor_H

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <unordered_set>
#include <stack>
#include "json.hpp"
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