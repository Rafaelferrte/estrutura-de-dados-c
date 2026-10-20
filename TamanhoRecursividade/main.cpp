#include <stdio.h>

int caracteres(char str[],int indice) {
    if (str[indice] == '\0') {
        return 0;
    }

    return 1 + caracteres(str,indice+1);
}

int main(){
	int res;
	res = caracteres("string",0);
	
	printf("====== Tamanho string ======\n");
	printf("Tamanho string: %d",res);
	
	return 0;
}