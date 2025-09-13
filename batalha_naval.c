#include <stdio.h>

#define TAMANHO 10

// Função para inicializar o tabuleiro com zeros
void inicializarTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = 0;
        }
    }
}

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    printf("\nTabuleiro de Batalha Naval:\n");
    printf("   ");
    for (int j = 0; j < TAMANHO; j++) {
        printf("%2d ", j);
    }
    printf("\n");
    
    for (int i = 0; i < TAMANHO; i++) {
        printf("%2d ", i);
        for (int j = 0; j < TAMANHO; j++) {
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função para posicionar navios com valores pré-definidos
void posicionarNavios(int tabuleiro[TAMANHO][TAMANHO]) {
    // Valores definidos manualmente no código
    int navioHorizontal[] = {2, 3, 4}; // Linha 2, colunas 3-5
    int navioVertical[] = {5, 6, 7, 8}; // Coluna 5, linhas 6-8
    int navioDiagonal1[] = {1, 2, 3}; // Diagonal principal: (1,1), (2,2), (3,3)
    int navioDiagonal2[] = {2, 3, 4}; // Diagonal secundária: (2,7), (3,6), (4,5)
    
    // Posicionar navio horizontal
    for (int i = 0; i < 3; i++) {
        tabuleiro[navioHorizontal[0]][navioHorizontal[1] + i] = 3;
    }
    
    // Posicionar navio vertical
    for (int i = 0; i < 4; i++) {
        tabuleiro[navioVertical[0] + i][navioVertical[1]] = 3;
    }
    
    // Posicionar primeira diagonal
    for (int i = 0; i < 3; i++) {
        tabuleiro[navioDiagonal1[0] + i][navioDiagonal1[1] + i] = 3;
    }
    
    // Posicionar segunda diagonal
    for (int i = 0; i < 3; i++) {
        tabuleiro[navioDiagonal2[0] + i][navioDiagonal2[1] - i] = 3;
    }
}

// Função para criar o padrão de cone com valores pré-definidos
void criarPadraoCone() {
    // Valores definidos manualmente no código
    int cone[3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1}
    };
    
    printf("\nPadrão Cone (3x5):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }
}

// Função para criar o padrão de cruz com valores pré-definidos
void criarPadraoCruz() {
    // Valores definidos manualmente no código
    int cruz[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0}
    };
    
    printf("\nPadrão Cruz (5x5):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }
}

// Função para criar o padrão de octaedro com valores pré-definidos
void criarPadraoOctaedro() {
    // Valores definidos manualmente no código
    int octaedro[3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };
    
    printf("\nPadrão Octaedro (3x5):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAMANHO][TAMANHO];
    
    printf("=========================================\n");
    printf("       BATALHA NAVAL - NÍVEL MESTRE\n");
    printf("=========================================\n");
    
    // Inicializar o tabuleiro
    inicializarTabuleiro(tabuleiro);
    
    // Posicionar navios com valores pré-definidos
    posicionarNavios(tabuleiro);
    
    // Exibir o tabuleiro
    exibirTabuleiro(tabuleiro);
    
    // Criar e exibir os padrões de habilidades
    criarPadraoCone();
    criarPadraoCruz();
    criarPadraoOctaedro();
    
    printf("\nPressione Enter para sair...");
    getchar();
    
    return 0;
}