#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
int main()
{

    setlocale(LC_ALL, "portuguese");

    float media;
    int soma = 0;
    float nota;
    int i;
    char resposta;
    int contador =0;
 
    do
    {

        printf("digite uma nota: ");
        scanf("%f", &nota);

        soma += nota;
        contador++;

        fflush(stdin);

        printf("deseja adicionar mais uma nota?\n");
        printf("s - sim \nn - não \nresposta: ");
        scanf("%c", &resposta);
   
    } while (resposta == 's');

    media = soma / contador;

    system("cls || clear");

    printf("soma: %d \n", soma);
    printf("media: %.1f\n", media);

    if (media >= 7)
    {
        printf("aprovado \n");
    }
    else if (media >= 5 && media <= 6.9)
    {
        printf("recuperação \n");
    }
    else
    {
        printf("reprovado \n");
    }

    return 0;
}