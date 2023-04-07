#include <stdio.h>

/* 
12.  Crie um algoritmo que leia um número real (float) e mostre sua parte inteira e sua parte 
fracionária. 
*/

void main(){
    
    float num1 = 0;
    int num2 = 0;

    scanf("%f", &num1);

    printf("Numero todo: %f\n", num1);

    num2 = (int) num1;

    printf("Parte inteira: %d\n", num2);
    printf("Parte decimal: %f\n", num1 - num2);
}

