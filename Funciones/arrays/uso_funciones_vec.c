#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void leerCadena(char mensaje[], char cadena[], int largoMax){
    printf("%s", mensaje);
    fgets(cadena, largoMax, stdin);
    cadena[strlen(cadena) - 1] = 0;
    
}

int leerEntero(char mensaje[]){
    int i;
    printf("%s\t", mensaje);
    scanf(" %d",&i);
    while (getchar() != '\n'){};

    return i;
}

float leerFloat(char mensaje[]){
    float d;
    printf("%s\t", mensaje);
    scanf(" %f",&d);
    while (getchar() != '\n'){};

    return d;
}

int mayorEntero(int vec[], int n){
    int m = -999999;
    
    for (int i = 0; i < n; i++){
        if (vec[i] > m){
            m = vec[i];
        }
    }
    
    return m;
}

float mayorFloat(float vec[], int n){
    float m = -999999;
    
    for (int i = 0; i < n; i++){
        if (vec[i] > m){
            m = vec[i];
        }
    }
    
    return m;
}

int main(){
    char arboles[5][20];
    int edad[5];
    float cir[5];

    for (int i = 0; i < 5; i++){
        leerCadena("Ingrese el nombre del arbol:\t", arboles[i], 20);
        edad[i] = leerEntero("Ingrese la edad:\t");
        cir[i] = leerFloat("Ingrese la circunferencia:\t");
    }

    float m = mayorFloat(cir, 5);
    int e = mayorEntero(edad, 5);
    for (int i = 0; i < 5; i++){
        if (cir[i] == m){
            printf("%s es el mas ancho con %d anos y %f metros de circunferencia\n"
                    ,arboles[i], edad[i], cir[i]);
        }
        if (edad[i] == e){
            printf("%s es el mas viejo con %d anos y %f metros de circunferenia\n",
            arboles[i], edad[i], cir[i]);
        }
    }
}