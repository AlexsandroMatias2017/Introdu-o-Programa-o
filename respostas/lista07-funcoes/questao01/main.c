#include <stdio.h>
#include <stdlib.h>

/**

1.	(7,0) Foi feita uma pesquisa pela prefeitura do Recife com pessoas que haviam sido infectadas pelo Corona V�rus.
A quantidade de pessoas � desconhecida. Para cada pessoa foi perguntado:

Idade,
Sexo(1-fem/2-mas),
Necessitou de interna�ao (1-sim/0-nao),
Faz parte do grupo de risco(1-sim/0-nao),
Outras pessoas da sua resid�ncia tiveram a doen�a(1-sim/0-nao),
quando dias ficou com os sintomas da doen�a.

Fa�a um programa que leia os dados da pesquisa e apresente os seguintes resultados:
�	Quantidade de mulheres que precisaram ser internadas;
�	Quantidade de homens com menos de 30 anos que precisaram ficar internados;
�	M�dia da idade das pessoas do grupo de risco;
�	M�dia da quantidade de dias que as pessoas ficaram com sintomas;
�	Percentual de pessoas que tiveram outros infectados na sua resid�ncia;
�	Idade do homem mais velho que precisou de interna�ao;



**/

int main()
{
    int opcao = 1, idade, sexo = 0 , diasDoente = 0;
    int ficouInternado = 1, grupoDeRisco = 1, outrasPessoas = 0  ;

    int quantidadeMulheres = 0 , quantidadeHomens = 0 ;

    int mulheresInternadas = 0;

    int homensMenos30Internados = 0;

    int totalGrupoDeRisco = 0 , somaIdadesGrupoDeRisco = 0;

    float mediaIdadeGrupoRisco = 1 , mediaDiasSintomaticos = 1 , percentualInfectadosCohabitantes = 1;


    while(opcao == 1)
    {
        printf("Idade: ");
        scanf("%d" , &idade);

        printf("Sexo(1-fem/2-mas): ");
        scanf("%d" , &sexo);

        if(sexo == 1)
        {
            quantidadeMulheres++;
        }
        else
        {
            quantidadeHomens++;
        }


        printf("Necessitou de internacao (1-sim/0-nao): ");
        scanf("%d" , &ficouInternado);


        // letra A

        if(sexo == 1 && ficouInternado == 1)
        {
            mulheresInternadas++;

        }

        // letra B
        if(sexo == 2 &&  idade < 30 && ficouInternado)
        {
            homensMenos30Internados++;
        }




        printf("Faz parte do grupo de risco(1-sim/0-nao)");
        scanf("%d" , &grupoDeRisco);



        if(grupoDeRisco)
        {
            totalGrupoDeRisco++;
            somaIdadesGrupoDeRisco += idade;
        }
        // letra C
        // M�dia da idade das pessoas do grupo de risco;

        mediaIdadeGrupoRisco = (float) (somaIdadesGrupoDeRisco / totalGrupoDeRisco);



        printf("Outras pessoas da sua resid�ncia tiveram a doen�a(1-sim/0-nao)");
        scanf("%d" , &outrasPessoas);


        printf("quando dias ficou com os sintomas da doen�a: ");
        scanf("%d" , &diasDoente);


        printf("Deseja adicionar mais outra pessoa? [1] - Sim | [2] - Nao \n");
        scanf("%d" , &opcao);



    }
        system("cls");

        printf(" -------------- Relat�rio --------------");






    return 0;
}
