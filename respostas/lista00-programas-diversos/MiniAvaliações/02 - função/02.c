
/*
2) Crie uma fun��o que verifica se um n�mero � primo e retorne 1, caso o n�mero
seja primo e 2, caso n�o.

*/

int verificaPrimo(int numero){   // Calcula primeiramente a m�dia
    int i , cont = 0 ;

      for (i = 1; numero >= i ; i++)
          if(numero % i == 0)
            cont++;

        if (cont == 2)
            return 1;
        else
            return 2;


    }


int main(){

    int numero , resultado;


    printf("digite o valor para verifica��o se eh primo:");
    scanf("%d" , &numero);

    resultado = verificaPrimo(numero);

    if( resultado == 1)
        printf("O numero eh primo");

    else
        printf("O numero nao eh primo");





    return 0;
    }
