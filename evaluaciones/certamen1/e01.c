//Ejecicio 1
/* Cree un algoritmo en C que resuelva la siguiente función
f(x) = x^3      si, x<3
f(x) = 2x+x^2   si, x=3
f(x) = x+x^1/2  si, x>3
*/
//Uso de bibliotecas y tipos de variables 0.5
#include<stdio.h>
#include<math.h>

int main(){
	int x;
	float res;
	
	//Entrada y salida de datos 0.2
	printf("Ingrese x: \n");
	scanf("%d",&x);
	
	//Algorito 0.8
	if(x < 3){
		res = pow(x,3);
	}else if (x==3){
		res = (x*2) + pow(x,2);
	}else if (x>3){
		res = x + sqrt(x);
	}
	
	printf("Sea x = %d, f(x)= %f", x, res);
	
	return 0;
}
//Total 1.5
