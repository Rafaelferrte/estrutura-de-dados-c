#include <stdio.h>

void selectionSort(int* v, int n){
	// Contador e menor valor
	int i,min,aux,j;
	// Percorre até n-1
	for(i=0;i<n-1;i++){ //Marca posição para inserir menor elemento
		min=i; //pos menor elemento
		// Começa a partir do segundo elemento
		for(j=i+1;j<n;j++){
			// Compara o min com o j
			if(v[j]<v[min]){ //procura o menor elemento
				// O min recebe o j
				min=j;
			}
		}
		if(v[i] != v[min]){//Troca de posição
			aux = v[i];
			v[i] = v[min];
			v[min] = aux;
		}
	}
}

int main(){
	int v[8]={4,3,6,7,9,10,5,8};
	selectionSort(v,8);
	
	int i;
	printf("===== Vetor ordenado ===== \n");
	for(i=0;i<8;i++){
		printf("%d ",v[i]);
	}
	
	return 0;
}