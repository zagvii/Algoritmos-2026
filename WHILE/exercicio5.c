//Exercício 5. Crie um programa que solicita 10 caracteres pelo teclado. Ao final, imprima quantas letras A foram digitadas.

#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    char caracterDigitado;
    int i = 0, qtdA = 0;

    while (i < 10) {
        printf("Digite um caracter: ");
        scanf(" %c", &caracterDigitado);

        if (tolower(caracterDigitado) == 'a') qtdA++;
        i++;
    }

    printf("\nA letra A foi exibida %d vezes.", qtdA);
    
    return 0;
}