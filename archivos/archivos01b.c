//Creacion de un archivo de texto
#include<stdio.h>

int main(){

	FILE *file; //Declaracion de la variable que contendra el archivo
	char entrada;
	//Creacion del archivo te texto con permiso de lectura y escritura
	file =fopen ("texto.txt","w+");

	entrada = getchar(); // lectura de un caracter del teclado
	while(entrada != '\n') {
		fputc(entrada, file); //Escritura de cada caracter en el archivo
		entrada = getchar();  // lectura de un caracter del teclado
	}
	//Cierre del archivo de texto
	close(file);

	return 0;
}
