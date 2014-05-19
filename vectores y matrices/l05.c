#include <stdio.h>

//
// MATRICES. leccion 5
// (Matrices estaticas)
//

int M[10][10];

int main(void) {

	int i,j;

	// inicializamos la matriz
	for( i=0; i<10; i++ ) {
		 for( j=0; j<10; j++ ) {
		 	  M[i][j]=i+j;
	}}
	
	// mostramos la matriz:
	for( i=0; i<10; i++ ) {
		for( j=0; j<10; j++ ) {
			printf( "%2d ", M[i][j] );
		}
		printf("\n");
	}
	return(0); // Listo!
}
