// Exercício 4. Crie um programa que recebe três valores inteiros pelo teclado e imprime qual dos três é menor.

#include <stdio.h>

int main()
{
    int num1, num2, num3, menorNum;
    
    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    if (num1 < num2 && num1 < num3) {
        menorNum = num1;
    } else if (num1 < num2 && num1 > num3) {
        menorNum = num3;
    } else if (num2 < num3) {
        menorNum = num2;
    } else {
        menorNum = num3;
    }
    
    printf("O menor número digitado é: %d", menorNum);


    return 0;
}