#include <stdio.h>

int multiplica(int a,int b){
	if(a==1){
		return b;
	}
	
	return b + multiplica(a-1,b);
}

int main(){
	int a=4,b=3,resul;
	resul = multiplica(a,b);
	printf("%d * %d = %d",a,b,resul);
	
	return 0;
}