#include <stdio.h>  

/* 
4. Fazer um programa leia uma sequência de valores inteiros fornecida pelo usuário em uma linha
de entrada e conte o número de valores positivos, negativos e zeros. O programa encerra quando
o usuário digita o valor “-9999”. (Utilize a estrutura do-while)
*/

int main(){

    int num, tipos[3] = {0, 0, 0};

    do {
        scanf("%d", &num);

        if(num < 0){
            tipos[0]++;
        }else if(num == 0){
            tipos[1]++;
        }else if(num > 0){
            tipos[2]++;
        }

    }while (num != -9999);

    // > Remover o valor -9999
    tipos[0] -= 1;

    printf("Positivos = %d, Negativos = %d, Zeros = %d", tipos[2], tipos[0], tipos[1]);

    return 0;
}