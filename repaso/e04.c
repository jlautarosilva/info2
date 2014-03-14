//gcc e04.c -lm
#include<stdio.h>
#include<math.h>
//#define PI 3.14159

int main(){
  
	float area;
	int radio;

	const float pi=3.14159;

	printf("Ingrese el radio para calcular el area\n");
	scanf("%d",&radio);

	area= pi*pow(radio,2);
	
	printf("El area de un circulo de radio %d es %f \n",radio,area);
	return 0;
}
