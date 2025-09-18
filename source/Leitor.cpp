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

Automato Leitor::criarAutomato()
{
    if(file == NULL) // Caso não tenha lido o arquivo, por algum erro ou engano
    {
        std::cout << "O arquivo ainda não foi lido! Falha ao criar o autômato!" << std::endl;
        throw std::runtime_error("Não foi possível criar o autômato");
    }

    // Recolhendo os dados dispostos no arquivo de forma fácil
    std::unordered_set<std::string> estados(file["estados"].begin(), file["estados"].end());
    std::unordered_set<std::string> alfabeto_entrada(file["alfabeto_entrada"].begin(), file["alfabeto_entrada"].end()); 
    std::unordered_set<std::string> alfabeto_pilha(file["alfabeto_pilha"].begin(), file["alfabeto_pilha"].end()); 
    std::string estado_inicial = file["estado_inicial"];
    std::unordered_set<std::string> estados_finais(file["estados_finais"].begin(), file["estados_finais"].end());

    // Criando a estrutura que armazenará as transições
    std::vector<Transicoes> transicoes;

    // Recolhendo as informações das transições
    for(auto transicao : file["transicoes"])
    {
        
    }

    // Criando o autômato que será retornado
    Automato automato = Automato(estados, alfabeto_entrada, alfabeto_pilha, estado_inicial, estados_finais, transicoes);

    return automato;
}