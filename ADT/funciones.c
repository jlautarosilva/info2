void menu(){
    int a, b, res;
    int opcion;
    
    while(opcion != 0){
        printf("\nIngrese el primer valor: ");
        scanf("%d", &a);
        printf("Ingrese el segundo valor: ");
        scanf("%d",&b);
        printf("1.- Sumar \n2.- Restar \n3.- Multiplicar \n4.- Dividir \n0.- Salir \n");
        printf("Que operacion desea realizar?: ");
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

int sumar(int x, int y){
    int z;
    z=x+y;
    return z;
}

int restar(int x, int y){
    int z;
    z = x-y;
    return z;
}

int multiplicar(int x, int y){
    int z;
    z = x*y;
    return z;
}

int dividir(int x, int y){
    int z;
    z = x/y;
    return z;
}
