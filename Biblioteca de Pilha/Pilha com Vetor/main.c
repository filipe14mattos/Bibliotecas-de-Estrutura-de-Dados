#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

int main(){
    Tpilha *pilha = criarPilha(6);
    int num;
    num = 35;
    while(num > 0){
		empilhar(pilha,(num%2));
		num/=2;
	}
	while(!pilhaVazia(pilha)){
		printf("%d", desempilhar(pilha));
	}
    return 0;
}