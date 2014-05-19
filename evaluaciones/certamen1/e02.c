//Ejecicio 2
/* Cree un algoritmo para representar la siguiente matriz de 10*10
1 1 1 1 1 1 1 1 1 1
1 1 0 0 0 0 0 0 0 1
1 0 1 0 0 0 0 0 0 1
1 0 0 1 0 0 0 0 0 1
1 0 0 0 1 0 0 0 0 1
1 0 0 0 0 1 0 0 0 1
1 0 0 0 0 0 1 0 0 1
1 0 0 0 0 0 0 1 0 1
1 0 0 0 0 0 0 0 1 1
1 1 1 1 1 1 1 1 1 1
*/

#include <stdio.h>

int main(){
	
	//Declaracion matriz e indices 0.2
	int matriz[10][10];
	int i,j;
	
	for (i=0; i<10; i++){
		for(j=0;j<10;j++){
			//Condiciones 1
			if(i==0 || i==9 || j==0 || j==9 || i==j)
				matriz[i][j]=1;
			else
				matriz[i][j]=0;
			//Inpresion de matriz 0.3
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
}
//Total 1.5
