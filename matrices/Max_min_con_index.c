#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_FILAS 100
#define MAX_COLUMNAS 100

void main(){
    srand(time(NULL));
    int M[MAX_FILAS][MAX_COLUMNAS] = {};
    int n, m;
    int min = 9999, max = -9999;
    int min_i[2], max_i[2];

    printf("Ingrese el numero de columnas: \t");
    scanf("%d", &m);
    printf("Ingrese el numero de filas: \t");
    scanf("%d", &n);

    printf("Su matriz aleatoria es: \n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            M[i][j] = rand() % 10;
            printf("%d\t", M[i][j]);
            if (M[i][j] < min){
                min = M[i][j];
                min_i[0] = i; min_i[1] = j;
            }
            if (M[i][j] > max){
                max = M[i][j];
                max_i[0] = i; max_i[1] = j;
            }
        }
        printf("\n");
    }
    printf("El numero mayor es %d en la fila %d y columna %d\n", max, max_i[0], max_i[1]);
    printf("El numero menor es %d en la fila %d y columna %d\n", min, min_i[0], min_i[1]);
}