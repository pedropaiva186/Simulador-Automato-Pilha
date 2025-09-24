#ifndef AUTOMATO_H
#define AUTOMATO_H

#include "Leitor.h"
#include "Transicao.h"

class Automato
{
    public:
        Automato(std::unordered_set<std::string> estados, std::unordered_set<std::string> alfabeto_entrada, std::unordered_set<std::string> alfabeto_pilha, std::string estado_inicial, std::unordered_set<std::string> estados_finais, std::vector<Transicao> transicoes)
        {
            this->estados = estados;
            this->alfabeto_entrada = alfabeto_entrada;
            this->alfabeto_pilha = alfabeto_pilha;
            this->estado_inicial = estado_inicial;
            this->estados_finais = estados_finais;
            this->transicoes = transicoes;
            pilha = std::stack<std::string>();
        }

    private:
        std::unordered_set<std::string> estados;
        std::unordered_set<std::string> alfabeto_entrada;
        std::unordered_set<std::string> alfabeto_pilha;
        std::string estado_inicial;
        std::unordered_set<std::string> estados_finais;
        std::vector<Transicao> transicoes;
        std::stack<std::string> pilha;
};

#endif