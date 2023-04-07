#include <stdio.h>  

/* 
7. Faça um programa em que receba n fornecido pelo usuário, e exiba a sequência Fibonacci
(Utilize a estrutura for) com seus n primeiros elementos.
Para n = 11
Mostre: 1 1 2 3 5 8 13 21 34 55 89
*/

int main(){

    int n, i, f1 = 0, f2 = 0, fn = 1;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        
        printf("%d ", fn);

        f1 = f2;
        f2 = fn;

        fn = f1 + f2;        
    }

    return 0;
}