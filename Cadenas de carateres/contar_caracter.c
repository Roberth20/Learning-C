#include <stdio.h>
#include <string.h>
#define n 50

void main(){
    char c[n] = {};
    int m = 0;

    printf("Ingrese una cadena de caracteres:\t");
    fgets(c, n, stdin);
    c[strlen(c) -1] = 0;

    for (int i = 0; i < strlen(c); i++){
        if (c[i] == 'a'){
            m++;
        }
    }
    printf("En la cadena %s se encuentran %d a's\n", c, m);
}