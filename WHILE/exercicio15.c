//Exercício 15. Crie um programa que imprime os números primos entre 0 e 200, imprimindo ao final a soma destes números.

#include <stdio.h>
#include <locale.h>

// Retorna a quantidade de divisores do número
int verificarDivisores(int num) {

    // Começa com 2 pq se começar com 1, sempre vai retornar pelo menos 1 divisor
    int i = 2, qtdDivisores = 0;

    while (i < num) {
        if (num % i == 0) {
            qtdDivisores++;
        }
        i++;
    }

    return qtdDivisores;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int i = 0, somatoria = 0;

    while (i <= 200) {
        // O número 1 nunca é primo
        if(i > 1 && (verificarDivisores(i)) == 0) {
            printf("%d, ", i);
            somatoria += i;
        }
        i++;
    }

    printf("\nA somatória de números primos entre 0 e 200 é: %d", somatoria);
    
    return 0;
}