#include <stdio.h>

void insertionSort(int* v, int n){
	int j,aux,i=0;
	for(j=1;j<n;j++){
		aux = v[j];
		i = j-1;
		// i >= 0 : desloca para esquerda
		// no maximo chega na primeira pos
		// v[i]>aux : compara os elementos
		// determina o local correto para inserir
		while((i >= 0) && (v[i]>aux)){
			v[i+1] = v[i];
			// desloca para a esquerda o
			// contador até achar a posicao correta
			i--;
		}
		// insere elemento na pos vazia
		v[i+1]=aux;
		
	}
}




int main(){
	int v[8]={4,3,6,7,9,10,5,8};
	insertionSort(v,8);
	
	int i;
	printf("===== Vetor ordenado ===== \n");
	for(i=0;i<8;i++){
		printf("%d ",v[i]);
	}
	
	return 0;
}