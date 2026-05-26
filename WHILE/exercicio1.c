// Exercício 1. Crie um programa que pede para o usuário digitar 50 inteiros pelo teclado.     

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int valor, i = 0;

    while (i < 50) {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &valor);
        i++;
    }
    
    return 0;
}