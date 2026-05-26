// Exercício 11. Crie um programa que lê o preço de um determinado produto. 
// Em seguida, simule a compra de X produtos (onde X deve ser solicitado para o usuário pelo teclado), 
// imprimindo o valor total da compra com 2 casas decimais e com o símbolo de reais na frente do valor ("R$"). 
// Caso a quantidade de produtos indicada seja negativa, não realize a conta e imprima uma mensagem de erro.

#include <stdio.h>

int main()
{
    double preco;
    int quantidade;
    
    printf("Digite o preço do produto: ");
    scanf("%lf", &preco);
    
    printf("Digite a quantidade de produtos comprados: ");
    scanf("%d", &quantidade);
    
    if (quantidade < 0) {
        printf("ERRO: A quantidade de produtos não pode ser negativa!");
        return 0;
    }
    
    printf("O valor total da compra será: R$ %.2lf", preco * quantidade); 

    return 0;
}