#include <stdio.h>

char leerChar(char mensaje[]){
    char c;
    printf("%s\t", mensaje);
    scanf(" %c",&c);

    return c;
}

void main(){
    char car[5];
    
    for(int i = 0; i < 5; i++){
        car[i] = leerChar("Ingrese un caracter");
    }
    printf("Los caracteres guarados son:\n");
    for(int i = 0; i < 5; i++){
        printf("%c\t", car[i]);
    }
}