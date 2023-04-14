#include <stdio.h>

/* 
10.  Calculadora com as quatro operações aritméticas básicas. Oferecer um menu ao usuário com 
as operações. Ler os dois operandos. Calcular e escrever o resultado. 
*/

void main(){

    char operacao;
    scanf("%c", &operacao);

    float num1, num2;
    scanf("%f %f", &num1, &num2);

    switch (operacao) {  
        case '+': printf("%.4f", num1 + num2); break;
        case '-': printf("%.4f", num1 - num2); break;
        case '*': printf("%.4f", num1 * num2); break;
        case '/': printf("%.4f", num1 / num2); break;
        default: printf("Invalido");
    }
}
