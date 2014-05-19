#include <stdio.h>

int main(){
	int lista[5];
	int i,j, aux;
	//Lee un vector con 5 numeros desde el teclado
	for(i=0;i<5;i++){
		printf("Ingrese un numero: ");
		scanf("%d",&lista[i]);
	}
	
	//Ordena los numeros
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(lista[i]<lista[j]){
				aux=lista[i];
				lista[i]=lista[j];
				lista[j]=aux;
			}
		}
	}
	
	//Muestra el vector
	printf("Los numeros ordenados son\n");
	for(i=0;i<5;i++){
		printf("%d\t",lista[i]);
	}
	
	return 0;
}
