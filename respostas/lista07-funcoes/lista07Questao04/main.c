/*
 2 - Fa�a uma fun��o para verificar se um n�mero � um quadrado perfeito.
 * Um quadrado perfeito � um n�mero inteiro n�o negativo que pode ser expresso como o quadrado de outro n�mero inteiro.
 * Ex: 1, 4, 9...
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void quadradoPerfeito(float numero) {
    int i = 1, produto = 1;
    for (i = 1; produto < numero; i++) {
        produto = i * i;
    }

    if (produto == numero) {
        printf("O n�mero � quadrado perfeito.");

    } else {
        printf("O n�mero n�o � quadrado perfeito.");

        }



}

/*
 *
 */
int main() {
    float numero;

    printf("Digite um n�mero");
    scanf("%f", &numero);



    quadradoPerfeito(numero);




    return (EXIT_SUCCESS);
}

