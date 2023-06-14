#include <stdio.h>

void leitor(float notas[10]) {
    for (int i=0; i<10; i++){
        scanf("%f", &notas[i]);
    }
}

void calculaMedia(float notas[10]) {
    float media = 0;
    int acima = 0;
    for (int i=0; i<10; i++){
        media = media + notas[i];
    }
    media = media / 10;
    printf("%.2f\n", media);
    
    for (int i=0; i<10; i++) {
        if (notas[i] > media) {
            acima++;
        }
    }
    printf("%d", acima);
}

void main() {
    float notas[10];
    leitor(notas);
    calculaMedia(notas);
}

