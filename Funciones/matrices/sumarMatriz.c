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

void sumarMatriz(int m1[N][M], int m2[N][M], int result[N][M]){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            result[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

int main(){
    srand(time(NULL));
    int m1[N][M], m2[N][M], m3[N][M];
    
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            m1[i][j] = azar(1, 9);
            m2[i][j] = azar(1, 9);
            m3[i][j] = azar(1, 9);
        }
    }

    sumarMatriz(m1, m2, m3);

    mostrarMatrizEnteros(m1);
    printf("\n");
    mostrarMatrizEnteros(m2);
    printf("\n");
    mostrarMatrizEnteros(m3);
}