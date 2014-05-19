#include <stdio.h>

// ARREGLOS. leccion 3
//
// Tambien se puede declarar un arreglo de caracteres (los caracteres
// son los datos tales como: 'a', 'b', 'c', etc) con la instruccion:

char Algo[4];

int main(void) {

	int i;

	// Asignacion 
	Algo[0]='a';
	Algo[1]='b';
	Algo[2]='c';
	Algo[3]='d';

	// e imprimirlos:
	for( i=0; i<4; i++ ) {
		printf( "i=%d Algo=%c\n", i, Algo[i] );
	}

	// Observar que para este tipo de arreglos es posible imprimir 
	// la secuencia de caracteres, simplemente usando el formato %s
	// y diciendole el nombre del arreglo a imprimir:

	printf( "Algo=%s\n", Algo );

	// Listo!
	return(0);	
}
