
/*

3) Leia o salario de um trabalhador e o valor da presta��o de um empr�stimo.
Se a presta��o for maior que 20% do sal�rio imprima:
Empr�stimo n�o concedido, caso contrario imprima: Empr�stimo concedido.

*/



# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main() {
	float salario , prestacao , margem;

	printf("Digite o valor do salario do trabalhador:");
	scanf("%f" , &salario);


    printf("Digite o valor da prestacao:");
	scanf("%f" , &prestacao);

	margem = salario*0.2;

	if(margem >= prestacao)
    printf("Emprestimo concedido\n");

    else
    printf("Emprestimo nao concedido\nn");



	 system("PAUSE");

	return 0;

}
