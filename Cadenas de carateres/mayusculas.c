#include <stdio.h>
#include <string.h>
#define l 100

void main(){
    char frase[l] = {};

    printf("Ingrese una frase:\t");
    fgets(frase, l, stdin);

    for (int i = 0; i < strlen(frase); i++){
        if (frase[i] < 123 && frase[i] > 96){
            frase[i] = frase[i] - 32;
        }
    }
    printf("La frase en mayusculas es %s", frase);
}