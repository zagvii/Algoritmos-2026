// Exercício 1 - Crie um programa imprime na tela os valores de 1 a 100 (incluindo o 1 e o 100). 

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("Imprimindo valores: ");
    
    for (int i = 1; i <= 100; i++)
    {
        printf("%d", i);
        if (i != 100) printf(", ");
    }
    
    return 0;
}