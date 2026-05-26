/*

Questão 4 - Escreva um programa que seja organizado com um
procedimento (uma função que não retorna valor, ou seja, void) chamado void
imprimirTabuada(int numero).

1. O procedimento imprimirTabuada deve receber um número inteiro como
parâmetro
2. Dentro do procedimento, use um laço for para calcular e imprimir a
tabuada de multiplicação desse número, do 1 ao 10. (Ex: "5 x 1 = 5", "5 x 2 =
10", ..., "5 x 10 = 50").
3. No main, peça ao usuário para digitar um número inteiro
4. Chame o procedimento imprimirTabuada, passando o número digitado
pelo usuário para que a respectiva tabuada seja exibida na tela

*/

#include <stdio.h>
#include <locale.h>

void imprimirTabuada(int numero) {
    printf("\nTabuada do %d:\n", numero);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    imprimirTabuada(num);
    
    return 0;
}