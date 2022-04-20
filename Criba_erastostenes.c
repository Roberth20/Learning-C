#include <stdio.h>
#define max 100

void main(){
    int numeros[98] = {};
    int primos[max] = {};

    for (int i = 0; i < 99; i++){
        numeros[i] = i + 2;
    }
    int k = 0;
    for (int j = 0; j < 99; j++){
        int n = numeros[j];
        for (int i = 0; i < 99; i++){
            if ((numeros[i] != 0 && n != 0) && (numeros[i] % n == 0)){
                numeros[i] = 0;
                if (primos[k-1] != n && n != 0){
                    primos[k] = n;
                    k++;
                }
            }
        }
    }
    for (int k = 0; k < 25; k++){
        printf("%d\n", primos[k]);
    }
}