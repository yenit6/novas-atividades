#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale (LC_ALL, "portuguese");
float nota;

printf("digite uma nota: ");
scanf("%f" ,&nota);

while (nota < 0 || nota > 10){
    printf("digite uma nota: ");
    scanf("%f" ,&nota);
}

printf("nota: %.1f \n", nota);

return 0;
}