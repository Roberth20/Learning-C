#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    srand(time(NULL));
    int M[3][5] = {};

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            M[i][j] = rand() % 10;
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }
}