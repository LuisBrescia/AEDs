#include <stdio.h>

/* 
9) Faça um programa que o usuário informa o valor a ser investido, uma taxa de juros mensal a 
ser  aplicada  ao  capital,  e  o  número  de  meses  que  irá  durar  a  aplicação.  
Ao  final  o  programa deverá mostrar: 
- o valor total acumulado ao final período. 
- o valor de juros rendidos. 
*/

// Obs: Para realizar juros compostos é necessário laço de repetição, então inferi que seriam juros simples.

int main (){

    float valorInvestido, juros, meses;
    scanf("%f %f %f", &valorInvestido, &juros, &meses);

    float taxa = 100.00/juros; // Porcentagem de juros
    float valorMensal = valorInvestido/taxa;
    float valorTotal = valorMensal * meses;

    printf("Valor total acumulado: %.2f\n", valorTotal);
    printf("Juros ao mes: %.2f\n", valorMensal);

    return 0;
}