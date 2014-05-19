#include <stdio.h>

// ARREGLOS. leccion 2
// Tambien se puede declarar un arreglo de caracteres (los caracteres
// son los datos tales como: 'a', 'b', 'c', etc) con la instruccion:

char Algo[80];

int main(void) {

	int i;

	// Asignacion de valores
	Algo[0]='a';
	Algo[1]='b';
	Algo[2]='c';
	Algo[3]='d';

	// se muestra los valores
	for( i=0; i<4; i++ ) {
		printf( "i=%d Algo=%c\n", i, Algo[i] );
	}

	// Listo!
	return(0);	
}
