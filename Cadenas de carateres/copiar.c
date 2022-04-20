#include <stdio.h>
#include <string.h>
#define n 100

void main(){
    char c1[n]={}, c2[n]={};

    printf("Ingrese una cadena:\t");
    fgets(c1, n, stdin);

    printf("Metodo con strcpy\n");
    strcpy(c2, c1);
    printf("Cadena destino %s", c2);

    printf("Metodo manual\n");
    for (int i = 0; i < strlen(c1); i++){
        c2[i] = c1[i];
    }
    printf("Cadena destino %s", c2);
}