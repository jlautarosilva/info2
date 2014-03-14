#include<stdio.h>

int main(){
	int i= 0;
	int coleccion[5];
	printf("\tIngrese un total de 5 números\n\n");
	
	while(i<5){
		printf("Ingrese %d números mas: \n", 5-i);
		scanf("%d",&coleccion[i]);
		i++;
	}
	
	printf("Los números ingresados fueron: \n");
	
	for(i=0;i<=4;i++){
		printf("%d \t",coleccion[i]);
	}
	printf("\n");

return 0;
}
