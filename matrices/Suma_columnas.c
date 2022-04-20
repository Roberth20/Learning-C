#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    srand(time(NULL));
    int M[4][3] = {};
    int v[4];
    int tmp = 0;

    printf("Su matriz aleatoria es: \n");
    for (int i = 0; i < 4; i++){
        tmp = 0;
        for (int j = 0; j < 3; j++){
            M[i][j] = rand() % 10;
            printf("%d\t", M[i][j]);
            tmp += M[i][j];
        }
        v[i] = tmp;
        printf(" = \t %d", v[i]);
        printf("\n");
    }   
}