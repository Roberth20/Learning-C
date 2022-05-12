#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int contarValorEntero(int vec[], int n, int buscar){
    int s = 0;
    
    for (int i = 0; i < n; i++){
        if (vec[i] == buscar){
            s++;
        }
    }
    
    return s;
}

int main(){
    srand(time(NULL));
    int v[5] = {1, 1, 2, 2, 2};
    
    for (int i = 0; i < 5; i++){
        printf("%d\t", v[i]);
    }
    printf("\n El numero %d se repite %d", 1, contarValorEntero(v, 5, 1));
    printf("\n El numero %d se repite %d", 2, contarValorEntero(v, 5, 2));
    printf("\n El numero %d se repite %d", 3, contarValorEntero(v, 5, 3));
    
    
   
}
