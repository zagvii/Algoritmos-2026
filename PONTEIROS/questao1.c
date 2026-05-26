/******************************************************************************

Questão 1. Crie um procedimento que recebe um valor inteiro N por parâmetro. O procedimento deve imprimir o
quadrado de cada um dos valores pares de 1 até N, inclusive N, se for o caso. Por exemplo, quando N = 6, o
procedimento deve imprimir os valores 4, 16 e 36 (2 ao quadrado, 4 ao quadrado e 6 ao quadrado, respectivamente).
Crie um main para chamar o procedimento criado, passando um valor lido pelo teclado. Você deve garantir que o
usuário digite um valor entre 5 e 1000, solicitando novamente sempre que um valor inválido for informado.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

void imprimirQuadradosDosValoresPares(int N) {
    printf("Quadrado dos valores pares de 1 a %d: ", N);
    
    for(int i = 1; i <= N; i++){
        if (i % 2 == 0) {
            int x = pow(i, 2);
            printf("%d", x);
            if(i != N && i != (N - 1)) printf(", ");
        }
    }
    
    printf("\n");
}

int main()
{
    int N;
    
    do {
        printf("Digite um número: "); 
        scanf("%d", &N);
        
        if (N < 5 || N > 1000) printf("Valor inválido!\n\n");
    } while (N < 5 || N > 1000);
    
    imprimirQuadradosDosValoresPares(N);

    return 0;
}