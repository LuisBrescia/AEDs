#include <stdio.h>

/* 
11. Dado um país A, com 5000000 de habitantes e uma taxa de natalidade de 3% ao ano, e um país
B com 7000000 de habitantes e uma taxa de natalidade de 2% ao ano, escrever um programa
em que seja capaz de calcular e mostrar o tempo necessário para que a população do país A
ultrapasse a população do país B. (Utilize a estrutura while).
while).
*/

int main(){

    int paisA = 5000000, paisB = 7000000, temp = 0, anos = 0;

    while (paisA <= paisB) {

        temp = paisA;
        temp *= 0.03;
        paisA += temp;

        temp = paisB;
        temp *= 0.02;
        paisB += temp;

        anos++;

        printf("%d menor ou igual %d\n", paisA, paisB);
    }
    
    printf("%d\n", anos);

    return 0;
}