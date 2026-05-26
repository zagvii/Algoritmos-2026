/*

Questão 2 - Escreva um programa que contenha uma função chamada
double calcularSerie(int n). Esta função deve:

1. Receber um número inteiro positivo n como parâmetro
2. Calcular e retornar a soma da série harmônica ....
3. Utilize um laço (escolha o mais apropriado) para realizar a soma
4. No main, solicite ao usuário um número inteiro n, chame a função
calcularSerie e exiba o resultado da soma com duas casas decimais

*/

#include <stdio.h>
#include <locale.h>

double calcularSerie(int n) {

    double soma;

    for (int i = 1; i <= n; i++) {
        soma = soma + (1.0 / i);
    }

    return soma;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    double soma = calcularSerie(num);

    printf("O resultado da soma é: %.2lf", soma);
    
    return 0;
}