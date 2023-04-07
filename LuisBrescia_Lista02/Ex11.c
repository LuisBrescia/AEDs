#include <stdio.h>

/* 
11.  Crie uma nova versão da calculadora substituindo a instrução if pelo uso da instrução switch.  
Lembre-se que a switch permite tratar tanto inteiros quanto caracteres. Logo, fique à vontade 
para manter a identificação da opção do menu por um caractere ou por um valor inteiro.
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
