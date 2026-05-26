// Exercício 9. Crie um programa que pede para o usuário digitar 2 valores inteiros via teclado (val1 e val2). 
// Se nenhum dos valores for negativo, escreva os números pares entre o menor e o maior valor.

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int val1, val2, maior, menor;

    printf("Digite dois valores: ");
    scanf("%d %d", &val1, &val2);

    if (val1 < 0 || val2 < 0) {
        printf("Um dos valores digitados era negativo!");
        return 0;
    }
    
    if (val1 > val2) {
        maior = val1;
        menor = val2;
    } else {
        maior = val2;
        menor = val1;
    }

    while (menor <= maior) {
        if (menor % 2 == 0) printf("%d\n", menor);
        menor++;
    }
    
    return 0;
}