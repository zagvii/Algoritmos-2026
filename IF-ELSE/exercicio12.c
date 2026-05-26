// Exercício 12. Altere o programa desenvolvido no exercício 11, considerando agora que os produtos possuem desconto de acordo com a quantidade que forem comprados. 
// Os descontos são os seguintes:
// comprando 3 ou 4 produtos, o desconto é de 10%
// comprando entre 5 (inclusive) e 10 (inclusive) produtos, o desconto é de 15%
// comprando mais do que 10 produtos, o desconto é de 20%
// comprando menos do que 3 produtos, não há desconto

#include <stdio.h>

int main()
{
    double preco, desconto = 0;
    int quantidade;
    
    printf("Digite o preço do produto: ");
    scanf("%lf", &preco);
    
    printf("Digite a quantidade de produtos comprados: ");
    scanf("%d", &quantidade);
    
    if (quantidade < 0) {
        printf("ERRO: A quantidade de produtos não pode ser negativa!");
        return 0;
    }
    
    if (quantidade > 10) desconto = (preco * quantidade) * 0.2;
    else if (quantidade >= 5) desconto = (preco * quantidade) * 0.15;
    else if (quantidade >= 3) desconto = (preco * quantidade) * 0.1;
    
    printf("O valor total da compra (com desconto de R$ %.2lf) será: R$ %.2lf", desconto, (preco * quantidade) - desconto); 

    return 0;
}