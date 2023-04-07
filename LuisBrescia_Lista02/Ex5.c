#include <stdio.h>

/* 
5. Escreva um algoritmo que leia um número inteiro e imprima o valor 1 se o número 
informado for positivo, - 1 se for negativo e 0 se for zero.
*/

void main(){

    int num;
    scanf("%d", &num);

    if (num > 0){
        printf("1\n");
    }else if (num == 0){
        printf("0\n");
    }else{
        printf("-1\n");
    }
}
