#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

Leia um valor de �rea em metros quadrados m� e apresente-o convertido em acres. A
f�rmula de convers�ao �:

A = M * 0.000247

M -> �rea em metros quadrados
A -> �rea em acres.

*/



int main()
{
    setlocale(LC_ALL , "");

    float acres , metrosQuadrados;

    printf("Informe um valor de �rea em metros quadrados (m�): ");
    scanf("%f" , &metrosQuadrados);

    acres = metrosQuadrados * 0.000247;

    printf("%.2f m� = %f acres" , metrosQuadrados , acres);



    return 0;
}
