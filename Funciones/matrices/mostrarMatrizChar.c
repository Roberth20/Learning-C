#include <stdio.h>
#define N 3
#define M 4

void mostrarMatrizChar(char matriz[N][M]){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            printf("%c\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){
    char m[N][M] = {{'h', 'o', 'l', 'a'}, 
                   {'r', 'o', 'b', '-'}, 
                   {'m', 'a', 'g', 'o'}};
    
    mostrarMatrizChar(m);
}