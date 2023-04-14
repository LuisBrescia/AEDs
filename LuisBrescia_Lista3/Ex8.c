#include <stdio.h>  

/* 
8. Faça um programa que leia vários inteiros positivos e mostre, no final, a soma dos números pares
e a soma dos números ímpares. O programa deve parar quando o usuário digitar um número maior
que 1000 (Utilize a estrutura while).
*/

int main(){

    int num = 0, par = 0, impar = 0;
    scanf("%d", &num);

    while (num <= 1000) {
        if (num % 2 == 0) {
            par += num;
        }else{
            impar += num;
        }
        scanf("%d", &num);
    }

    printf("Soma par: %d Soma impar:%d", par, impar);

    return 0;
}