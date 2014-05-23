//Creacion de un archivo de texto
#include<stdio.h>

int main(){

	FILE *file; //Declaracion de la variable que contendra el archivo
	char caracter;
	//Creacion del archivo te texto con permiso de lectura y escritura
	file =fopen ("texto.txt","rt");
		while(file){
		fscanf(file,"%c",caracter);
		printf("%c",caracter);
	}
	//Cierre del archivo
	close(file);

	return 0;
}
