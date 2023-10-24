#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale (LC_ALL, "portuguese");

float media;
int soma = 0;
float nota;
int i;

for (i = 0; i < 2; i++){
do
    {
    printf("digite %dº nota: ", i + 1);
    scanf("%f" ,&nota);
    } while (nota < 0 || nota > 10);

soma += nota;
 
}

media= soma / i;


system ("cls || clear");

printf("soma: %d \n", soma);
printf("media: %.1f\n", media);

if (media >= 7)
{
    printf("aprovado \n");
}
else if(media >= 5 &&  media <= 6.9)
{
    printf("recuperção \n");
}
else
{
    printf("reprovado \n");
}

return 0;
}