#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 9

/***

Escreva uma fun��o que aceita como par�metro um array de inteiros com N valores, e
determina o maior elemento do array e o n�mero de vezes que este elemento ocorreu
no array. Por exemplo, para um array com os seguintes elementos: 5, 2, 15, 3, 7, 15,
8, 6, 15, a fun��o deve retorna para o programa que a chamou o valor 15 e o n�mero 3
(indicando que o n�mero 15 ocorreu 3 vezes). A fun��o deve ser do tipo void.

***/

void impressaoVetor(int *vet)
{
    for (int i = 0 ; i < TAMANHO; i ++)
    printf(" %d ", vet[i]);
    printf("\n\n\n");
}

void verificaRepeticoes(int *vet)
{
    impressaoVetor(vet);

    int valorRepetidoTemporario = 0;
    int ocorrenciaValorTemporaria = 1;

    int valorRepetido = 0;
    int ocorrenciaValor = 1;


    for (int i = 0; i < TAMANHO - 1 ; i++)
    {
        for (int j = 1; j < TAMANHO; j++)
        {
            if(vet[i] == vet[j])
            {
                valorRepetidoTemporario = vet[i];
                ocorrenciaValorTemporaria++;
            }

        }

        if(ocorrenciaValorTemporaria > ocorrenciaValor)
        {
            ocorrenciaValor = ocorrenciaValorTemporaria;
            valorRepetido = vet[i];
        }

        valorRepetidoTemporario = 0;
        ocorrenciaValorTemporaria = 0;



    }


    printf("O numero que mais frenquente � o %d que ocorreu %d vez(es).\n\n", valorRepetido , ocorrenciaValor);
}


int main()
{

    int vetor[TAMANHO] = {5, 2, 15, 3, 7, 15, 8, 6, 15};

    verificaRepeticoes(vetor);

    return 0;
}
