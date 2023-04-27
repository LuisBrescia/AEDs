#include <stdio.h>
#include <stdlib.h>

void espelha(int **matriz, int N){

    int i, j = 0;

    int **novaMatriz = malloc(N * sizeof(int*));
    for (i = 0; i < N; i++){
        novaMatriz[i] = malloc(2 * sizeof(int));
    }

    for (i = N - 1; i >= 0; i--){
        novaMatriz[j][0] = matriz[i][0];
        novaMatriz[j][1] = matriz[i][1];

        j++;
    }
    for (i = 0; i < N; i++){
        matriz[i][0] = novaMatriz[i][0];
        matriz[i][1] = novaMatriz[i][1];
    }

    
    for (i = 0; i < N; i++){
        free(novaMatriz[i]);
    }
    free(novaMatriz);
}

int main(){

    int N, i; // N = linhas
    scanf("%d", &N);
    int **matriz = malloc(N * sizeof(int*));

    for (i = 0; i < N; i++){
        matriz[i] = malloc(2 * sizeof(int));
    }

    for (i = 0; i < N; i++){
        scanf("%d", &matriz[i][0]);
        scanf("%d", &matriz[i][1]);
    }

    espelha(matriz, N);

    for (i = 0; i < N; i++){
        printf("%d ", matriz[i][0]);
        printf("%d\n", matriz[i][1]);
    }

    if (matriz[i] == *(matriz + i))
    {
        printf("é a mesma coisa\n");
    }
    

    for (i = 0; i < N; i++){
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
