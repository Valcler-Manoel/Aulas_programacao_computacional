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

int main() {
    int a, b;
    printf("Digite o primeiro numero:\n ");
    scanf("%d", &a);
    printf("Digite o segundo numero:\n ");
    scanf("%d", &b);
    printf("Quadrado do primeiro numero = %d\n", quadrado(a));
    printf("Soma do Quadrado de primeiro + o segundo numero = %d\n", segunda_fun(a, b));

    return 0;
}
