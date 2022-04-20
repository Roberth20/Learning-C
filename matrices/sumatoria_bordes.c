#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_FILAS 100
#define MAX_COLUMNAS 100

void main(){
    int M[MAX_FILAS][MAX_COLUMNAS] = {};
    int n = 0;
    int s = 0;
    srand(time(NULL));

    printf("Ingrese el tamano de la matriz cuadrada: \t");
    scanf("%d", &n);

    printf("Su matriz aleatoria es: \n");
    for (int i=0; i < n; i++){
        for (int j = 0; j < n; j++){
            M[i][j] = rand() % 10;
            printf("%d\t", M[i][j]);
            if (i == 0 || i == n-1){
                s += M[i][j]; 
            }
            if ((j == 0 || j == n-1) && !(i == 0 || i == n-1)){
                s += M[i][j];
            }
        }
        printf("\n");
    }
    printf("La suma del borde es %d", s);
}