#include <stdio.h>  

/* 
9. Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa.
Para isto, mandou digitar uma linha para cada mercadoria com o preço de compra e de venda de
cada uma. A última linha contém preço de compra igual a 0. Escreva um programa que (Utilize a
estrutura do- while):
*/

int main(){

    float pcompra = 0, total_compra = 0, pvenda = 0, total_venda = 0, lucro = 0;
    int razao[3] = {0, -1, 0};

    do {

        lucro += pvenda - pcompra;
        total_compra += pcompra;
        total_venda += pvenda;

        if (lucro < pcompra/10) {
            razao[0] += 1;
        } else if (lucro <= pcompra/5) {
            razao[1] += 1;
        } else {
            razao[2] += 1;
        }
    
        do {

        scanf("%f %f", &pcompra, &pvenda);
        if (pcompra > pvenda){

            printf("Invalido\n");

        }

        } while (pcompra > pvenda);        

    } while (pcompra != 0);
    
    printf("Foram gastos um total de %.2f em compras, foi arrecadado um total de %.2f em vendas, e foi obtido lucro de %.2f.\n", 
    total_compra, total_venda, lucro);

    printf("Durante as vendas o lucro foi menor que 10%% %d vezes, entre 10%% e 20%% em %d vezes, e maior que 20%% em %d vezes.\n", 
    razao[0], razao[1], razao[2]);

    return 0;
}