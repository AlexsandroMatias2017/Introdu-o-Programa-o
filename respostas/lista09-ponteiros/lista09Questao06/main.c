#include <stdio.h>
#include <stdlib.h>

//6. Elaborar um programa que leia dois valores inteiros (A e B). Em seguida fa�a uma fun��o
//que retorne a soma do dobro dos dois numeros lidos. A fun��o dever� armazenar o dobro
//de A na propria vari�vel A e o dobro de B na propria vari�vel B.

int DobraDasoma(int *a , int *b)
{
   return 2 * (*a + *b);

}



int main()
{
    int primeiro , segundo;
    printf("Digite o primeiro numero: ");
    scanf("%d" , &primeiro);

    printf("Digite o segundo numero: ");
    scanf("%d" , &segundo);

    int soma = DobraDasoma(&primeiro , &segundo);

    printf("O dobro da soma dos dois numeros: %d" , soma);


    return 0;
}
