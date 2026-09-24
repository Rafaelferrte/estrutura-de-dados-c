#include <stdio.h>

void bubbleSort(int* v, int n){
	int i,fim;
	for(fim=n-1;fim>0;fim--){
		for(i=0;i<fim;i++){
			if(v[i]>v[i+1]){
				int aux;
				aux = v[i];
				v[i] = v[i+1];
				v[i+1] = aux;
			}
		}
	}
	
}

int main(){
	int v[8]={4,3,7,6,13,5,9,2};
	
	//Ordenação crescente
	bubbleSort(v,8);
	
	for(int i=0;i<8;i++){
		printf("%d ",v[i]);
	}
	
	return 0;
}