//Creacion de un archivo de texto
#include<stdio.h>

int main(){

	FILE *file; //Declaracion de la variable que contendra el archivo
	char entrada;
	//Creacion del archivo te texto con permiso de lectura y escritura
	file =fopen ("texto.txt","w+");

	while((entrada = getchar()) != '\n'){
		//Escritura de cada caracter en el archivo
		fputc(entrada, file);
	}
	//Cierre del archivo de texto
	close(file);

	return 0;
}
