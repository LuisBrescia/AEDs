#include <stdio.h>

/*6) faça um algoritmo que recebe a altura e peso de uma pessoa e calculo e o seu Índice de Massa 
Corporal (IMC). */

int main (){

    float peso, altura;
    scanf("%f %f", &peso, &altura);
    printf("%.2f", peso *(altura * altura));

    return 0;
}