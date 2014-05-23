#include<stdio.h>

int Pow(int,int);
int Sqr(int);
int Sum(int);
int SumLoop(int);
int Fac(int);
int FacLoop(int);
int Fib(int);

int main()
{
    int s,x,y;                        //seleccion x e y respectivamente

    do{                            //ejemplo de do while
        printf("nn Seleccione 1 opcionn"        //un "menu" las lineas de un printf pueden ser cortadas
             "-------------------------n"        //de esta forma poniendo todo entre comillas
            " 1.- Potencian"
            " 2.- Raiz Cuadradan"
            " 3.- Sumatorian"
            " 4.- Sumatoria Recursivan"
            " 5.- Factorialn"
            " 6.- Factorial Recursivon"
            " 7.- Fibonaccin"
            "n 0.- Salirn"
            "-------------------------n");        //recien aca cerramos la funcion 
        do{                        //otro ejemplo da vueltas mientras la seleccion sea "invalida"
            printf(" Seleccion: ");    
            scanf("%d",&s);
        }while(s<0||s>7);                //la seleccion tiene que estar entre 0 y 7

        if(!s)                        // ! es negacion, en este kaso si s es 0
            break;                    // sale del loop principal
        
        printf("Ingrese x: ");                //ingreso de datos
        scanf("%d",&x);
    
        if(s==1){                    //si es potencia pide el exponente :D
            printf("Ingrese y: ");
            scanf("%d",&y);
        }

        printf("n");                    //una linea en blanco loca

        switch(s){                    // :O? otra funcion de seleccion switch ejecuta desde 
            case 1: printf("%d elevado a %d es: %dn",x,y,Pow(x,y));    //el primer caso verdadero
                break;                            //hasta ke termina
            case 2: printf("La raiz cuadrada de %d es: %dn",x,Sqr(x));    //o encuentra un break
                break;                            //por lo general en seleccion
            case 3: printf("La sumatoria de %d es: %dn",x,Sum(x));        //multiple se usa un break por
                break;                            //linea como aca
            case 4: printf("La sumatoria de %d es: %dn",x,SumLoop(x));    //los case solo verifican
                break;                            // igualdad
            case 5: printf("El factorial de %d es: %dn",x,Fac(x));        //case 5 es lo mismo que
                break;                            //if(n==5)
            case 6: printf("El factorial de %d es: %dn",x,FacLoop(x));    //si sako los break se ejecutari
                break;                            //dede la seleecion en adelane
            case 7: printf("El %dº numero Fibonacci es: %dn",x,Fib(x));    //util par agrupar onda de
                break;                            //1 a 3 has esto de 4 a 5 otro
            default: break;                            //caso especial este se activa    
        }                                    //en caso de que s sea distinto
                                            //de todas las anteriores
    }while(s); //mientras s sea verdadero osea distinto de 0        

    return 0;
}

int Pow(int x,int y)        //potencia
{
    int i,r;

    for(i=1,r=x;i<y;i++)    //ejemplo de un for normal con dole inialisacion :D
        r*=x;        //esto es lo mismo que r=r*x; (como abreviar)
    return r;
}

int Sqr(int x)            //raiz cuadrada PERFECTA no saka rraises de numero que no sean cuadrados perfectos
{
    int i;

    for(i=1;i<x;i++){
        if(i*i==x)        //for normal e if normal
            return i;    //return cumple doble funcion de break y return
    }
    
    return 0;            // caso default no la encontro o no existe
}

int Sum(int x)                //sumatoria recursiva D:?
{
    if(x>1)                //esta funcion se llama a si misma para dar un resultado
        return Sum(x-1)+x;    //esta funcion va de atras para adelante
    return x;            //este es el caso base sin el esto seria infinito :(
}

int SumLoop(int x)            //sumatoria "normal"
{
    int i,r;

    for(i=1,r=1;i<x;i++,r+=i);    //un for "extraño" todo sucede en el for D:

    return r;
}


int Fac(int x)                //factorial recursivo
{
    if(x>1)                // igual ke arriba recursividad
        return Fac(x-1)*x;    //la recursividad es buena para ahorrar codigo pero mala para la memoria xD
    return 1;            //caso base 1 si fuera 0 siempre daria sero (multiplicacion
}

int FacLoop(int x)            //factorial normal
{
    int i,r=1;

    for(i=1;i<=x;i++)        //for normal :D
        r*=i;            //lo mismo ke arriba abreviacion :D

    return r;
}

int Fib(int n)                //fibonnaci recursvivo
{
    if(n>1)                //si n es mayor a 1...
        return Fib(n-1)+Fib(n-2);    //DOBLEMENTE RECURSIVO si la recursividad aun no te afecta
    return n;                //este es el momento XD, (caso base n (0 y 1)
}
