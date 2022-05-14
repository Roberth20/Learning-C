#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4
#define M 4

int azar(int min, int max){
    return (rand() % (max - min +1)) + min;
}

void mostrarMatrizEnteros(int matriz[N][M]){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int sumarElementos(int m[N][M]){
    int s = 0;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            s += m[i][j];
        }
    }
    return s;
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

    mostrarMatrizEnteros(m1);
    printf("\n La suma de sus elementos es: %d\n", sumarElementos(m1));
    mostrarMatrizEnteros(m2);
    printf("\n La suma de sus elementos es: %d\n", sumarElementos(m2));
    mostrarMatrizEnteros(m3);
    printf("\n La suma de sus elementos es: %d", sumarElementos(m3));
       
}