#include <stdio.h>
#include <stdlib.h>
#include "PilhaComPonteiro.h"

void inicPilha (struct TipoPilha *p){
	p->topo = NULL;
	p->base = NULL;
}

int pilhaVazia(struct TipoPilha *p){
	if(p->topo == NULL){
		return 1;
	}else{
		return 0;
	}
}

//push
int empilhar(struct TipoPilha *p, int numero){
	TElemento *novo = (TElemento *)malloc(sizeof(TElemento));
	novo->valor = numero;
	if(pilhaVazia(p)){
		p->topo = novo;
		p->base = novo;
		p->topo->abaixo = NULL;
	}else{
		p->topo->acima = novo;
		novo->abaixo = p->topo;
		p->topo = novo;
	}
	return p->topo->valor;
}
//pop
int desempilhar (struct TipoPilha *p){
	TElemento *aux = NULL;
	int valor;
	if(!pilhaVazia(p)){
		aux = p->topo;
		p->topo = p->topo->abaixo;
		if(p->topo == NULL){
			p->base = NULL;
		}else{
			p->topo->acima = NULL;		
		}
	}
	valor = aux->valor;
	free(aux);
	return valor;
}

int elemTopo(struct TipoPilha *p){
	int valor = -9999;
	if(pilhaVazia(p)){
		printf("Ocorreu UNDERFLOW na Pilha\n");
		exit(1);
	}else{
		valor = p->topo->valor;
	}
	return valor;
}