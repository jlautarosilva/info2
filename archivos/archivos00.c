//Creacion de un archivo de texto
#include<stdio.h>

int main(){

	FILE *file; //Declaracion de la variable que contendra el archivo
	char entrada;
	//Creacion del archivo te texto con permiso de lectura y escritura
	file =fopen ("texto.txt","w+");
	fprintf(file,"%s","Esta es una forma de ingresar texto a un archivo\n");
	//Cierre del archivo
	close(file);

	return 0;
}
