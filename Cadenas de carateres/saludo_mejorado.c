#include <stdio.h>
#include <string.h>
#define c 20

void main(){
    char nombre[c] = {0}, apellido[c] = {0}, s=' ';
    
    printf("Ingrese su nombre:\t");
    fgets(nombre, c, stdin);
    printf("Ingrese su apellido: \t");
    fgets(apellido, c, stdin);
    printf("Ingrese su genero:\t");
    scanf("%c", &s);

    nombre[strlen(nombre) - 1] = 0;
    apellido[strlen(apellido) - 1] = 0;

    if (s == 'M' || s == 'm'){
        printf("Bienvenido Sr. %s %s", nombre, apellido);
    }
    else if (s == 'F' || s == 'f'){
        printf("Bienvenida Sra. %s %s", nombre, apellido);
    }
    else {
        printf("El genero ingresado no es valido, intente de nuevo.");
        main();
    }
}