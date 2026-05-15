#include <stdio.h>
#include <stdlib.h>
#include "PE.h"

//Função que irá criar uma pilha nova.
Pilha *cria_pilha(){
    Pilha *nova = (Pilha*)malloc(sizeof(Pilha));

    if(nova == NULL){
        return 1;
    }

    nova->topo = -1;
    return nova;
}

//Função responsavel por verificar se a pilha está vazia.
int pilha_vazia(Pilha *p){
    if (p->topo == -1){
        return 1;
    }
    return 0;
}

//Função para acrescentar um novo valor(dado) para nossa pilha.
void push(Pilha *p, info_t dado){
    if(p->topo >= MAX-1){
        printf("Pilha Cheia.\n");
        return;
    }
    p->topo++;
    p->v[p->topo] = dado;
}

//Função para decrementar um valor(dado) já existente na nossa pilha.
info_t pop(Pilha *p){
    if(p->topo == -1){
        printf("Pilha Vazia.\n");
        return;
    }
    info_t aux = p->v[p->topo];
    p->topo--;
    return aux;
}

//Função para liberar a pilha quando não estiver mais em uso.
void libera_pilha(Pilha *p){
    free(p);
}
