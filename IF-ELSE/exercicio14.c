// Exercício 14. Solicite ao usuário que informe 3 valores inteiros. 
// Depois disso, imprima uma das seguintes mensagens: TRIÂNGULO EQUILÁTERO, TRIÂNGULO ESCALENO, TRIÂNGULO ISÓSCELES ou NÃO FORMA UM TRIÂNGULO. 
// Para a última mensagem, é importante notar que nem todo conjunto de 3 valores formam um triângulo, pois os valores devem obedecer à 
// Condição de Existência de um Triângulo: um de seus lados deve ser maior que o valor absoluto
// (módulo, ou seja, valor sempre positivo) da diferença dos outros dois lados e menor que a soma dos outros dois lados. Ou seja:

// ( | b - c | < a) e (a < b + c) e ( | a - c | < b) e (b < a + c) e ( | a - b | < c) e (c < a + b)

// Exemplo de valores que formam um triângulo: 16, 20 e 30
// Exemplo de valores que não formam um triângulo: 20, 15 e 5
// Para calcular o valor absoluto de um número em C, faça:

// importe a biblioteca stdlib.h: #include <stdlib.h>
// utilize a função abs passando o valor: por exemplo abs(b-c)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    
    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("ERRO: Um dos valores digitados é inválido!");
        return 0;
    }
    
    if (( abs(b - c) < a) && (a < b+c) && (abs(a - c) < b) && (b < a + c) && (abs(a - b) < c) && (c < a + b)) {
        if (a == b && a == c) {
            printf("TRIÂNGULO EQUILÁTERO");
        } else if (a == b || a == c || b == c) {
            printf("TRIÂNGULO ISÓSCELES");
        } else {
            printf("TRIÂNGULO ESCALENO");
        }
    } else {
        printf("NÃO FORMA UM TRIÂNGULO");
    }

    return 0;
}