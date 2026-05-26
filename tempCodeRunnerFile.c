#include <stdio.h>
#include <locale.h>

float calcularMedia (float n1, float n2) {
    return (n1 + n2) / 2;
}

void verificarSituacao(float media) {
    if (media >= 6) printf("O aluno está APROVADO!");
    else if (media >= 4) printf("O aluno está EM RECUPERAÇÃO!");
    else printf("O aluno está REPROVADO!");

    printf(" Nota Final: %.2f\n\n", media);
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2;
    int qtdAlunos = 1;
    
    do {

        printf("%dº Aluno - Digite as duas notas do aluno: ", qtdAlunos);
        scanf("%f %f", &nota1, &nota2);

        if (nota1 < 0.0 || nota2 < 0.0) {
            printf("Finalizando o programa...");
            break;
        }

        if (nota1 > 10.0 || nota2 > 10.0) {
            printf("Valores Inválidos! Por favor, informe valores entre 0.0 e 10.0");
            break;
        }

        float mediaAritmetica = calcularMedia(nota1, nota2);

        verificarSituacao(mediaAritmetica);
        qtdAlunos++;

    } while (nota1 > 0.0 && nota2 > 0.0);
    
    return 0;
}