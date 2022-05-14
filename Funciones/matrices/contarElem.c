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

int contarElem(int m[N][M], int buscar){
    int s = 0;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            if (buscar == m[i][j]){
                s++;
            }
        }
    }
    return s;
}

int leerEntero(char mensaje[]){
    int i;
    printf("%s\t", mensaje);
    scanf("%d",&i);

    return i;
}

int main(){
    srand(time(NULL));
    int m[N][M], n = 0;
    
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            m[i][j] = azar(1, 9);
        }
    }

    n = leerEntero("Ingrese el numero para buscar:");

    mostrarMatrizEnteros(m);

    printf("\n El elemento %d se repite %d veces", n, contarElem(m, n));
}