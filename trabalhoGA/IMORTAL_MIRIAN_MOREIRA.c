/******************************************************************************

Módulo de Controle Espacial de Satélite

O Grupo de Rastreamento Espacial e Monitoramento de Informações Orbitais (GREMIO)
está desenvolvendo um pequeno satélite científico experimental, chamado de
IMORTAL-1. Este satélite tem como função principal coletar e analisar dados numéricos
de sensores em órbita, como temperatura, radiação e aceleração.

Por limitações de memória no sistema (simuladas por ainda não termos estudado
arrays), o satélite só pode armazenar 3 leituras de sensores por vez. Com base nessas 3
leituras, ele deve calcular e exibir estatísticas, gerar alertas e, como parte do sistema de
feedback visual da missão, desenhar uma barra de status com asteriscos, que representa
graficamente a intensidade média das leituras.

Funcionalidades obrigatórias

Após ler os 3 valores, o sistema deve permitir que o usuário selecione uma ou mais das
seguintes operações:

1 - Calcular média
2 - Calcular valor máximo e mínimo
3 - Calcular desvio de cada leitura em relação à média
4 - Verificar se valores estão dentro de faixa segura
5 - Exibir barra gráfica de intensidade média
6 - Gerar relatório completo
0 - Sair

*******************************************************************************/
// Biblioteca padrão para uso de PRINTF e SCANF
#include <stdio.h>

// Biblioteca para passar os caracteres informados pelo usuário (S ou N) para minusculo para facilitar o uso
#include <ctype.h>

// Função da Opção 1 - Calculando a média dos três valores informados
double calcularMedia(double valorA, double valorB, double valorC) {
    return (valorA + valorB + valorC) / 3;
}

// Função da Opção 2 - Informando qual é o maior número entre os valores informados
double calcularValorMax(double valorA, double valorB, double valorC) {
    double maior = valorA;
    
    // Encontrando o maior valor
    if (valorB > maior) maior = valorB;
    if (valorC > maior) maior = valorC;
    
    return maior;
}

// Função da Opção 2 - Informando qual é o menor número entre os valores informados
double calcularValorMin(double valorA, double valorB, double valorC) {
    double menor = valorC;
    
    // Encontrando o menor valor
    if (valorA < menor) menor = valorA;
    if (valorB < menor) menor = valorB;
    
    return menor;
}

// Procedimento da Opção 3 - Calculando o desvio de cada leitura em relação a média
void calcularDesvio(double valorA, double valorB, double valorC) {
    
    double media = calcularMedia(valorA, valorB, valorC);
    
    double desvioA = valorA - media;
    double desvioB = valorB - media;
    double desvioC = valorC - media;
    
    printf("\033[34m\nDesvio do 1º valor em relação à média: %.2lf", desvioA);
    printf("\nDesvio do 2º valor em relação à média: %.2lf", desvioB);
    printf("\nDesvio do 3º valor em relação à média: %.2lf\033[0m", desvioC);
}

// Procedimento da Opção 4 - Verificar se os valores informados estão dentro da faixa segura
void verificarValorDentroDaFaixaSegura(double valorA, double valorB, double valorC) {
    
    double minimo, maximo;
    
    printf("\nDigite o valor MÍNIMO aceitável: ");
    scanf("%lf", &minimo);
    
    printf("Digite o valor MÁXIMO aceitável: ");
    scanf("%lf", &maximo);
    
    for (int i = 1 ; i <= 3 ; i++) {
        
        double valor;
        
        if (i == 1) valor = valorA;
        else if (i == 2) valor = valorB;
        else if (i == 3) valor = valorC;
        
        if (valor > maximo) printf("\033[31m\n%dº Leitura: ACIMA DO LIMITE\033[0m", i);
        else if (valor < minimo) printf("\033[34m\n%dº Leitura: ABAIXO DO LIMITE\033[0m", i);
        else printf("\033[32m\n%dº Leitura: OK\033[0m", i);
        
    }
}

// Procedimento da Opção 5 - Exibir barra gráfica proporcional a media das leituras
void exibirBarraGrafica(double valorA, double valorB, double valorC) {
    double media = calcularMedia(valorA, valorB, valorC);
    
    printf("\n\033[34mIntensidade Média: %.2lf", media);
    printf("\n[");
    
    for (int i = 1 ; i <= media ; i ++) {
        printf("*");
        
        if (i >= 20) break;
    }
    
    printf("]\033[0m");
}

// Procedimento da Opção 6 - Gerar relatório completo (Chamando todas as operações disponíveis)
void gerarRelatorio(double valorA, double valorB, double valorC) {
    
    double media = calcularMedia(valorA, valorB, valorC);
    printf("\n\033[34mMÉDIA do valores informados: %.2lf\033[0m\n", media);
    
    printf("\nValor Máximo: %.2lf | Valor Mínimo %.2lf\n", calcularValorMax(valorA, valorB, valorC), calcularValorMin(valorA, valorB, valorC));

    calcularDesvio(valorA, valorB, valorC);
    printf("\n");

    verificarValorDentroDaFaixaSegura(valorA, valorB, valorC);
    printf("\n");

    exibirBarraGrafica(valorA, valorB, valorC);
    
}

