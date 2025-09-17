#ifndef TRANSICOES_H
#define TRANSICOES_H

#include "Leitor.h"

// Classe responsável por simular o funcionamento das transições
class Transicoes
{
    public:
        // Construtor da classe
        Transicoes(std::string estado_origem, std::string leitura, std::string topo_pilha, std::string substituir_topo, std::string estado_destino)
        {
            this->estado_destino = estado_origem;
            this->leitura = leitura;
            this->topo_pilha = topo_pilha;
            this->substituir_topo = substituir_topo;
            this->estado_destino = estado_destino;
        }

    private:
        // Campos contendo informações referentes as transições
        std::string estado_origem;
        std::string leitura;
        std::string topo_pilha;
        std::string substituir_topo;
        std::string estado_destino;
};

#endif