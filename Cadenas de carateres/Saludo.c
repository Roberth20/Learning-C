#include <stdio.h>
#include <string.h>

void main(){
    char nombre[20], apellido[20];

    printf("Ingrese su nombre: \t");
    fgets(nombre, 20, stdin);
    nombre[strlen(nombre) - 1] = 0;
    printf("Ingrese su apellido: \t");
    fgets(apellido, 20, stdin);
    apellido[strlen(apellido) - 1] = 0;

    printf("Bienvenid@ %s %s\n", nombre, apellido);
}