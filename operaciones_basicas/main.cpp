#include<stdio.h>
#include<conio.h>

int main()
{
    int num1, num2, resultado;
    printf("Dame el primer numero: ");
    scanf("%d", &num1);
    printf("Dame el segundo numero: ");
    scanf("%d", &num2);
    resultado=num1+num2;
    printf("El resultado: %d ", resultado);
    resultado=num1-num2;
    printf("El resultado: %d ", resultado);
    resultado=num1*num2;
    printf("El resultado: %d ", resultado);
    resultado=num1/num2;
    printf("El resultado: %d ", resultado);
    getch();
}
