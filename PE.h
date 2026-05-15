#ifndef PE_H
#define PE_H

#include "info.h"

#define MAX 100

typedef struct {
    info_t v[MAX];
    int topo;
} Pilha;

Pilha *cria_pilha();
int pilha_vazia(Pilha *p);
void push(Pilha *p, info_t dado);
info_t pop(Pilha *p);
void libera_pilha(Pilha *p);

#endif
