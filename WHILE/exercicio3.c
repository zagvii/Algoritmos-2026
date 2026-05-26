// Exercício 3. Crie um programa que imprime os números pares de 0 a 2000.

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int i = 0;

    while (i <= 2000) {
        if (i % 2 == 0) printf("%d, ", i);
        i++;
    }
    
    return 0;
}   