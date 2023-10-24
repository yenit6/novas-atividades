#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int nota;
    int contador, soma;
    float media;
    do
    {
        printf("digite uma nota: ");
        scanf("%d", &nota);
        soma += nota;
        contador++;
        fflush(stdin);

    } while (nota > 0);

    media = soma / contador;

    printf("media: %.1f", media);

    return 0;
}