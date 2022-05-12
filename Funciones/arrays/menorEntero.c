#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int menorEntero(int vec[], int n){
    int m = 999999;
    
    for (int i = 0; i < n; i++){
        if (vec[i] < m){
            m = vec[i];
        }
    }
    
    return m;
}

int main(){
    srand(time(NULL));
    int v[5];
    
    for (int i = 0; i < 5; i++){
        v[i] = (rand() % 11);
        printf("%d\t", v[i]);
    }
    printf("\n El menor del vector es %d", menorEntero(v, 5));
    
    
   
}
