


int soma; //Declara��o de vari�vel global
/*
A fun��o soma recebe dois inteiros e n�o retorna nenhum valor. Armazena o resultado da soma na vari�vel global soma.
*/
void somar(int a, int b) {
soma = a + b; //Observe a utiliza��o da vari�vel global "soma�
return soma;
}
/*
 A fun��o subtrair recebe dois inteiros e n�o retorna nenhum
 valor. Imprime o resultado da subtra��o dos dois n�meros recebidos.
*/
void subtrair(int a, int b) {
int subtracao; //Declara��o de vari�vel local
subtracao = a - b;
printf("%d - %d = %d\n", a, b, subtracao); //Imprime a subtra��o
}


int main(){

int n1 , n2 , testesoma , testesubtracao;

printf("digite um n�mero");
scanf("%d" , &n1);


printf("digite outro n�meros");
scanf("%d" , &n2);

testesoma = somar(n1 , n2);

printf("%d" , testesoma);



return 0;
}
