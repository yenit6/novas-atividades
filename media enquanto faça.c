#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale (LC_ALL, "portuguese");
float notaA, notaB, media;

do{
    printf("digite primeira nota: ");
    scanf("%f", &notaA);
    printf("digite segunda nota: ");
    scanf("%f", &notaB);
}while(notaA < 0 || notaA > 10 || notaB < 0 || notaB > 10);

media = (notaA + notaB)/2;

system ("cls || clear");
printf("primeira nota: %.1f \n", notaA);
printf("primeira segunda: %.1f \n", notaB);
printf("media: %.1f \n", media);

return 0;
}