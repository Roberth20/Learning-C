#include <stdio.h>
#include <string.h>
#define l 50

void main(){
    char c = ' ', s[l] = {};
    int index[l] = {-1}, j=0;

    printf("Ingrese una cadena:\t"); 
    fgets(s, l, stdin);
    printf("Ingrese un caracter para buscar:\t");
    scanf("%c", &c);

    for (int i = 0; i < strlen(s); i++){
        if (s[i] == c){
            index[j] = i+1;
            j++;
        }
    }

    if (index[0] != -1){
        printf("El caracter %c se encuentra en la cadena.\n", c);
        printf("Con posiciones ");
        for(int i = 0; i < strlen(s) && index[i] != 0; i++){
            printf("%d ", index[i] - 1);
        }
    }
}