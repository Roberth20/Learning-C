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

int menorDiagonalSecundaria(int m[N][N]){
    int menor = 10;
    for (int i = 0; i < N; i++){
        if (m[i][N-1-i] < menor){
            menor = m[i][N-i-1];
        }
    }
    return menor;
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

    printf("\n El elemento menor de la diagonal secundaria es %d", menorDiagonalSecundaria(m));
}