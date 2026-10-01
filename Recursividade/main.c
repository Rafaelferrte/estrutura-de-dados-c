#include <stdio.h>

int fatorial(int n){
	if(n==1 || n==0){ //caso base
		return 1; //verifica se n(0) ou n(1) e retorna 1
	}
	else{ // caso geral
		return n*fatorial(n-1);
	}
	
}

int main(){
	int n = 5,resultado;
	resultado = fatorial(n);
	printf("fatorial (%d) = %d",n,resultado);
	return 0;
}