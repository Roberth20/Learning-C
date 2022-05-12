#include <stdio.h>

float leerFloat(char mensaje[]){
    float d;
    printf("%s\t", mensaje);
    scanf("%f",&d);

    return d;
}

void main(){
    float diameters[5];
    
    for(int i = 0; i < 5; i++){
        diameters[i] = leerFloat("Ingrese el diametro de un arbol");
    }
    printf("Los diametros de los arboles son:\n");
    for(int i = 0; i < 5; i++){
        printf("%f\t", diameters[i]);
    }
}