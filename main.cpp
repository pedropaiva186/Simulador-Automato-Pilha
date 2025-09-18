#include <iostream>
#include "source/Leitor.h"

int main()
{
    Leitor reader;

    // Lendo o arquivo json de entrada
    reader.lerJson("tests/exe1.json");

    Automato automato = reader.criarAutomato();

    return 0;
}