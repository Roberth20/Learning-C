#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float sumaVecFloat(float vec[], int n){
    float s = 0;
    
    for (int i = 0; i < n; i++){
        s += vec[i];
    }
    
    return s;
}

int main(){
    srand(time(NULL));
    float v[5];
    
    for (int i = 0; i < 5; i++){
        v[i] = (rand() % 11) + 0.25;
        printf("%f\t", v[i]);
    }
    printf("\n La suma del vector es %f", sumaVecFloat(v, 5));
    
    
   
}
