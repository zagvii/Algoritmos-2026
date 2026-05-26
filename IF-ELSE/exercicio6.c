// Exercício 6. Crie um programa que aplica uma taxa de juros em um determinado preço digitado pelo teclado. A taxa aplicada deve ser:

// Aumento de 10% caso o valor seja menor do que 100
// Aumento de 20% caso o valor esteja entre 100 (inclusive) e 300
// Aumento de 50% caso o valor esteja entre 300 (inclusive) e 1000
// Sem aumento de taxa caso o valor seja maior ou igual a 1000
// Imprima uma mensagem de erro se o valor for negativo
// Ao final, seu programa deve imprimir o novo valor, já com a taxa aplicada.

#include <stdio.h>

int main()
{
    double num, taxaValor = 0;
    
    printf("Digite um valor: ");
    scanf("%lf", &num);
    
    if (num < 0) {
        printf("ERRO: O número digitado é negativo!");
        return 0;
    } 
    
    if (num < 100) taxaValor = num * 0.1;
    else if (num >= 100 && num < 300) taxaValor = num * 0.2;
    else if (num >= 300 && num < 1000) taxaValor = num * 0.5;
    
    printf("Com a taxa de %.2lf, o valor final será: %.2lf", taxaValor, num + taxaValor);


    return 0;
}