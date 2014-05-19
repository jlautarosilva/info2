#include <stdio.h>
#include <stdlib.h>

//
// MATRICES. leccion 8
// (Matrices dinamicas)
//

int **M; 

int main(void) 
{

	int i,j;

	// Se pide la fila de arreglo de punteros
	M=(int **)malloc(10*sizeof(int *));

	// ahora pedimos cada columna
	
	for( i=0; i<10; i++ ) {
		M[i]=(int *)malloc(10*sizeof(int));
	}

	// inicializamos
	for( i=0; i<10; i++ ) {
		for( j=0; j<10; j++ ) {
			M[i][j]=i+j;
		}
	}
	
	// mostramos
	for( i=0; i<10; i++ ) {
		for( j=0; j<10; j++ ) {
			printf("%02d ",M[i][j]);
		}
		printf("\n");
	}

	// Listo!
	return(0);
}
