/******************************************************************************

Questão 4. Crie uma função que recebe 2 valores inteiros X e Y por parâmetro. Sua função deve retornar a soma dos
números que não são múltiplos de 13 entre X e Y, incluindo ambos. Por exemplo, para uma entrada na qual X = 100 e
Y = 200, sua função deve retornar o valor 13954. Note que os valores de X e Y não serão recebidos necessariamente
em ordem crescente.
Crie um main que chama a função criada para 2 valores inteiros A e B lidos pelo teclado, imprimindo na tela uma
mensagem no formato: “Soma dos valores não múltiplos de 13 entre A e B: Y”, onde Y é o resultado da execução da
função. Você deve garantir que os valores digitados A e B são maiores do que 0. Quando um dos valores for inválido,
apenas o valor inválido deve ser solicitado novamente.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int somatoriaDosValores(int X, int Y) {
    int somatoria = 0;
    int menor, maior;
    
    if (X < Y) {
        menor = X;
        maior = Y;
    } else {
        menor = Y;
        maior = X;
    }
    
    for(int i = menor; i <= maior; i++){
        if (i % 13 != 0) {
            somatoria += i;
        }
    }
    
    return somatoria;
}

int main()
{
    int A, B;
    
    do {
        printf("Digite um valor inteiro (A): "); 
        scanf("%d", &A);
        
        if (A <= 0) printf("O valor digitado é menor que 0! Tente novamente. \n\n");
    } while (A <= 0);
    
    do {
        printf("Digite um valor inteiro (B): "); 
        scanf("%d", &B);
        
        if (B <= 0) printf("O valor digitado é menor que 0! Tente novamente. \n\n");
    } while (B <= 0);
    
    int Y = somatoriaDosValores(A, B);
    printf("Soma dos valores não múltiplos de 13 entre %d e %d: %d", A, B, Y);

    return 0;
}