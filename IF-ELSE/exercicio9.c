// Exercício 9. Crie um programa que recebe a nota do Grau A e a nota do Grau B pelo teclado e imprime na tela se será necessário ou não realizar o Grau C 
// (considere o sistema de avaliação da Unisinos, no qual o GA vale 33% e o GB vale 67%). 
// Caso algum valor informado seja negativo, informe uma mensagem de erro e não realize o cálculo.

#include <stdio.h>

int main()
{
    double grauA, grauB, notaFinal;
    
    printf("Digite a nota do Grau A e Grau B, nessa ordem: ");
    scanf("%lf %lf", &grauA, &grauB);
    
    if (grauA < 0 || grauB < 0) {
        printf("ERRO: Um dos valores digitados era negativo!");
        return 0;
    } 
    
    notaFinal = (grauA * 0.33) + (grauB * 0.67);
    
    if (notaFinal >= 6) {
        printf("Você não precisa realizar o Grau C!");
    } else {
        printf("Você precisa realizar o Grau C!");
    }
    
    printf("\nA sua nota final foi: %.2lf", notaFinal);

    return 0;
}