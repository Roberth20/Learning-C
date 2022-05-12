#include <stdio.h>
#include <string.h>

void leerCadena(char mensaje[], char cadena[], int largoMax){
    printf("%s", mensaje);
    fgets(cadena, largoMax, stdin);
    cadena[strlen(cadena) - 1] = 0;
    
}

int main(){
    char lista[10][20];
    
    for (int i = 0; i < 10; i+=2){
        leerCadena("Ingrese nombre:\t", lista[i], 20);
        leerCadena("Ingrese apellido\t", lista[i+1], 20);
    }
    for (int i = 0; i < 10; i+=2){
        printf("%s, %s\n", lista[i+1], lista[i]);
    }
}
