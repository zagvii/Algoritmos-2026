// Exercício 10. Crie um programa que solicita que o usuário digite uma letra e imprime na tela se a letra é ou não é uma vogal.

#include <stdio.h>
#include <ctype.h>

int main()
{
    char letra;
    
    printf("Digite uma letra: ");
    scanf(" %c", &letra);
    
    if (tolower(letra) == 'a' || tolower(letra) == 'e' || tolower(letra) == 'i' || tolower(letra) == 'o' || tolower(letra) == 'u') {
        printf("A letra digitada (%c) é uma vogal.", letra); 
    } else {
        printf("A letra digitada (%c) não é uma vogal.", letra); 
    }

    return 0;
}