//Ejecicio 3
/* Cada receta de cerveza tiene un nombre y está compuesta por cierta cantidad (en gramos) de lúpulos, cebadas y una cantidad (en litros) de agua, y tiene un tiempo de maceración, fermentación, maduración.
Además, se registra una fecha exacta de creación compuesta por Dia, Mes y Año.
Cree un algoritmo en C que mediante el uso de estructuras permita ingresar por teclado hasta 8 recetas de cerveza y las muestre al usuario en pantalla.
*/

#include <stdio.h>
#include <string.h>

//Estructura fecha 0.7
typedef struct date{
	int dia;
	int mes;
	int agno;
}fecha;

//Estructura receta 1
typedef struct recepy{
	char nombre[50];
	float lupulo;
	float cebada;
	float agua;
	int maceracion;
	int fermentacion;
	int maduracion;
	fecha creacion;
}receta;

int main (){
	int i;
	//vector de estructura 1
	receta recetas[8];
	
	for (i=0; i<8;i++){
		
		//Entrada primera estructura 0.1
		printf("Ingrese el nombre: ");
		gets(recetas[i].nombre);
		//scanf("%s",&recetas[i].nombre);
		printf("Ingrese la cantidad en gramos de lupulo: ");
		scanf("%f",&recetas[i].lupulo);
		printf("Ingrese la cantidad en gramos de cebada: ");
		scanf("%f",&recetas[i].cebada);
		printf("Ingrese la cantidad en litros de agua: ");
		scanf("%f",&recetas[i].agua);
		printf("Ingrese el tiempo de maceracion (horas): ");
		scanf("%d",&recetas[i].maceracion);
		printf("Ingrese el tiempo de fermentacion (dias): ");
		scanf("%d",&recetas[i].fermentacion);
		printf("Ingrese el tiempo de maduracion (dias): ");
		scanf("%d",&recetas[i].maduracion);
		
		//Entgrada segunda estructura 0.1
		printf("Ingrese el dia de creacion: ");
		scanf("%d",&recetas[i].creacion.dia);
		printf("Ingrese el dia de creacion: ");
		scanf("%d",&recetas[i].creacion.mes);
		printf("Ingrese el dia de creacion: ");
		scanf("%d",&recetas[i].creacion.agno);
	}
	
	//Salida 0.1
	for(i=0; i<8;i++){
		printf("%d - %s \n", i+1, recetas[i].nombre);
		printf("Lupulo: %f grs. \nCebada: %f grs. \nAgua: %f lts. \n", recetas[i].lupulo, recetas[i].cebada, recetas[i].agua);
		printf("Tiempo de maceracion: %d \n",recetas[i].maceracion);
		printf("Tiempo de fermentacion: %d \n",recetas[i].fermentacion);
		printf("Tiempo de maduracion: %d \n",recetas[i].maduracion);
		printf("Creada el %d de %d de %d \n", recetas[i].creacion.dia, recetas[i].creacion.mes, recetas[i].creacion.agno);
	}
}
//Total 3
