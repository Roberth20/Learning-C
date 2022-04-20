#include <stdio.h>
#include <string.h>
#define l 200

void main(){
    int index = 0;
    char string[l] = {' '}, result[l] = {' '};
    char c = ' ';

    printf("Escriba una cadena de texto:\t");
    fgets(string, l, stdin);
    printf("Ingrese un caracter para ingresar: \t");
    scanf("%c", &c);
    printf("Ingrese la posicion para ser ingresado: \t");
    scanf("%d", &index);

    if(index <= strlen(string) - 1){
        for (int i = 0; i < index; i++){
            result[i] = string[i];
        }
        result[index] = c;
        for (int i = index + 1; i < strlen(string); i++){
            result[i] = string[i - 1];
        }
        printf("La cadena original es %s Y la final es %s\n", string, result);
        printf("Con caracter %c en posicion %d\n", c, index);
    }
    else {
        printf("Posicion ingresada no es valida.\n");
    }
}