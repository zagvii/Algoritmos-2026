// Exercício 1. Crie um programa que recebe um inteiro pelo teclado e imprime se ele é par ou ímpar. 

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int num;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) printf("O número digitado (%d) é par!", num);
    else printf("O número digitado (%d) é ímpar!", num);

    return 0;
}