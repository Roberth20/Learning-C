#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct{
  char nombre[32];
  char tlf[32];
  int edad;
  int bool_ref;
} agenda_tlf;

void mostrar_datos(agenda_tlf agenda){
  printf ("%s \t %s \t %d \n", agenda.nombre, agenda.tlf, agenda.edad);
}

void leerCadena(char mensaje[], char cadena[], int max){
  printf ("%s", mensaje);
  fgets (cadena, max, stdin);

  cadena[strlen (cadena) - 1] = 0;
}

int leerInt(char mensaje[]){
  int n;
  printf ("%s", mensaje);
  scanf ("%d", &n);

  return n;
}

void mostrar_agenda (agenda_tlf agenda[]){
  for (int i = 0; i < 10; i++){
    if (agenda[0].bool_ref == 0){
      printf("La agenda esta vacia.\n");
      break;
    } else if(agenda[i].bool_ref == 1){
      mostrar_datos(agenda[i]);
    }
  }
}

void list_personas(agenda_tlf agenda[], char letra){
  for(int i = 0; i < 10; i++){
    if (agenda[i].nombre[0] == letra && agenda[i].bool_ref == 1){
      mostrar_datos(agenda[i]);
    }
  }
}

void fill_agenda(agenda_tlf agenda[]){
  for(int i = 0; i < 10; i++){
    if(agenda[i].bool_ref == 0){
      leerCadena("Ingrese el nombre:\t", agenda[i].nombre, 32);
      leerCadena("Ingrese el TLF.:\t", agenda[i].tlf, 32);
      agenda[i].edad = leerInt("Ingrese la edad:\t");
      agenda[i].bool_ref = 1;
      printf("Contacto agregado correctamente\n");
      break;
    }
  }
  if (agenda[9].bool_ref == 1){
    printf("Agenda llena.\n");
  }
}

int main(){
  agenda_tlf agenda[10];
  int opcion;

  for(int i = 0; i < 10; i++){
    agenda[i].bool_ref = 0;
  }
  
  printf("Bienvenid@ a la agenda\n");
  printf("Que accion desea realizar?\n");
  printf("Listar toda la agenda = 1\n");
  printf("Buscar entradas por una letra = 2\n");
  printf("Ingresar datos = 3\n");
  printf("Cerrar programa = 0\n");
  opcion = leerInt("Ingrese un una opcion:\t");
  getchar();

  while (opcion != 0){
    char l[5];
    switch (opcion){
    case 1:
      mostrar_agenda(agenda);
      break;
    case 2:
      leerCadena("Ingrese una letra en minusculas\t", l, 5);
      list_personas(agenda, l[0]);
      break;
    case 3:
      fill_agenda(agenda);
      break;
    default:
      printf("Opcion no valida\n");
    }
  

  opcion = leerInt("Ingrese un una opcion:\t");
  getchar();
  }
}
