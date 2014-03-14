#include<stdio.h>

int main(void){
	int alumnos, profesores, personas;
	printf("Ingrese la cantidad de alumnos en la sala:\n");
	scanf("%d",&alumnos);

	printf("Ingrese la cantidad de profesores:\n");
	scanf("%d",&profesores);
	
	//Operadores matematicos
	personas = alumnos+profesores;
	
	printf("Hay %d personas en esta sala\n", personas);

	return(0);
}
