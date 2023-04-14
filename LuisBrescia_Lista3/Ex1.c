#include <stdio.h>  

/* 
1. Faça um programa para exibir a tabuada de 1 a 9 de adição, subtração, divisão, multiplicação.
(Utilize a estrutura do-while).
*/

int main(){

    float i = 1, j = 1;

    // ? Adição
    printf("Tabuada da adicao:\n");
    do {
        do {
            
            printf("%.2f + %.2f = %.2f\n", i, j, i + j);
            j++;

        } while (j <= 10);
        
        i++;
        j = 1;

    } while (i<=9);
    i = 1, j = 1;

   // ? Subtração 
    printf("Tabuada da subtracao:\n");
    do {
        do {
            
            printf("%.2f - %.2f = %.2f\n", i, j, i - j);
            j++;

        } while (j <= 10);
        
        i++;
        j = 1;
        
    } while (i<=9);
    i = 1, j = 1;

    // ? Divisão
    printf("Tabuada da divisao:\n");
    do {
        do {
            
            printf("%.2f / %.2f = %.2f\n", i, j, i / j);
            j++;

        } while (j <= 9);
        
        i++;
        j = 1;
        
    } while (i<=10);
    i = 1, j = 1;

    // ? Multiplicação
    printf("Tabuada da multiplicacao:\n");
    do {
        do {
            
            printf("%.2f * %.2f = %.2f\n", i, j, i * j);
            j++;

        } while (j <= 9);
        
        i++;
        j = 1;
        
    } while (i<=10);

    return 0;
}