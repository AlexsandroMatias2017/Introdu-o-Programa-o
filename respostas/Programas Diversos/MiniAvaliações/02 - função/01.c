
/*
1) Fa�a uma fun��o que recebe a m�dia final de um aluno por par�metro e retorna
o seu conceito, conforme instru��es abaixo:
� D (de 0,0 a 4,9)
� C (de 5,0 a 6,9)
� B (de 7,0 a 8,9)
� A (de 9,0 a 10,0)

*/

char mediaFinal(float media){   // Calcula primeiramente a m�dia


      if ( (media >= 9) && (media <= 10))
        return 'A';

      if ( (media >= 7.0) && (media <= 8.9))
        return 'B';

      if ( (media <= 6.9) && (media >= 5))
        return 'C';

      if ( (media >= 0) && (media <= 4.9))
        return 'D';


    }


int main(){

    float media;
    char conceito;

    printf("digite o valor da media:");
    scanf("%f" , &media);

    conceito = mediaFinal(media);



    printf("Seu conceito foi: %c" , conceito);


    return 0;
    }
