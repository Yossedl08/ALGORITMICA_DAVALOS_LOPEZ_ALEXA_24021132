#include <conio.h>
#include <stdio.h>

int main()
{

float prom;

    printf("Ingresa tu calificacion: ");
    scanf("%f",&prom);

    if(prom>6)
    {

        printf("Aprobado");
    }
    else
        {
        printf("Reprobaste");
    }
    getch();
}
