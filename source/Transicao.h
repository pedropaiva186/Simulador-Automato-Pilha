#ifndef TRANSICAO_H
#define TRANSICAO_H

#include "Leitor.h"

class Transicao
{
    public:
        Transicao(std::string estado_origem, std::string leitura, std::string topo_pilha, std::string substituir_topo, std::string estado_destino)
        {
            this->estado_destino = estado_origem;
            this->leitura = leitura;
            this->topo_pilha = topo_pilha;
            this->substituir_topo = substituir_topo;
            this->estado_destino = estado_destino;
        }

    private:
        std::string estado_origem;
        std::string leitura;
        std::string topo_pilha;
        std::string substituir_topo;
        std::string estado_destino;
};

#endif