#include<stdio.h>
#define p printf
#define s scanf
int main(void)
{
    int num1, num2, suma, res;

    //holaa//
    p("ingrese un valor: ");
    s("%d", &num1);
    p("ingrese otro valor: ");
    s("%d", &num2);

    suma = num1 + num2;
    p("sum) %d + %d = %d    ", num1, num2, suma);

    res = num1 - num2;
    p("resta) %d - %d = %d", num1, num2, res);
    return 0;
}