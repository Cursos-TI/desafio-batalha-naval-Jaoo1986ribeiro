Batalha Naval - Nível Mestre
Descrição
Este projeto implementa o nível Mestre do desafio Batalha Naval, utilizando matrizes para representar o tabuleiro e padrões de habilidades especiais. Todos os valores são inseridos manualmente através de variáveis no código, conforme os requisitos do desafio.

Funcionalidades
Tabuleiro 10x10 com posicionamento de navios em diferentes orientações

Quatro navios posicionados (horizontal, vertical e dois diagonais)

Três padrões de habilidades especiais: Cone, Cruz e Octaedro

Exibição clara e organizada do tabuleiro e padrões

Como Compilar e Executar
Compilação
bash
gcc batalha_naval_mestre.c -o batalha_naval
Execução
bash
./batalha_naval
Estrutura do Código
Tabuleiro
Matriz 10x10 representando o tabuleiro de jogo

Valor 0 indica água

Valor 3 indica presença de navio

Padrões de Habilidades
Cone: Padrão triangular (3x5)

Cruz: Padrão em forma de cruz (5x5)

Octaedro: Padrão em forma de diamante (3x5)

Funções Principais
inicializarTabuleiro(): Preenche o tabuleiro com zeros

exibirTabuleiro(): Mostra o tabuleiro com coordenadas

posicionarNavios(): Posiciona os quatro navios com valores pré-definidos

criarPadraoCone(): Exibe o padrão de cone

criarPadraoCruz(): Exibe o padrão de cruz

criarPadraoOctaedro(): Exibe o padrão de octaedro

Valores Pré-Definidos
Navios
Horizontal: Linha 2, colunas 3-5

Vertical: Coluna 5, linhas 6-8

Diagonal 1: Posições (1,1), (2,2), (3,3)

Diagonal 2: Posições (2,7), (3,6), (4,5)

Padrões de Habilidades
Cone:

text
0 0 1 0 0
0 1 1 1 0
1 1 1 1 1
Cruz:

text
0 0 1 0 0
0 0 1 0 0
1 1 1 1 1
0 0 1 0 0
0 0 1 0 0
Octaedro:

text
0 0 1 0 0
0 1 1 1 0
0 0 1 0 0
Saída Esperada
O programa exibirá:

O tabuleiro 10x10 com os navios posicionados

Os três padrões de habilidades (Cone, Cruz e Octaedro)

Requisitos Atendidos
Entrada de dados através de variáveis no código

Utilização de matrizes para estruturação eficiente dos dados

Exibição clara e organizada dos resultados

Implementação de três padrões de habilidades especiais

Tabuleiro 10x10 com múltiplos navios posicionados

Observações
Todos os valores são definidos manualmente no código

Não há interação do usuário durante a execução

O programa demonstra o uso eficiente de matrizes e estruturas de repetição

Este código atende completamente aos requisitos do nível Mestre do desafio Batalha Naval, demonstrando habilidades avançadas no uso de matrizes e estruturas de dados em linguagem C.