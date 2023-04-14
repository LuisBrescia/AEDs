#include <stdio.h>

/* 
8. Ler os lados de um triângulo. Verificar e informar se os valores lidos consistem, de fato, em 
um triângulo. Caso seja um triângulo válido, calcular e informar se é ele equilátero, isóscele ou 
escaleno. 
*/

void main(){

    int ladoA, ladoB, ladoC;
    scanf("%d %d %d", &ladoA, &ladoB, &ladoC);

    if ( (ladoA <= (ladoB + ladoC)) && (ladoB <= (ladoA + ladoC)) && (ladoC <= (ladoB + ladoA)) ){
        if (ladoA == ladoB && ladoB == ladoC) {
            printf("Equilatero\n");
        } else if (ladoA != ladoB && ladoB != ladoC){
            printf("Escaleno\n");
        } else {
            printf("Isosceles");
        }
    }else{
        printf("Valor invalido\n");
    }
}
