#include <stdio.h>
#include <math.h>

int quadrado(int a)
{
    return (a * a);
    // return pow(a,2);
}

int segunda_fun(int a, int b)
{
    return (quadrado(a) + b);
}

main()
{
    int i = 3, j = 5;
    printf("Quadrado de i = %d\n", quadrado(i));
    printf("Soma do Quadrado de i + j = %d\n", segunda_fun(i, j));
}