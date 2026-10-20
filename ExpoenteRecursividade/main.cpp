#include <stdio.h>

int potencia(int base, int expoente){
	if(expoente==0){
		return 1;
	}
	
	return base * potencia(base,expoente-1);
}

int main(){
	int res;
	res = potencia(10,2);
	
	printf("======================\n");
	printf("Resultado da Pontencia\n");
	printf("======================\n");
	printf("Resultado da Exponenciacao: %d",res);
	
	return 0;
}