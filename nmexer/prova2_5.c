#include <stdio.h>
#include <stdlib.h>

void espelha(int *matriz, int N){

    int novaMatriz[N][2], i, j;

    for (i = N; i >= 0; i--){
            for (j = 0; j < N; j++){
                novaMatriz[j][0] = *matriz[i][0];
                novaMatriz[j][1] = *matriz[i][1];
            }
    }
    for (i = 0: j < N; j++){
        *matriz[i][0] = novaMatriz[i][0];
        *matriz[i][1] = novaMatriz[i][1];
    }
}

int main(){

    int N, i; // N = linhas
    scanf("%d", &N);
    int matriz[N][2];

    for (i = 0; i < N; i++){
        scanf("%d", &matriz[i][0]);
        scanf("%d", &matriz[i][1]);
    }

    espelha(&matriz[0][0], N);

    for (i = 0; i < N; i++){
        printf("%d\t", matriz[i][0]);
        printf("%d\n", matriz[i][1]);
    }

    return 0;
}


