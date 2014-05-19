#include <stdio.h>
#include <stdlib.h> // se requiere para malloc()

//
// MATRICES. leccion 7
// (Matrices dinamicas)
//

int **M; 

int main(void) 
{

	int i,j;
	int n;
	int cont;
	
	printf("Ingrese el largo de la matriz\n");
	scanf("%d",&n);
	// Se pide la fila de arreglo de punteros
	M=(int **)malloc(n*sizeof(int *));
	
	for(cont=0;cont<n;cont++){
		M[cont]=(int *)malloc(n*sizeof(int));
	}
	// ahora pedimos cada columna
/*	M[0]=(int *)malloc(10*sizeof(int));
	M[1]=(int *)malloc(10*sizeof(int));
	M[2]=(int *)malloc(10*sizeof(int));
	M[3]=(int *)malloc(10*sizeof(int));
	M[4]=(int *)malloc(10*sizeof(int));
	M[5]=(int *)malloc(10*sizeof(int));
	M[6]=(int *)malloc(10*sizeof(int));
	M[7]=(int *)malloc(10*sizeof(int));
	M[8]=(int *)malloc(10*sizeof(int));
	M[9]=(int *)malloc(10*sizeof(int));
*/
	// inicializamos
	for( i=0; i<n; i++ ) {
		for( j=0; j<n; j++ ) {
			M[i][j]=i+j;
		}
	}
	
	// e imprimirlos:
	for( i=0; i<n; i++ ) {
		for( j=0; j<n; j++ ) {
			printf("%02d \t",M[i][j]);
		}
		printf("\n");
	}

	// Listo!
	return(0);
}
