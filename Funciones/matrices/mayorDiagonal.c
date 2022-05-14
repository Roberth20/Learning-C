#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3
#define M 4

int azar(int min, int max){
    return (rand() % (max - min)+1) + min;
}

void mostrarMatrizEnteros(int matriz[N][N]){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int mayorDiagonal(int m[N][N]){
    int mayor = 0;
    for (int i = 0; i < N; i++){
        if (m[i][i] > mayor){
            mayor = m[i][i];
        }
    }
    return mayor;
}

int main(){
    srand(time(NULL));
    int m[N][N], n = 0;
    
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            m[i][j] = azar(1, 9);
        }
    }

    mostrarMatrizEnteros(m);

    printf("\n El elemento mayor de la diagonal principal es %d", mayorDiagonal(m));
}