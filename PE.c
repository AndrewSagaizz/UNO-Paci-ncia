#include <stdio.h>
#include <stdlib.h>
#include "info.h"

Pilha *cria_pilha(){
    Pilha *nova = (Pilha*)malloc(sizeof(Pilha));

    if(nova == NULL){
        return 1;
    }

    nova->topo = -1;
    return nova;
}

int pilha_vazia(Pilha *p){
    if (p->topo == -1){
        return 1;
    }
    return 0;
}

void push(Pilha *p, info_t dado){

}
