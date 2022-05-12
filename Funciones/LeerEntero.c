#include <stdio.h>

int leerEntero(char mensaje[]){
    int i;
    printf("%s\t", mensaje);
    scanf("%d",&i);

    return i;
}

void main(){
    int ages[5];
    
    for(int i = 0; i < 5; i++){
        ages[i] = leerEntero("Ingrese la edad de un arbol");
    }
    printf("Las edades de los arboles son:\n");
    for(int i = 0; i < 5; i++){
        printf("%d\t", ages[i]);
    }
}