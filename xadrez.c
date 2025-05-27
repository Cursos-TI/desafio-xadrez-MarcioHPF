#include <stdio.h>


int main() {
    printf("--- Movimentando as Peças de Xadrez ---\n\n");

    // Simulação da Torre 
    printf("Simulação do Movimento da TORRE (5 casas para a Direita):\n");
    int casasTorre = 5; // Definindo o número de casas a serem movidas
    int i; // Variável de controle do loop for

    for (i = 0; i < casasTorre; i++) {
        printf("Direita\n"); // Imprime a direção a cada casa percorrida
    }
    printf("\n"); // Adiciona uma linha em branco para separar as simulações


    // Simulação do Bispo 
    printf("Simulação do Movimento do BISPO (5 casas na Diagonal Cima, Direita):\n");
    int casasBispo = 5; // Definindo o número de casas a serem movidas
    int j = 0; // Variável de controle do loop while
    
    while (j < casasBispo) {
        printf("Cima, Direita\n");
        j++; // Incrementa a variável de controle para avançar no movimento
    }
    printf("\n");


    // Simulação da Rainha 
    printf("Simulação do Movimento da RAINHA (8 casas para a Esquerda):\n");
    int casasRainha = 8; // Definindo o número de casas a serem movidas
    int k = 0; // Variável de controle do loop do-while

    do {
            printf("Esquerda\n");
            k++; // Incrementa a variável de controle
        } while (k < casasRainha);
    }
    printf("\n");

    printf(" Simulação Concluída! \n");
    return 0;
}
