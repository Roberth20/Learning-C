#include <stdio.h>

void main(){
    char Amigos[10][10][100] = {
        {{"Roberth"}, {"Marcano"}},
        {{"Andrez"}, {"Diaz"}},
        {{"Ana"}, {"Vivas"}},
        {{"Luis"}, {"Berra"}},
        {{"Maibys"}, {"Prieto"}}
    };

        

    for (int i = 0; i < 5; i++){
        printf("%s %s\n", Amigos[i][0], Amigos[i][1]);
    }
}