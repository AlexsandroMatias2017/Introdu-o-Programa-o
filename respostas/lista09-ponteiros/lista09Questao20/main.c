#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 6

/**

20. Implemente uma fun��o que receba como par�metro um array de n�meros reais de
tamanho N e retorne quantos n�meros negativos h� nesse array. Essa fun��o deve
obedecer ao prot�tipo:
int negativos(float *vet, int N);



**/

int negativos(float *vet, int N)
{
    int quantidadeNegativos = 0;

    for (int i = 0; i < N; i++)
    {
        if(vet[i] < 0)
        {
            quantidadeNegativos++;
        }
    }
    return quantidadeNegativos;
}

int main()
{
    float vetor[TAMANHO] = {2 , -5 , 9 , -2,-1, -9};

    int numerosNegativos = negativos(vetor , TAMANHO);

    printf(" %d " , numerosNegativos);



    return 0;
}
