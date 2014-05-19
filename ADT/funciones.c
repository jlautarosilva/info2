void menu(){
    float a, b, res;
    int opcion;
    
    while(opcion != 0){
        printf("Ingrese el primer valor: ");
        scanf("%f", &a);
        printf("Ingrese el segundo valor: ");
        scanf("%f",&b);
        printf("\n1.- Sumar \n2.- Restar \n3.- Multiplicar \n4.- Dividir \n0.- Salir");
        scanf("%d",&opcion);
        
        switch(opcion){
            case 1: res = sumar(a,b);
                    printf("%d + %d = %d\n",a,b,res);
                    break;
            case 2: res = restar(a,b);
                    printf("%d - %d = %d\n",a,b,res);
                    break;
            case 3: res = multiplicar(a,b);
                    printf("%d * %d = %d\n",a,b,res);
                    break;
            case 4: res = dividir(a,b);
                    printf("%d / %d = %d\n",a,b,res);
                    break;
            default: printf("opcion invalida");
                    break;
    
        }
    } 
}

int suma(int x, int y){
    int z;
    z=x+y;
    return z;
}

int resta(int x, int y){
    int z;
    z = x-y;
    return z;
}

int multiplicar(int x, int y){
    int z;
    z = x*y;
    return z;
}

float dividir(int x, int y){
    int z;
    z = x/y;
    return z;
}
