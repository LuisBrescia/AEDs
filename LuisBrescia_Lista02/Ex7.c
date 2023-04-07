#include <stdio.h>

/* 
7. Crie um programa que leia um caracter (tipo letraar) e mostre se: 
 - É uma letra do alfabeto maiúscula 
 - É uma letra do alfabeto minúscula 
 - É um número inteiro entre 0 e 9. 
*/

void main(){

    char letra;
    scanf("%c", &letra);

    if (letra >= 'A' && letra <= 'Z'){
        printf("Letra maiuscula\n");
    } else if (letra >= 'a' && letra <= 'z'){
        printf("Letra minuscula\n");
    } else if (letra >= '0' && letra <= '9') {
        printf("Numero\n");
    } 
}
