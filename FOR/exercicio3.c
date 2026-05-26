// Exercício 3 - Crie um programa que imprime a tabuada de um número qualquer digitado pelo usuário.

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    printf("Imprimindo a tabuada de %d: \n", num);

    for (int i = 0; i <= 10; i++) {
        printf("%d X %d = %d\n", num, i, num * i);
    }
    
    return 0;
}