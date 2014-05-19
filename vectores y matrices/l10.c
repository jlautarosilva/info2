#include <stdio.h>

//
// leccion 10 
// MATRICES y ARGUMENTOS EN LA LINEA DE COMANDO. 
//

// argc  (argument counter) es el numero de datos (filas)
// que viene en la lina de comandos
// argv (argument value) son los valores de los parametros.
// argv[0] es el nombre del programa
// argv[1] es el 1er argumento
// argv[2] es el 2do argumento
// etc...
// argv[argc-1] es el ultimo argumento
int main(int argc, char **argv) 
{
	// se imprime el argv[0] (nombre del programa
	// suponiendo que este argumento es de tama~no 3.
		printf("%s\n",argv[0]);

	// se imprime el argv[1] (primer argumento)
	// suponiendo que este argumento es de tama~no 3.
		printf("%s\n",argv[1]);

	// se imprime el argv[2] (segundo argumento)
	// suponiendo que este argumento es de tama~no 3.
		printf("%s\n",argv[2]);
	
	// Listo!
	return(0);
}