// Função para exibir o menu e retornar a opção selecionada pelo usuário
int exibirMenu() {
    int opcaoSelecionada;
    
    do {
        printf("\n\033[31m******** MENU DE OPÇÕES ********\033[0m\n\n");
        printf("1 - Calcular média\n");
        printf("2 - Calcular valor máximo e mínimo\n");
        printf("3 - Calcular desvio de cada leitura em relação à média\n");
        printf("4 - Verificar se valores estão dentro de faixa segura\n");
        printf("5 - Exibir barra gráfica de intensidade média\n");
        printf("6 - Gerar relatório completo\n");
        printf("0 - Sair\n\n");
        printf("Escolha uma opção: ");
        
        scanf("%d", &opcaoSelecionada);
        
        // Válida se a opção selecionada é inválida
        if (opcaoSelecionada != 1 && 
            opcaoSelecionada != 2 && 
            opcaoSelecionada != 3 && 
            opcaoSelecionada != 4 && 
            opcaoSelecionada != 5 && 
            opcaoSelecionada != 6 && 
            opcaoSelecionada != 0) {
            printf("Opção Inválida!\n");
        }
       
    // Esse controle WHILE ficará exibindo o menu enquanto o usuário não selecionar uma opçao válida 
    } while (opcaoSelecionada != 1 && opcaoSelecionada != 2 && opcaoSelecionada != 3 && opcaoSelecionada != 4 && opcaoSelecionada != 5 && opcaoSelecionada != 6 && opcaoSelecionada != 0);

    return opcaoSelecionada;
}

// Função para redirecionar o usuário para a função respectiva de acordo com a oção escolhida no menu
void redirecionarUsuario(int opcaoSelecionada, double valorA, double valorB, double valorC) {
    
    char realizarOutraOperacao;
    
    if (opcaoSelecionada == 1) {
        printf("\n\033[34mMÉDIA do valores informados: %.2lf\033[0m", calcularMedia(valorA, valorB, valorC));
        
    } else if (opcaoSelecionada == 2) { 
        double maior = calcularValorMax(valorA, valorB, valorC); 
        double menor = calcularValorMin(valorA, valorB, valorC); 
        
        printf("\033[34m\nValor Máximo: %.2lf | Valor Mínimo %.2lf\033[0m", maior, menor);
        
    } else if (opcaoSelecionada == 3) calcularDesvio(valorA, valorB, valorC);
    else if (opcaoSelecionada == 4) verificarValorDentroDaFaixaSegura(valorA, valorB, valorC);
    else if (opcaoSelecionada == 5) exibirBarraGrafica(valorA, valorB, valorC);
    else if (opcaoSelecionada == 6) gerarRelatorio(valorA, valorB, valorC);
    else if (opcaoSelecionada == 0) return;
    
    // Após a execução de cada operação, o usuário pode selecionar se vai realizar outra operação
    do {
        printf("\n\nDeseja realizar outra operação (S/N)? ");
        scanf(" %c", &realizarOutraOperacao);
        
        realizarOutraOperacao = tolower(realizarOutraOperacao);
        
        if (realizarOutraOperacao != 's' && realizarOutraOperacao != 'n') printf("Opção Inválida!");
        
    } while (realizarOutraOperacao != 's' && realizarOutraOperacao != 'n');
    
    // Caso o usuário deseje realizar outra operação COM OS MESMOS dados de leitura já informados, ele exibirá o menu novamente
    if (realizarOutraOperacao == 's') {
        int opcaoSelecionada = exibirMenu();
        redirecionarUsuario(opcaoSelecionada, valorA, valorB, valorC); 
        
    }
}

// Função MAIN começa fazendo a leitura dos dados
int main() {
    
    char realizarOutraLeitura = 's';
    
    do {
        
        printf("\n\033[31m******** IMORTAL-1 – SISTEMA DE MONITORAMENTO DE INFORMAÇÕES ORBITAIS ********\033[0m\n\n");

        // Lendo os 3 valores informados pelo usuário
        
        double valorA, valorB, valorC;
        
        printf("Digite o valor da 1ª leitura: ");
        scanf("%lf", &valorA);
        
        printf("Digite o valor da 2ª leitura: ");
        scanf("%lf", &valorB);
        
        printf("Digite o valor da 3ª leitura: ");
        scanf("%lf", &valorC);
        
        // Chama a função que exibe o menu e retorna a opção selecionada pelo usuário
        // Usa a opção selecionada pelo usuário para redirecionar ele para sua função específica
        int opcaoSelecionada = exibirMenu();
        redirecionarUsuario(opcaoSelecionada, valorA, valorB, valorC); 
    
        // Após a execução das operações escolhidas, caso o usuário decida sair do sistema, será oferecida a opção para realizar outra leitura de dados
        do {
            printf("\nDeseja realizar outra leitura de dados (S/N)? ");
            scanf(" %c", &realizarOutraLeitura);
            
            realizarOutraLeitura = tolower(realizarOutraLeitura);
            
            if (realizarOutraLeitura != 's' && realizarOutraLeitura != 'n') printf("Opção Inválida!");
            
        } while (realizarOutraLeitura != 's' && realizarOutraLeitura != 'n');
        
    // Esse controle WHILE serve para realizar outra leitura de dados caso o usuário queira
    } while (realizarOutraLeitura == 's');
    
    printf("\nFinalizando o sistema...");
    
    return 0;
}
