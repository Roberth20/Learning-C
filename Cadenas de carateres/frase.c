#include <stdio.h>
#include <string.h>
#define N 100

void main(){
    char frase[N]= {};

    printf("Ingrese una frase: \t");
    fgets(frase, N, stdin);

    printf("Su frase es: %s", frase);
    printf("Y tiene %d caracteres\n", strlen(frase));
}