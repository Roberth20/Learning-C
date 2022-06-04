#include <stdio.h>

typedef struct{
    int N;
    char nombre[16];
    int camas;
    char planta[16];
} hotel;

void list_hab(hotel *hab){
    for (int i = 0; i < 5; i++){
        printf("N %d, %s, con %d camas y en la %s planta.\n", hab[i].N, hab[i].nombre, hab[i].camas, hab[i].planta);
    }
}

int leerInt(char mensaje[]){
    int n;
    
    printf("%s", mensaje);
    scanf("%d", &n);
    
    return n;
}

void mostrar_hab(hotel *hab, int num){
    printf("N %d, %s, con %d camas y en la %s planta.\n", hab[num].N, hab[num].nombre, hab[num].camas, hab[num].planta);
}

int main(){
    hotel hab[5] = {
        {1, "Azul", 2, "Primera"},
        {2, "Roja", 1, "Primera"},
        {3, "Verde", 3, "Segunda"},
        {4, "Rosa", 2, "Segunda"},
        {5, "Gris", 1, "Tercera"}
    };
    
    printf("Bienvenido, que desea hacer?\n");
    printf("Mostrar todas las habitaciones = 1\n");
    printf("Mostrar una habitacion = 2\n");
    printf("Para finalizar = 0\n");
    
    int op;
    op = leerInt("Ingrese su opcion: \t");
    
    while(op != 0){
        if(op == 1){
            list_hab(hab);
        } else if(op == 2){
            int n;
            n = leerInt("Ingrese el numero de habitacion: \t");
            if (n <= 5 && n > 0){
                mostrar_hab(hab, n-1);
            } else {
                printf("La habitacion ingresada no es valida\n");
            }
        } else {
            printf("Opcion no valida.\n");
        }
        
        op = leerInt("Ingrese su opcion: \t");    
    }
    
}


