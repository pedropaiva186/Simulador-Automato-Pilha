#include "Leitor.h"

void Leitor::lerJson(std::string path)
{
    std::ifstream f(path);

    if(!f)
    {
        std::cout << "Não foi possível abrir o arquivo!" << std::endl;
        return;
    }

    f >> file;
    std::cout << "Sucesso ao abrir o arquivo!" << std::endl;
}

Automato Leitor::criarAutomato()
{
    if(file.is_null())
    {
        std::cout << "O arquivo ainda não foi lido! Falha ao criar o autômato!" << std::endl;
        throw std::runtime_error("Não foi possível criar o autômato");
    }

    std::unordered_set<std::string> estados(file["estados"].begin(), file["estados"].end());
    std::unordered_set<std::string> alfabeto_entrada(file["alfabeto_entrada"].begin(), file["alfabeto_entrada"].end()); 
    std::unordered_set<std::string> alfabeto_pilha(file["alfabeto_pilha"].begin(), file["alfabeto_pilha"].end()); 
    std::string estado_inicial = file["estado_inicial"];
    std::unordered_set<std::string> estados_finais(file["estados_finais"].begin(), file["estados_finais"].end());

    std::vector<Transicao> transicoes;

    for(auto& transicao : file["transicoes"])
    {
        std::string estado_origem = transicao["estado_origem"];
        std::string leitura = transicao["leitura"];
        std::string topo_pilha = transicao["topo_pilha"];
        std::string substituir_topo = transicao["substituir_topo"];
        std::string estado_destino = transicao["estado_destino"];

        transicoes.emplace_back(Transicao(estado_origem, leitura, topo_pilha, substituir_topo, estado_destino));
    }

    return Automato(estados, alfabeto_entrada, alfabeto_pilha, estado_inicial, estados_finais, transicoes);
}