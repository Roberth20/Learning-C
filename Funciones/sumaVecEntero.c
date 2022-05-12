#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sumaVecEntero(int vec[], int n){
    int s = 0;
    
    for (int i = 0; i < n; i++){
        s += vec[i];
    }
    
    return s;
}

int main(){
    srand(time(NULL));
    int v[5];
    
    for (int i = 0; i < 5; i++){
        v[i] = (rand() % 11);
        printf("%d\t", v[i]);
    }
    printf("\n La suma del vector es %d", sumaVecEntero(v, 5));
    
    
   
}
