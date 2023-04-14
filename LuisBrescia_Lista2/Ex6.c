#include <stdio.h>

/* 
6. Faça um programa que leia um ponto cartesiano (dois valores numéricos X e Y) e mostre em 
qual quadrante o ponto se encontra. 
*/

void main(){

    int x, y, aux;
    do {
        scanf("%d %d", &x, &y);
    } while (y == 0);
    
    if(x > 0) {
        if (y > 0) {
            aux = 1;
        }else{
            aux = 4;
        }   
    }else{
        if (y > 0) {
            aux = 2;
        }else{
            aux = 3;
        } 
    }

    printf("Quadrante: %d", aux);
}
