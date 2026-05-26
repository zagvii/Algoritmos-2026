/******************************************************************************

Questão 2. Faça uma função que recebe um valor X por parâmetro. Sua função deve solicitar que o usuário digite X
números inteiros e retornar a quantidade total de valores positivos digitados.
Crie um main para chamar a função criada, passando um valor lido pelo teclado e imprimindo na tela o resultado da
função no formato: “Foram digitados Y valores positivos”, onde Y é o resultado da função.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int calcQtdValoresPositivos(int X) {
    
    int qtdValoresPositivos = 0;
    printf("\nSolicitando %d valores.\n", X);
    
    for(int i = 1; i <= X; i++){
        int num = 1;
        printf("%d - Digite um valor: ", i);
        scanf("%d", &num);
        if (num > 0) qtdValoresPositivos++;
    }
    
    return qtdValoresPositivos;
}

int main()
{
    int X;
    
    printf("Digite um número: "); 
    scanf("%d", &X);
    
    int Y = calcQtdValoresPositivos(X);
    printf("\n\nForam digitados %d valores positivos.", Y); 

    return 0;
}