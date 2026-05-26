// Exercício 4 - Peça para o usuário 10 caracteres e imprima na tela a quantidade de vogais digitadas.

#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    char caracteres[10];
    int qtdVogais = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite um caracter: ");
        scanf(" %c", &caracteres[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (
            tolower(caracteres[i]) == 'a' || 
            tolower(caracteres[i]) == 'e' || 
            tolower(caracteres[i]) == 'i' || 
            tolower(caracteres[i]) == 'o' || 
            tolower(caracteres[i]) == 'u'
        ) qtdVogais++;
    }

    printf("Quantidade de Vogais Digitadas: %d", qtdVogais);
    
    return 0;
}