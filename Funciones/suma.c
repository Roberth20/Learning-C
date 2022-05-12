#include <stdio.h>

int suma(int a, int b, int c){
    return a + b + c;
}

int main(){
    int a = suma(2, 3, 4);
    int b = suma(3, 4, 5);
    int c = suma(-2, -1, -3);
    
    printf("2 + 3 + 4 = %d\n", a);
    printf("3 + 4 + 5 = %d\n", b);
    printf("- 2 - 1 - 3 = %d\n", c);
    printf("%d + %d - %d = %d", a, b, c, suma(a, b, c));
    
}
