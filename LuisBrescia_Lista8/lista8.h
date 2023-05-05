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

    int maior = matriz[0][0];
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    return maior;
}
// Questão 2
int diagonalMatriz(int **matriz, int *vetor) {

    int soma = 0;
    for (int i = 0; i < L; i++) {
        soma += matriz[i][i];
        vetor[i] = matriz[i][i];
    }

    return soma;
}
// Questão 3
void mesclaMatriz(int **matrizA, int **matrizB) {

    int matrizC[L][C];
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
            printf("%3d", matrizC[i][j]);
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
        }
    }

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
        if ((acc > 1 || acl > 1) || (acc < 1 || acl < 1)) { return 0; }   
    }

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
void matrixZ(int** matrizZ) {
    int i;
    int** matrix = (int**) malloc(sizeof(int*) * 10);
    for (i = 0; i < 10; i++) {
        matrix[i] = (int *) malloc(sizeof(int) * 10);
    }
    // * Trocar linha 2 com a linha 8
    copiaMatriz(matrix, matrizZ);
    for (i = 0; i < 10; i++) {
        matrizZ[1][i] = matrix[7][i];
        matrizZ[7][i] = matrix[1][i]; 
    }
    // * Trocar coluna 4 com a coluna 10
    copiaMatriz(matrix, matrizZ);
    for (i = 0; i < 10; i++) {
        matrizZ[i][3] = matrix[i][9];
        matrizZ[i][9] = matrix[i][3]; 
    }
    // * Trocar a diagonal principal com a diagonal secundária
    copiaMatriz(matrix, matrizZ);
    for (i = 0; i < 10; i++) {
        matrizZ[i][i] = matrix[i][9 - i]; 
        matrizZ[i][9 - i] = matrix[i][i]; 
    }
    // * Trocar linha 5 com coluna 10    
    copiaMatriz(matrix, matrizZ);
    for (i = 0; i < 10; i++) {
        matrizZ[4][i] = matrix[i][9]; 
        matrizZ[i][9] = matrix[4][i]; 
    }

    exibeMatriz(matrizZ);
}
// Questão 8