#include <stdio.h>

void mostrarVecChar(char vec[], int largo){
    for (int i = 0; i < largo; i++){
        printf("%c\t", vec[i]);
    }
}

int main(){
    char v[5] = {'a', 69, 'b', 76, 'c'};
    
    mostrarVecChar(v, 5);
}
