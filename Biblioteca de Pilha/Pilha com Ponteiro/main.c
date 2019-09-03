#include <stdio.h>
#include <stdlib.h>
#include "PilhaComPonteiro.h"

int main(){
	Tpilha pilha;
	inicPilha(&pilha);
    int num;
    num = 10;
    while(num > 0){
		empilhar(&pilha,(num%2));
		num/=2;
	}
	while(!pilhaVazia(&pilha)){
		printf("%d", desempilhar(&pilha));
	}
    return 0;
}