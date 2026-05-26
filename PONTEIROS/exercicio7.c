#include <stdio.h>

/* Exercício 7. Escreva uma função que recebe uma string e um caractere, e retorna o número de vezes que o caractere aparece na string, usando ponteiros. 
Utilize a seguinte assinatura para sua função:

int ocorrenciasCaracter(char *texto, char carac) {
    //seu código
} 

*/

int ocorrenciasCaracter(char *texto, char carac) {
    int somatoria = 0;
    
    while(*texto != '\0'){
        if (*texto == carac) somatoria++;
        texto++;
    }
    
    printf("%d", somatoria);
}

int main() {
    char texto[100] = "Texto de exemplo que será usado para contar quantas vezes a letra x aparece no texto.";
    char *ponteiroTexto = texto;
    
    ocorrenciasCaracter(ponteiroTexto, 'x');
    
    return 0;
}