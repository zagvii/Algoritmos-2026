/* 

Questão 0 - Escreva um programa que solicita ao usuário a digitação de
uma única letra do alfabeto. O programa deve:

1. Armazenar o caractere em uma variável do tipo char
2. Verificar se a letra digitada é uma vogal ou uma consoante
3. Usar uma estrutura if/else para exibir uma das seguintes mensagens:
    i. "A letra [letra] é uma vogal e é maiúscula." ou
    ii. "A letra [letra] é uma vogal e é minúscula." ou
    iii. "o caractere [letra] não é uma vogal."

*/

#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    char letra;
    int verificaVogal = 0, verificaMinuscula = 0;

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        verificaVogal = 1;
        verificaMinuscula = 1;

    } else if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        verificaVogal = 1;
        
    }

    if (verificaVogal == 1 && verificaMinuscula == 1) {
        printf("A letra %c é uma vogal e é minúscula.", letra);
    } else if (verificaVogal == 1) {
        printf("A letra %c é uma vogal e é maiúscula.", letra);
    } else {
        printf("O caractere %c não é uma vogal.", letra);
    }

    
    return 0;
}