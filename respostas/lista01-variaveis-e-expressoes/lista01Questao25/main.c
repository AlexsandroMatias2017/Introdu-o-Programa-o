#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

01.25 - Leia um valor de �rea em acres e  apresente-o convertido em m�. A
f�rmula de convers�ao �:

M = A * 4048,58

M -> �rea em metros quadrados
A -> �rea em acres.

*/



int main()
{
    setlocale(LC_ALL , "");

    float acres , metrosQuadrados;

    printf("Informe um valor de �rea em acres: ");
    scanf("%f" , &acres);

    metrosQuadrados = acres* 4048.58;

    printf("%.2f acres = %f m�" , acres , metrosQuadrados);



    return 0;
}
