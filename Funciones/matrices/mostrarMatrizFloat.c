#include <stdio.h>
#define N 3
#define M 4

void mostrarMatrizFloat(float matriz[N][M]){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            printf("%f\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){
    float m[N][M] = {{1, 2, 3, 4}, 
                   {5, 6, 7, 8}, 
                   {9, 10, 11, 12}};
    
    mostrarMatrizFloat(m);
}