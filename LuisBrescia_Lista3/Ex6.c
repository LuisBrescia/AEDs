#include <stdio.h>  

/* 
6. Faça um programa que calcula o produto dos números digitados pelo usuário. O programa deve
permitir que o usuário digite uma quantidade não determinada de números. O programa encerra
quando o usuário digita o valor zero (Utlize a estrutura do-while).
*/

int main(){

    int num = 1, total = 1;

    do {

        total *= num;
        scanf("%d", &num);

    }while (num != 0);
    
    printf("%d\n", total);

    return 0;
}