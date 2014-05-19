#include <stdio.h>

// ARREGLOS.
//
// Los arreglos, o listas de datos son muy importantes en C.
// En este programa revisaremos algo de esto.
// Lo primero es ver que como declarar un arreglo (de nombre 
// "lista") de numeros enteros (tipo "int") de  tama~no 10 (fijo) 
// con la instruccion: 

int Lista1[10];

// O un arreglo de datos de punto flotante  de doble precision llamado
// "Arreglo1" y de tama~no 10 con la instruccion:

double Arreglo1[10];

// En el ejmplo de a continuacion el programa usara estos elementos.

int main(void) {

	// Para acceder al contenido de un arreglo se usa el operador [] 
	// como por ejemplo en:   
	//
	// Lista1[3]=-10;
	//
	// IMPORTANTE: los indices de los arreglos empiezan en 0. De acuerdo
	// a esto los elementos del arreglo Lista1 son:
	//
	// 	Lista1[0]
	// 	Lista1[1]
	// 	Lista1[2]
	// 	Lista1[3]
	// 	Lista1[4]
	// 	Lista1[5]
	// 	Lista1[6]
	// 	Lista1[7]
	// 	Lista1[8]
	// 	Lista1[9]

	//	
	// Por ejemplo la instrucci'on siguiente llenara el arreglo
	// Lista1 con los digitos del 1 al 10.
	int i;
	
	i=0;
	while( i<=9) {
		Lista1[i]=i;
		i=i+1;
	}
	// Otra manera equivalente de hacer lo mismo es usando el ciclo for
	// y la abreviacion i++; para la instruccion i=i+1; como en:
	//
	for( i=1; i<=9; i++ ) {
		Lista1[i]=i;
	}

	// A continuacion escribimos el resultado de lo que hicimos:
	printf("Lista1\n");
	for( i=0; i<10; i++ ) {
		printf( "i=%d    Lista1 = %d\n", i, Lista1[i] );
	}

	// O podemos llenar Arreglo1 con los datos justo al reves:
	for( i=0; i<10; i++ ) {
		Arreglo1[i]=10-i;
	}
	// e imprimirlos:
	printf("Lista1 al reves\n");
	for( i=0; i<10; i++ ) {
		printf( "Arreglo1[%d] = %lf\n", i, Arreglo1[i] );
	}

	// Listo!
	return(0);	
}
