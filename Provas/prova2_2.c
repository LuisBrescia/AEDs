#include <stdio.h>
#include <stdlib.h>

int comparaVetores(int *vetor1, int *vetor2, int N) {

    int m1 = 0, m2 = 0;

    for (int i = 0; i < N; i++){
        if (vetor1[i] % 3 == 0) {m1++;}
        if (vetor2[i] % 3 == 0) {m2++;}
    }

    if (m1 == m2) { return 1; }
    return -1;
}

int main(){
    int N, i;
    scanf("%d", &N);

    int *vetor1 = malloc(N * sizeof(int));
    int *vetor2 = malloc(N * sizeof(int));

    for(i=0; i<N; i++) {scanf("%d", vetor1);}

    for(i=0; i<N; i++) {scanf("%d", vetor2);}

    printf("%d", comparaVetores(vetor1, vetor2, N));

    free(vetor1);
    free(vetor2);

    return 0;
}
