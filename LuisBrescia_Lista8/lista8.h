#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define L 10 // Linhas
#define C 10 // Colunas
#define separador " - - - - - - - - - - - - - - - - - - - - - - - \n"

int **distribuicaoEletronicaMatriz(int **matrizA, int **matrizB) {

    int **matrizP = (int**) malloc(sizeof(int*) * L);
    for (int i = 0; i < L; i++) {
        matrizP[i] = (int*) malloc(sizeof(int) * C);
    }
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            matrizP[i][j] = matrizA[i][j] + matrizB[j][i];
        }
    }

    return matrizP;   
}
void matrizTransposta(int **matriz) {
    int temp;
    int **matrizT = (int**) malloc(sizeof(int*) * C);
    for (int i = 0; i < C; i++) {
        matrizT[i] = (int*) malloc(sizeof(int) * L);
    }
    for (int i = 0; i < C; i++) {
        for (int j = 0; j < L; j++) {
            matrizT[i][j] = matriz[j][i];
        }
    }
}

int** criaMatriz(){

    int **novaMatriz = (int**) malloc(sizeof(int*) * L);
    for (int i = 0; i < L; i++) {
        novaMatriz[i] = (int*) malloc(sizeof(int) * C);
    }
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            novaMatriz[i][j] = i*C + j + 1;
        }
    }

    return novaMatriz;    
}
void exibeMatriz(int **matriz){
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            printf("%5d",matriz[i][j]);
        }
        printf("\n");
    }
    printf(separador);
}
void copiaMatriz(int** matrizOutput, int** matrizInput) {
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            matrizOutput[i][j] = matrizInput[i][j];
        }
    }
}
void leMatriz(int **matriz, int linha, int coluna){
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

// Questão 1
int maiorElemento(int **matriz){
    int coordenadas[2];
    int maior = matriz[0][0];
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                coordenadas[0] = i;
                coordenadas[1] = j;
            }
        }
    }
    printf("Maior elemento: %d\n", maior);
    printf("Coordenadas: [%d][%d]\n", coordenadas[0], coordenadas[1]);
    return maior;
}
// Questão 2
int diagonalMatriz(int **matriz, int *vetor) {

    int soma = 0;
    for (int i = 0; i < L; i++) {
        soma += matriz[i][i];
        vetor[i] = matriz[i][i];
    }
    printf("Soma da diagonal principal: %d\n", soma);
    return soma;
}
// Questão 3
void mesclaMatriz(int **matrizA, int **matrizB) {

    int matrizC[L][C];
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
            printf("%5d", matrizC[i][j]);
        }
        printf("\n");
    }
    printf(separador);
}
// Questão 4
int **produtoMatriz(int **matrizA, int **matrizB) {

    int **matrizP = (int**) malloc(sizeof(int*) * L);
    for (int i = 0; i < L; i++) {
        matrizP[i] = (int*) malloc(sizeof(int) * C);
    }
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            matrizP[i][j] = matrizA[i][j] * matrizB[j][i];
            printf("%8d", matrizP[i][j]);
        }
        printf("\n");
    }
    printf(separador);
    return matrizP;
}
// Questão 5
int permutaMatriz(int** matriz) {

    int acc, acl;

    for (int i = 0; i < L; i++) {
        acl = acc = 0;
        for (int j = 0; j < C; j++) {
            if (matriz[i][j] == 1) { acc++; }
            if (matriz[j][i] == 1) { acl++; }
        }
        if ((acc > 1 || acl > 1) || (acc < 1 || acl < 1)) { 
            printf("Nao permutacao.\n");
            return 0; 
        }   
    }
    printf("Permutacao.\n");
    return 1;
}
// Questão 6
int quadradoMagico(int** matriz) {

    int soma = 0, tempL = 0, tempC = 0, tempD = 0;
    for (int i = 0; i < C; i++) {
        soma += matriz[0][i];
    }
    for (int i = 0; i < L; i++) {
        tempC = tempL = 0;
        tempD += matriz[i][i];
        for (int j = 0; j < C; j++) {
            tempL += matriz[i][j];
            tempC += matriz[j][i];
        }
        if (tempL != soma || tempC != soma) {
            printf("Nao quadrado.\n");
            return 0;
        }
    }
    if (tempD != soma) {
        printf("Nao quadrado.\n");
        return 0;
    }
    

    printf("Quadrado.\n");
    return 1;
}
// Questão 7
void matrizZ(int** matriz) {

    int i, temp;
    // * Trocar linha 2 com a linha 8
    for (i = 0; i < 10; i++) {
        temp = matriz[1][i];
        matriz[1][i] = matriz[7][i];
        matriz[7][i] = temp; 
    }
    // * Trocar coluna 4 com a coluna 10
    for (i = 0; i < 10; i++) {
        temp = matriz[i][3];
        matriz[i][3] = matriz[i][9];
        matriz[i][9] = temp;
    }
    // * Trocar a diagonal principal com a diagonal secundária
    for (i = 0; i < 10; i++) {
        temp = matriz[i][i]; 
        matriz[i][i] = matriz[i][9 - i]; 
        matriz[i][9 - i] = temp;
    }
    // * Trocar linha 5 com coluna 10    
    for (i = 0; i < 10; i++) {
        temp = matriz[4][i];
        matriz[4][i] = matriz[i][9]; 
        matriz[i][9] = temp; 
    }

    exibeMatriz(matriz);
}
// Questão 8
void matrizMultiplicadora(int **matriz) {
    for (int i = 1; i < L; i++) {
        for (int j = 0; j < C; j++) {
            matriz[i][j] = matriz[0][j] * (i); 
            printf("%5d", matriz[i][j]);
        }
        printf("\n");
    }
}
// Questão 9
int escadaDown(int **matriz) {

    int soma = 0;

    for (int i = 0; i < L; i++) {
        for (int j = 0; j <= i; j++) {
            soma += matriz[i][j];
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }

    return soma;
}
// Questão 10
int escadaUp(int **matriz) {

    int soma = 0, cont = 0;

    for (int i = 0; i < L; i++) {
        for (int j = L - 1; j > i; j--) {
            soma += matriz[i][j];
            cont++;
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }

    return soma/cont;
}