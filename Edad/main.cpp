#include <stdio.h>
#include<conio.h>

int main()
{

int fechan, edad;
char nom [20];

    printf("Dame tu nombre: ");
    scanf("%S", &nom);
    printf("Dame tu fecha de nacimiento: ");
    scanf("%d", &fechan);
    edad = 2024 - fechan;
    printf("Hola %S, tu edad es %d", nom, edad);
    return 0;

}
