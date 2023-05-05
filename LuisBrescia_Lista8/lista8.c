#include "lista8.h"

int main() {

    int i = 0, j = 0;
    int** matrizA = criaMatriz();
    int** matrizB = criaMatriz();
    int* vetor = (int*) malloc(sizeof(int) * C);

    // exibeMatriz(matrizA);

    // for (int i = 0; i < L; i++) {
    //     for (int j = 0; j < C; j++) {
    //         matrizA[9 - i][j] = matrizB[i][j];
    //     }
    // }
    // exibeMatriz(matrizA);

    // copiaMatriz(matrizB, matrizA);
    // for (int i = 0; i < L; i++) {
    //     for (int j = 0; j < C; j++) {
    //         matrizA[i][9 - j] = matrizB[i][j];
    //     }
    // }

    exibeMatriz(matrizA);
    matrixZ(matrizA);

    // int **matrizProduto = produtoMatriz(matrizA, matrizB);

    // mesclaMatriz(matrizA, matrizB);
    
    // // printf("%d\n", diagonalMatriz(matrizA, vetor));
    // // printf("%d\n", maiorElemento(matrizProduto));
    // // exibeMatriz(&vetor);

    // int** matrizPermuta = criaMatriz();
    // for (int i = 0; i < L; i++) {
    //     for (int j = 0; j < C; j++) {
    //         matrizPermuta[i][j] = 0;
    //     }
    // }
    // exibeMatriz(matrizPermuta);
    // matrizPermuta[0][1] = 1;
    // matrizPermuta[1][0] = 1;
    // matrizPermuta[2][2] = 1;
    // exibeMatriz(matrizPermuta);

    // printf("%d\n", permutaMatriz(matrizPermuta));
    // printf("%d\n", quadradoMagico(matrizPermuta));

    return 0;
}