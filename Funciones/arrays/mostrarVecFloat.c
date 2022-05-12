#include <stdio.h>

void mostrarVecFloat(float vec[], int largo){
    for (int i = 0; i < largo; i++){
        printf("%f\t", vec[i]);
    }
}

int main(){
    float v[5] = {1, 2, 3, 4, 5};
    
    mostrarVecFloat(v, 5);
}
