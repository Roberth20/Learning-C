#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float menorFloat(float vec[], int n){
    float m = 999999;
    
    for (int i = 0; i < n; i++){
        if (vec[i] < m){
            m = vec[i];
        }
    }
    
    return m;
}

int main(){
    srand(time(NULL));
    float v[5];
    
    for (int i = 0; i < 5; i++){
        v[i] = (rand() % 11) + 0.5;
        printf("%f\t", v[i]);
    }
    printf("\n El menor del vector es %f", menorFloat(v, 5));
    
    
   
}
