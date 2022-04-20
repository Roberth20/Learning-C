#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    srand(time(NULL));
    int M[3][4] = {};
    int v1[4], v2[4], v3[4];

    printf("Su matriz aleatoria es: \n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            M[i][j] = rand() % 10;
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }
    printf("Con vectores: \n");
    for (int i = 0; i < 3; i++){
        if (i == 0){
            printf("[");
            for (int j=0; j < 4; j++){
                v1[j] = M[i][j];
                printf(" %d ", v1[j]);
            }
            printf("]\n");
        }
        if (i == 1){
            printf("[");
            for (int j=0; j < 4; j++){
                v2[j] = M[i][j];
                printf(" %d ", v2[j]);
            }
            printf("]\n");
        }
        if (i == 2){
            printf("[");
            for (int j=0; j < 4; j++){
                v3[j] = M[i][j];
                printf(" %d ", v3[j]);
            }
            printf("]\n");
        }
    }   
}