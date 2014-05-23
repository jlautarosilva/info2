//Lectura de un archivo de texto
#include<stdio.h>

int main(){

	FILE *file; // Declaracion de la variable que contendra el archivo
	FILE *fileCopia;
	char letra; // Para guardar los caracteres leidos de uno en uno
	int status; // fscanf devueve un entero asociada a la lectura 

	//Se abre un archivo existente con permiso de lectura y tipo texto
	file =fopen ("texto.txt","rt");
	fileCopia =fopen ("texto_copia.txt","w+");
        do {
		status=fscanf(file,"%c",&letra); // se lee letra por letra
	        printf("%c",letra); // muestra la letra leida
	        putc(letra,fileCopia);
        } while (status != EOF);  // Si status es igual a FIN DE ARCHIVO (END OF FILE) termina

	fclose(file); //Cierre del archivo

	return 0;
}
