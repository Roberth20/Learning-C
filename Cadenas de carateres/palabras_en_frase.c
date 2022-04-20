#include <stdio.h>
#include <string.h>
#define n 500

void main(){
    int p = 0;
    char frase[n] = {};

    printf("Ingrese una frase: \t");
    fgets(frase, n, stdin);

    for (int i = 0; i < strlen(frase); i++){
        if (frase[i] == ' ' || frase[i] == '\n'){
            p++;
        }
    }
    printf("La frase %s tiene %d palabras", frase, p);
}
