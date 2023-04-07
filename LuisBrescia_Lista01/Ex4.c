#include <stdio.h>

/* 4) Faça um algoritmo que solicita para o usuário um número inteiro n (digitado) e posteriormente 
o sistema mostra o sucessor de n (ex. se o usuário digitou 15, o sistema deverá imprimir 16). */

int main (){

    int n;

    scanf("%d", &n);
    printf("%d", ++n);  

    return 0;
}