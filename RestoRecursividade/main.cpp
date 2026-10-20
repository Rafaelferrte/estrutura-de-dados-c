#include <stdio.h>

int resto(int a,int b){
	if(a < b){
		return a;
	}
	
	return resto(a-b,b);
}

int main(){
	int res;
	res = resto(10,3);
	
	printf("==========================\n");
	printf("           Resto          \n");
	printf("==========================\n");
	printf("Resto: %d",res);
	
	return 0;
}