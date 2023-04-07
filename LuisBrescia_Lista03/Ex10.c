#include <stdio.h>  

/* 
10. Faça um programa para ler o saldo inicial de uma conta de um banco digital. A seguir ler um
número indeterminado de movimentações financeiras indicando respectivamente o tipo da
operação (codificado da seguinte forma: 1. Depósito em dinheiro, 2. Retirada em dinheiro, 3
Recebimento em PIX, 4 Transferência em PIX, 5.Fim) e o valor. Quando for informado para o
tipo, o código 5, o programa deve ser encerrado e impresso o saldo final da conta com as seguintes
mensagens: CONTA ZERADA, CONTA ESTOURADA (se o saldo for negativo) ou CONTA
PREFERENCIAL (se o saldo for positivo), número total de PIX recebido, número total de PIX
enviado, número total de saques e número total de depósito em dinheiro (Utilize a estrutura do-
while).
*/

int main(){

    float saldo, valor;
    int movimento = 0, tipo[4] = {0, 0, 0, 0};

    scanf("%f", &saldo);

    do {

        scanf("%d", &movimento);

        switch (movimento) {
        case 1:
            printf("Digite o valor em dinheiro para deposito:\n");
            scanf("%f", &valor);
            saldo += valor;
            printf("Valor atual: %.2f\n", saldo);
            tipo[0]++;
            break;
        case 2:
            printf("Digite o valor em dinheiro para retirada:\n");
            scanf("%f", &valor);
            saldo -= valor;
            printf("Valor atual: %.2f\n", saldo);
            tipo[1]++;
            break;
        case 3:
            printf("Recebimento Pix\n");
            scanf("%f", &valor);
            saldo += valor;
            printf("Valor atual: %.2f\n", saldo);
            tipo[2]++;
            break;
        case 4:
            printf("Transferencia Pix\n");
            scanf("%f", &valor);
            saldo -= valor;
            printf("Valor atual: %.2f\n", saldo);
            tipo[3]++;
            break;
        case 5:
            printf("Programa finalizado\n");
            break;
        default:
            printf("Invalido\n");
            break;
        }

    } while (movimento != 5);

    if (saldo == 0) {
        printf("CONTA ZERADA\n");
    }else if(saldo < 0) {
        printf("CONTA ESTOURADA\n");
    }else{
        printf("CONTA PREFERENCIAL\n");
    }
    
    printf("DEPOSITOS: %d\nRETIRADAS: %d\nPIX RECEBIDOS: %d\nPIX ENVIADOS: %d\n", tipo[0], tipo[1], tipo[2], tipo[3]);

    return 0;
}