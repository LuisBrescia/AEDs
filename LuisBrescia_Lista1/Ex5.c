#include <stdio.h>

/*5)  Faça  um  algoritmo  que  solicita  o  valor  de  3  notas  (n1,  n2  e  n3)  e  depois  mostra:  
a  soma,  a  média e o produto das notas. */

int main (){

    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("Soma = %d ", n1 + n2 + n3);
    printf("Produto = %d ", n1 * n2 * n3);
    printf("Media = %d ", (n1 + n2 + n3) / 3);

    return 0;
}