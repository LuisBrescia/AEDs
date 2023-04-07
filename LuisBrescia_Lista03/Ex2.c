#include <stdio.h>  

/* 
2. Faça um programa em que leia um valor de n (inteiro) e exiba para o usuário a soma real da
sequência a seguir (Utilize a estrutura while):
*/

int main(){

    int i = 1, num = 0;
    float cima = 1, baixo = 1, soma = 0;

    scanf("%d", &num);

    printf("Soma = ");
    while (i <= num){
        printf(" + %.f/%.f", cima, baixo);
        
        cima += 2;
        baixo += 1;

        soma += cima / baixo;

        i++;
    }

    printf("Soma igual a: %f", soma);

    return 0;
}