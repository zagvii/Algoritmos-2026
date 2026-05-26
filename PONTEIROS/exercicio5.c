#include <stdio.h>

/* Exercício 5. Escreva uma função que recebe um ponteiro para um array de inteiros e seu tamanho, e retorna a soma dos elementos do array. 
Tente usar ponteiros também dentro do laço, no momento de pegar a informação do array e acumular na variável que armazena a soma. */

int somarArray (int *ponteiroArray, int tamanhoArray) {
    int somatoria;
    
    for(int i = 0; i < tamanhoArray; i++) {
        somatoria += *ponteiroArray+i;
    }
    
    printf("%d", somatoria);
}

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int *ponteiroArray = array;
    
    somarArray(ponteiroArray, 5);
    
    return 0;
}