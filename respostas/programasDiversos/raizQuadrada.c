
/*

1) Leia um n�mero fornecido pelo usu�rio. Se esse n�mero for positivo.
calcule a raiz quadrada do n�mero. Se o n�mero for negativo, mostre uma mensagem dizendo que o n�mero � inv�lido.


*/



# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main() {
	float raiz , numero;

	printf("Digite um numero:");
	scanf("%f" , &numero);


	while(numero<0){
        printf("numero negativo. Digite outro valor\n");
        scanf("%f" , &numero);
        }

	if(numero >= 0){
        raiz = sqrtf(numero);
        printf("a raiz de %.4f eh %.4f\n" , numero , raiz);


	}

	 system("PAUSE");

	return 0;

}
