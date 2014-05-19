#include <stdio.h>

int main(){
	int aux, lista1[5], lista2[5];
	int i,j;
	//Lee un vector con 5 numeros desde el teclado
	for(i=0;i<5;i++){
		printf("Ingrese un numero: ");
		scanf("%d",&lista1[i]);
	}
	
	//Multiplica todos los elementos *2
	//y guarda en otro vector
	for(i=0;i<5;i++){
		lista2[i]=lista1[i]*2;
	}
	
	
	//Muestra el vector
	printf("El doble de los numeros es:\n");
	for(i=0;i<5;i++){
		printf("%d\t",lista2[i]);
	}
	
	return 0;
}
