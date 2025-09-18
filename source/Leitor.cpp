#include "Leitor.h"

void Leitor::lerJson(std::string path)
{
    std::ifstream f(path);

    if(!f) // Caso não seja possível abrir o arquivo
    {
        std::cout << "Não foi possível abrir o arquivo!" << std::endl;
        return;
    }

    f >> file;
    std::cout << "Sucesso ao abrir o arquivo!" << std::endl;
}

Automato& Leitor::criarAutomato()
{
    if(file == NULL) // Caso não tenha lido o arquivo, por algum erro ou engano
    {
        std::cout << "O arquivo ainda não foi lido! Falha ao criar o autômato!" << std::endl;
        return;
    }

    // Recolhendo os dados dispostos no arquivo de forma fácil
    std::vector<std::string> estados = file["estados"];
    std::vector<std::string> alfabeto_entrada = file["alfabeto_entrada"]; 
    std::vector<std::string> alfabeto_pilha = file["alfabeto_pilha"]; 
    std::string estado_inicial = file["estado_inicial"];
    std::vector<std::string> estados_finais = file["estados_finais"];

    // Recolhendo as informações das transições
}