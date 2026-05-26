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

//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////

// int main() {
//     int array[5] = {1, 2, 3, 4, 5};
//     for(int i = 0; i < 5; i++) {
//         printf("Posição %d: %p\n", i, &array[i]);
//     }
//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////

// void passagemValor(double pr, double tr, double te) {
//     printf("Valor dos ponteiros: %p %p %p", pr, tr, te);
// }

// void passagemReferencia(double *pr, double *tr, double *te) {
//     printf("Valor dos ponteiros: %p %p %p", pr, tr, te);
//     printf("Valor dos endereços: %lf %lf %lf", *pr, *tr, *te);
// }

// int main()
// {
//     double prova, trabalho, teste;
//     scanf("%lf %lf %lf", &prova, &trabalho, &teste);
    
//     passagemValor(prova, trabalho, teste);
//     passagemReferencia(&prova, &trabalho, &teste);

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////

// int main(){
//     char nome[] = "Teste de texto";
    
//     printf("Endereço de nome: %p\n", nome);
//     printf("Primeiro elemento de nome: %c\n", *nome);
//     printf("Segundo elemento de nome: %c\n", *(nome+1));
//     printf("Terceiro elemento de nome: %c\n", *(nome+2));
    
//     char *ponteiro = nome;
    
//     printf("Endereço de ponteiro: %p\n", ponteiro);
//     printf("Valor de ponteiro: %c\n", *(ponteiro + 1));
    
//     //percorrer todo o array de caracteres
//     while(*ponteiro != '\0'){
//         printf("Letra: %c\n", *ponteiro);
//         ponteiro++;
//     }
    
//     printf("Endereço final de ponteiro: %p\n", ponteiro);
// }