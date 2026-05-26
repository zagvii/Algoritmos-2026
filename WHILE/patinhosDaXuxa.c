// Ajude a Xuxa

#include <stdio.h>
#include <locale.h>

void estrofeFinal (int P) {
    printf("1 patinho foi passear\nAlém das montanhas\nPara brincar\nA mamãe gritou\nQuack quack quack\nMas nenhum patinho\nVoltou de lá");
    printf("\n\nA mamãe patinha\nFoi procurar\nAlém das montanhas\nNa beira do mar\nA mamãe gritou\nQuack quack quack");
    
    if (P < 2) printf("\nE o %d patinho\nVoltou de lá", P);
    else printf("\nE os %d patinhos\nVoltaram de lá", P);
}

int main() {
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "Portuguese");
    
    int P;

    printf("Digite a quantidade de patinhos: ");
    scanf("%d", &P);

    if (P < 1) {
        printf("Quantidade de patinhos inválida!");
        return 0;
    } 

    int i = P;

    while (i > 1) {
        printf("%d patinhos foram passear\nAlém das montanhas\nPara brincar\nA mamãe gritou\nQuack quack quack", i);
        if (i != 2) printf("\nMas só %d patinhos\nVoltaram de lá\n\n", i - 1);
        else printf("\nMas só %d patinho\nVoltou de lá\n\n", i - 1);
        i--;
    }

    estrofeFinal(P);
    
    return 0;
}