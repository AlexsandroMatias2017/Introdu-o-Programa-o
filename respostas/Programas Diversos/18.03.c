
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main() {
int a, b, operacao;
printf("Informe dois n�meros inteiros positivos:");
scanf("%d%d", &a, &b);
printf("1.Adi��o\t 2.Subtra��o\t 3.Multiplica��o\t 4.Divis�o\t 5.Resto:");
scanf("%d", &operacao);
switch (operacao)
{
	case 1: printf("%d + %d = %d\n", a, b, a + b);
		break; //Impede que os pr�ximos casos sejam executados
	case 2: printf("%d - %d = %d\n", a, b, a - b);
		break;
	case 3: printf("%d * %d = %d\n", a, b, a * b);
		break;
	case 4: printf("%d / %d = %d\n", a, b, a / b);
		break;
	case 5: printf("%d %% %d = %d\n", a, b, a % b);
		break;
	default: printf("Opera��o desconhecida\n"); //Outro caso (opcional)
}
	return 0;

}
