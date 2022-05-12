#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3
#define M 4

int azar(int min, int max){
    return (rand() % (max - min)+1) + min;
}

void mostrarMatrizEnteros(int matriz[N][M]){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int mayorMatriz(int matriz[N][M]){
    int m = -99999;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            if (matriz[i][j] > m){
                m = matriz[i][j];
            }
        }
    }
    return m;
}

int main(){
    srand(time(NULL));
    int matriz[N][M];
    
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            matriz[i][j] = azar(0, 9);
        }
    }

    mostrarMatrizEnteros(matriz);
    printf("El numero mas grande de la matriz es %d", mayorMatriz(matriz));
}