#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_FILAS 100
#define MAX_COLUMNAS 100

void main(){
    int M[MAX_FILAS][MAX_COLUMNAS] = {};
    int n = 0;
    int s[MAX_COLUMNAS] = {};
    srand(time(NULL));

    printf("Ingrese el tamano de la matriz: \t");
    scanf("%d", &n);

    printf("Su matriz aleatoria es: \n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 2*n - 1; j++){
            if (j < n){
                M[i][j] = rand() % 10;
                printf("%d\t", M[i][j]);
            }
            else {
                M[i][j] = M[i][j - n];
            }
        }
        printf("\n");
    }
    printf("\n Las sumas de cada diagonal son :\n");
    for (int k = 0; k < n; k++){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < 2*n -1; j++){
                if (i == j){
                    s[k] += M[i][j+k];
                }
            }
        }
        printf("%d\t", s[k]);
    }
}