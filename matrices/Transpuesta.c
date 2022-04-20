#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_ROW  100
#define MAX_COL  100

void main(){
    int M1[MAX_ROW][MAX_COL] = {};
    int MT[MAX_ROW][MAX_COL] = {};
    int n = 0;
    srand(time(NULL));

    printf("Ingrese el tamano de la matriz cuadrada:\t");
    scanf("%d", &n);

    printf("Sus matrices aleatorias son:\n");

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            M1[i][j] = rand() % 10;
            printf("%d\t", M1[i][j]);
        }
        printf("\n");
    }
    printf("La transpuesta es:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            MT[i][j] = M1[j][i];
            printf("%d\t", MT[i][j]);
        }
        printf("\n");
    }
}