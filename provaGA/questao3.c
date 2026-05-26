/*

Questão 3 - Escreva um programa que lê uma sequência de números
inteiros positivos fornecidos pelo usuário. O programa deve parar a leitura quando
o usuário digitar um número negativo. O programa deve:

1. Usar um laço while para ler os números
2. Manter o controle do maior e do menor número digitado até o momento
3. Quando o laço terminar (com a digitação de um número negativo), o
programa deve exibir na tela qual foi o maior e o menor número positivo
inserido na sequência

Dica: Inicialize as variáveis de maior e menor valor de forma
inteligente. Você pode usar o primeiro número lido como valor inicial
para ambas

*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num;
    int maior = -1, menor, contador = 0;

    do {
        printf("%d - Digite um número inteiro: ", contador + 1);
        scanf("%d", &num);

        if (num > 0) {
            if (contador == 0) { menor = num; } 

            if (num > maior) maior = num;
            if (num < menor) menor = num;
        }

        contador ++;

    } while (num > 0);

    printf("\nA maior número positivo digitado foi: %d", maior);
    printf("\nO menor número positivo digitado foi: %d", menor);
    
    return 0;
}