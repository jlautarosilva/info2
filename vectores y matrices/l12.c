#include <stdio.h>
#include <stdlib.h>      // AGREGUE ESTO PARA LA DEFINICION DE atof() 

//
// leccion 11 
// MATRICES y ARGUMENTOS EN LA LINEA DE COMANDO. 
//
// Invocar esta leccion como l11 -27.0000 3.14159

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

	// se imprime argv[i] 
	int i;
	double a,b,c;
	if (argc == 4) {
		// aqui se convierte string a double.
		a=atof(argv[1]);
		b=atof(argv[2]);
		c=atof(argv[3]);
	}
	
	printf("%lf %lf %lf\n",a,b,c);

	// Listo!
	return(0);
}
