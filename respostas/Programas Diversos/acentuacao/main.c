#include <stdio.h>
#include <locale.h>    /* Biblioteca necess�ria para uso de configura��es regionais. */

int main() {


    double numero = 1 , produto = 0 , i;
    setlocale(LC_ALL,""); // pacote de idiomas

    printf("Digite um n�mero positivo: ");
    scanf("%lf" , &numero);

    if(numero < 0)
    {
        do
        {
         printf("N�mero digitado inv�lido. Digite outro valor: ");
         scanf("%lf" , &numero);
        } while(numero < 0);
    }

    for( i = 0; produto < numero; i += 0.00000001)
    {
    produto = i * i;
    }

    printf("A raiz quadrada de %.4lf � %.4lf" , numero , i);

    return 0;
}
