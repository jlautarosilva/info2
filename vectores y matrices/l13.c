#include <stdio.h>
#include <stdlib.h> // se requiere para malloc()

//
// ARREGLOS. leccion 6
// (Arreglos dinamicos)
//

int *fila;

int main(void) {

	int i,j,n;
	
	printf("Ingrese el largo de la fila:\n");
	scanf("%d",&n);
	// Se pide  memoria
	fila=(int *)malloc(n*sizeof(int));

	// inicializamos
	for( i=0; i<n; i++ ) {
		fila[i]=-3+i;
	}
	
	// mostramos 
	for( i=0; i<n; i++ ) {
		printf("%d ",fila[i]);
		printf("%d ",&fila[i]);
	}
	printf("\n");
	
	// Listo!
	return (0);
}
