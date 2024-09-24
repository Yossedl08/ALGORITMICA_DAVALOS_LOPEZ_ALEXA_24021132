/* Programa: nombre */
#include <conio.h>
#include <stdio.h>

int main()
{
char nombre[20];
char apellido[20];
 printf("Introduzca su nombre: ");
 scanf("%s", nombre);
 printf("Indroduzca su apellido: ");
 scanf("%S", apellido);
 printf("Hola %s %S, buenos dias.", nombre ,apellido /*, 161*/);
 getch(); /* Pausa */
 return 0;
}
