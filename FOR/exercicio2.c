// Exercício 2 - Crie um programa que imprime na tela todos os valores entre dois valores digitados pelo teclado.

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, menor, maior;

    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        maior = num1;
        menor = num2;
    } else {
        maior = num2;
        menor = num1;
    }

    printf("Imprimindo os valores entre %d e %d: ", menor, maior);

    for (;menor <= maior; menor++) {
        printf("%d", menor);
        if (menor != maior) printf(", ");
    }
    
    return 0;
}