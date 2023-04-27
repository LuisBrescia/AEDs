#include <stdio.h>
#include <stdlib.h>

// ! Inícico da questão
void PROCEDIMENTO(int **matrizA, int **matrizB, int N, int C){

    int i, j;
    int produtoA = 1, produtoB = 1, abaixoMediaA = 0, abaixoMediaB = 0;
    float mediaA = 0, mediaB = 0; 

    for (i = 0; i < N; i++) {
        for (j = 0; j < C; j++) {
            if (matrizA[i][j] % 2 != 0) {
                produtoA *= matrizA[i][j];
                mediaA += matrizA[i][j];
            }
            if (matrizB[i][j] % 2 != 0) {
                produtoB *= matrizB[i][j];
                mediaB += matrizB[i][j];
            }
        }
    }
    mediaA /= N * 2;
    mediaB /= N * 2;
    for (i = 0; i < N; i++) {
        for (j = 0; j < C; j++) {
            if (matrizA[i][j] < mediaA) {
                abaixoMediaA++;
            }
            if (matrizB[i][j] < mediaB) {
                abaixoMediaB++;
            }
        }
    }

    printf("Produto dos elementos impares da matriz A: %d, numero de elementos abaixo de %.2f da matriz A: %d\n", 
    produtoA, mediaA, abaixoMediaA);
    printf("Produto dos elementos impares da matriz B: %d, numero de elementos abaixo de %.2f da matriz B: %d\n", 
    produtoB, mediaB, abaixoMediaB);
}
// ! Fim da questão

int main(){

    int N, C, i, j; // N = linhas C = colunas
    scanf("%d %d", &N, &C);

    int **matrizA = malloc(N * sizeof(int*));
    int **matrizB = malloc(N * sizeof(int*));
    for (i = 0; i < N; i++){
        matrizA[i] = malloc(C * sizeof(int));
        matrizB[i] = malloc(C * sizeof(int));
    }

    for (i = 0; i < N; i++){
        for (j = 0; i < C; j++) {
        scanf("%d", &matrizB[i][0]);
        }
    }
    for (i = 0; i < N; i++){
        for (j = 0; i < C; j++) {
        scanf("%d", &matrizB[i][0]);
        }
    }

    PROCEDIMENTO(matrizA, matrizB, N, C);

    for (i = 0; i < N; i++) {
        free(matrizA[i]);
        free(matrizB[i]);
    }
    free(matrizA);
    free(matrizB);

    return 0;
}
