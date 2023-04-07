#include <stdio.h>  

/* 
3. Faça um programa que receba um valor de n (inteiro) positivo maior que 1 e o número m, que
representa o número de vezes que a sequência deve-se repetir de 0 até n. Na primeira linha o número
deve ser em sequência crescente e, na segunda linha deve ser decrescente. Esta série deve alternar
até completar o número m de repetições inseridas pelo usuário (Utilize a estruturas for).
*/

int main(){
    
    int num, m, i, j, aux = 0;

    do {
        scanf("%d %d", &num, &m);
    } while (num <= 0);

    for (i = 0; i < m; i++) {

        if (i % 2 == 0) {

            aux = 0;
            for (j = 0; j <= num; j++) {
                printf("%d ", aux + j);
            }

        }else{

            aux = num;
            for (j = 0; j <= num; j++) {
                printf("%d ", aux - j);
            }
            
        }
        printf("\n");
    }

    return 0;
}
