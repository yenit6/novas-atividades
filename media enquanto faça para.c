#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale (LC_ALL, "portuguese");

float media,  i;
int soma = 0;
float nota;

for (i = 0; i < 2; i++){
do
    {
    printf("digite %dº nota: ", i + 1);
    scanf("%f" ,&nota);
    } while (nota < 0 || nota > 10);

soma += nota;
 
}

media= soma / i;

printf("soma: %d \n", soma);
printf("media: %.1f\n", media);

return 0;
}