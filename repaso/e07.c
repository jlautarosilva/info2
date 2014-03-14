#include<stdio.h>

int main(){
	int x,y;

	printf("Ingrese el valor de X: \n");
	scanf("%d",&x);
	printf("Ingrese el valor de Y: \n");
	scanf("%d",&y);

	if(x>y){
		printf("El mayor es: %d \n", x);
	}else if(x==y){
		printf("Ambos valores son iguales\n");
	}else{
		printf("El mayor el %d \n", y);
	}

return 0;
}
