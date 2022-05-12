#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int azar(int min, int max){
    return (rand() % (max - min)+1) + min;
}

int main(){
    srand(time(NULL));
    int v[5];
    
    for (int i = 0; i < 5; i++){
        v[i] = azar(2, 6);
        printf("%d\n", v[i]);
    }
}
