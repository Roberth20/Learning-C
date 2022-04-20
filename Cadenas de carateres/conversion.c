#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define M 20

void main(){
    char s[M] = {};
    unsigned int n = 0;

    printf("Ingrese un numero entero:\t");
    fgets(s, M, stdin);
    s[strlen(s) - 1] = '\0';

    int number = 1;
    int i = 0;
    while (i < strlen(s) && number == 1){
        if (!(s[i] > 47 && s[i] < 58)){
            number = 0;
        }
        i++;
    }
    
    if (number == 0){
        printf("La cadena ingresada no corresponde a un numero entero.\n");
    }
    else{
        n = atoi(s);

        printf("El numero es %d", n);
    }
}
