#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/*

Escreva um programa em c que receba um numero, caso este numero seja positivo
retorne a sua raiz quadrada, caso seja negativo retorne que a entrada n�o � valida

*/
int main()
{
    double numero , raiz;
    printf("Digite um n�mero");
    scanf("%lf" , &numero);


    if (numero < 0)
    {
        printf("N�mero negativo. Imposs�vel extrair raiz quadrada.");
    }
    else
    {
        raiz = sqrt(numero);
        printf("A raiz de %lf � %lf" , numero , raiz);
    }


    return 0;
}
