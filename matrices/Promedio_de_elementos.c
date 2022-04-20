#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_FILAS 100
#define MAX_COLUMNAS 100

void main(){
    srand(time(NULL));
    int M[MAX_FILAS][MAX_COLUMNAS] = {};
    int n, m;
    float s = 0;

    printf("Ingrese el numero de columnas: \t");
    scanf("%d", &m);
    printf("Ingrese el numero de filas: \t");
    scanf("%d", &n);

    printf("Su matriz aleatoria es: \n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            M[i][j] = rand() % 10;
            printf("%d\t", M[i][j]);
            s += M[i][j];
        }
        printf("\n");
    }
    printf("Y el promedio de todos sus elementos es %f\n", s/(n*m));
}