/******************************************************************************

Questão 0. Faça um procedimento que imprima os números pares entre 1 (inclusive) e X (inclusive), sendo que o
valor X será recebido por parâmetro de entrada.
Crie um main e chame este procedimento 10 vezes, solicitando o valor a ser passado para o procedimento pelo
teclado. Você deve solicitar que o valor seja digitado novamente sempre que o valor informado for menor do que 1.

*******************************************************************************/

#include <stdio.h>

void imprimirValoresPares(int x) {
    printf("Números pares de 1 a %d: ", x);
    
    for(int i = 1; i <= x; i++){
        if (i % 2 == 0) {
            printf("%d", i);
            if(i != x && i != (x - 1)) printf(", ");
        }
    }
    
    printf("\n\n");
}

int main()
{
    for(int i = 0; i < 10 ; i++) {
        int x;
        
        do {
            printf("Digite um número: "); 
            scanf("%d", &x);
            
            if (x < 1) printf("Valor inválido!\n\n");
        } while (x < 1);
        
        imprimirValoresPares(x);
    }

    return 0;
}