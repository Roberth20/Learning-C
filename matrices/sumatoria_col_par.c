#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_ROW  100
#define MAX_COL  100

void main(){
    int M[MAX_ROW][MAX_COL] = {};
    int n = 0;
    int s = 0;
    srand(time(NULL));

    printf("Ingrese el tamano de la matriz cuadrada:\t");
    scanf("%d", &n);

    printf("Su matriz aleatoria es:\n");

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            M[i][j] = rand() % 10;
            printf("%d\t", M[i][j]);
            if ((j+1) % 2 == 0){
                s += M[i][j];
            }
        }
        printf("\n");
    }
    printf("La suma de las columnas pares es %d\n", s);
}