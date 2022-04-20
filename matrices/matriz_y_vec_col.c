#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    srand(time(NULL));
    int M[3][4] = {};
    int v1[3], v2[3], v3[3], v4[3];

    printf("Su matriz aleatoria es: \n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            M[i][j] = rand() % 10;
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }
    printf("Con vectores: \n");
    for (int j = 0; j < 4; j++){
        if (j == 0){
            printf("[");
            for (int i=0; i < 3; i++){
                v1[i] = M[i][j];
                printf(" %d ", v1[i]);
            }
            printf("]\n");
        }
        if (j == 1){
            printf("[");
            for (int i=0; i < 3; i++){
                v2[i] = M[i][j];
                printf(" %d ", v2[i]);
            }
            printf("]\n");
        }
        if (j == 2){
            printf("[");
            for (int i=0; i < 3; i++){
                v3[i] = M[i][j];
                printf(" %d ", v3[i]);
            }
            printf("]\n");
        }
        if (j == 3){
            printf("[");
            for (int i=0; i < 3; i++){
                v4[i] = M[i][j];
                printf(" %d ", v3[i]);
            }
            printf("]\n");
        }
    }   
}