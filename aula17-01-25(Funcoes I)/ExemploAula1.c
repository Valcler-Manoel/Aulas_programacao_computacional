#include <stdio.h>
#include <math.h>
#include <locale.h>

int quadrado_numero(int a){
return (a *a);
}

double delta(double b, double a){
    return (b*b) - (4*a);
}

double bhaskara(double b, double delta, double a){
    return((-b - sqrt(delta))/(2.0*a));
}

main(){
    double a,b,c,x1,x2,d;
    setlocale(LC_ALL, "PTB");
    printf("PROGRAMA PARA CALCULAR A(S) RAÍZ( DE UMA FUNÇÃO DO 2° GRAU");
    printf("\nPS: Use ',' (vírgula) como separador fracionário!\n\n ");
    printf("Digite o coficiente de a: ");
    scanf("%lf",&a);
}