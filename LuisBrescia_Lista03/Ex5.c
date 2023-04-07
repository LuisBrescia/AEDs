#include <stdio.h>  
#include <stdlib.h>

/* 
5. Adaptar o programa acima para que ele calcule o percentual dos valores positivos, negativos e
zeros em relação ao total de valores fornecidos. O programa encerra quando o usuário digita o
valor “-9999”. (Utilize a estrutura while).
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

    float quantidade = tipos[0] + tipos[1] + tipos[2];
    
    printf("Positivos = %.2f%%, Negativos = %.2f%%, Zeros = %.2f%%", (tipos[2]/quantidade) * 100, (tipos[0]/quantidade) * 100, (tipos[1]/quantidade) * 100);

    return 0;
}