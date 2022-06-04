#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct{
    char nombre[32];
    int notas[4][2];
} notas_std;

void leerCadena(char mensaje[], char cadena[], int max_cadena){
    printf("%s", mensaje);
    fgets(cadena, max_cadena, stdin);
    
    cadena[strlen(cadena)-1] = 0;
}

void fill_data(notas_std nts[]){
    srand(time(NULL));
    
    for(int i = 0; i < 3; i++){
        leerCadena("Ingrese el nombre:\t", nts[i].nombre, 32);
        for(int j=0; j < 4; j++){
            nts[i].notas[j][0] = rand() % 11;
            nts[i].notas[j][1] = rand() % 11;
        }
    }
}

float promedio(int array[],int n){
    float s =0;
    for(int i=0; i < n; i++){
        s += array[i];
    }
    return s/n;
}

void cargar_resul(char cadena[], char resultado[]){
    for(int i = 0; i < strlen(resultado); i++){
        cadena[i] = resultado[i];
    }
    cadena[strlen(resultado)] = 0;
}

void results(notas_std notas[]){
    for(int i = 0; i < 3; i++){
        float alum_prod[4];
        char conc[4][16];
        for(int j =0; j < 4; j++){
            alum_prod[j] = promedio(notas[i].notas[j], 2);
            if (alum_prod[j] >= 7){
                cargar_resul(conc[j], "Promocionado");            
            } else if(alum_prod[j] >= 4 && alum_prod[j] < 7){
                cargar_resul(conc[j], "Regularizado");
            } else{
                cargar_resul(conc[j], "Reprobado");
            }
        }
        printf("%s: \n\n", notas[i].nombre);
        printf("A1 %s %f\t", conc[0], alum_prod[0]);
        printf("A2 %s %f\n", conc[1], alum_prod[1]);
        printf("A3 %s %f\t", conc[2], alum_prod[2]);
        printf("A4 %s %f\n\n", conc[3], alum_prod[3]);
    }
}

int main(){
    notas_std registro[3];
    
    fill_data(registro);
    results(registro);
    
}


