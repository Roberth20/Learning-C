#include <stdio.h>

void mostrarVecEnteros(int vec[], int largo){
    for (int i = 0; i < largo; i++){
        printf("%d\t", vec[i]);
    }
}

int main(){
    int v[5] = {1, 2, 3, 4, 5};
    
    mostrarVecEnteros(v, 5);
}
