/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int idade, qtdBalasCompradas, litros; // Valor Inteiro
    float peso, dinheiro; // Valor Não Inteiro
    double pi; // Valor Não Inteiro Maior
    char digitoFinalDoCartao; // Um caracter
    // string nome, cidade; // Bloco de Texto
    
    int X, Y = 1;
    
    Y++; // Y = Y + 1
    Y--; // Y = Y - 1
    
    char letraInicial = 'J';
    
    // %d - Inteiro
    // %f - Float
    // %lf - Double
    // %c - Char
    
    // Exibindo Texto Aleatório na Tela
    printf("Número Fixo Aleatório: %d \nTexto que vai ser imprimido. Y = %d", 5, Y);
    printf("\nLetra Inicial Do Nome = %c", letraInicial);
    
    // Pedir dados pro usuário
    
    int CPF;
    
    printf("\nNúmero do CPF: ");
    scanf("%d", &CPF);
    
    char letra_inicial;
    
    printf("\nLetra inicial do nome: ");
    scanf(" %c", &letra_inicial);
    
    float altura;
    
    printf("\nMinha altura é: ");
    scanf("%f", &altura);
    
    printf("\nA Letra inicial do seu nome é = %c" , letra_inicial);
    
    // PRINTF - Saída (Mostrando informações)
    // SCANF - Entrada (Pedindo informações)
    
    // A primeira linha de entrada é um inteiro N que é a quantidade de casos de teste que vem a seguir. 
    
    int N;
    
    printf("\nQuantidade de casos a seguir: ");
    scanf("%d", &N);
}


