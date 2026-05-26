/*

Questão 1 - Escreva um programa que pede ao usuário um número inteiro
positivo, que representará a altura de um triângulo. O programa deve:

1. Ler o número da altura
2. Usar laços for aninhados (um dentro do outro) para desenhar um triângulo
retângulo de asteriscos (*)
3. A quantidade de triângulos na “base” deve ser a mesma da altura
4. Por exemplo, se o usuário digitar 5, a saída deve ser:
*
**
***
****
*****

*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int altura;

    printf("Digite um número inteiro (Altura do Triângulo): ");
    scanf("%d", &altura);

    for (int i = 1; i <= altura; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    
    return 0;
}