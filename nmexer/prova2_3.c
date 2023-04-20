#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int calculaDigito(char vetor[], int *vogais){

    int i, numeros = 0;
    for(i = 0; i<= strlen(vetor); i++){
        if ((vetor[i] >= '0') && (vetor[i] <= '9')){
            numeros++;
        } else if ((vetor[i] == 'A') || (vetor[i] == 'E') || (vetor[i] == 'I') || (vetor[i] == 'O') || (vetor[i] == 'U')){
            *vogais = *vogais + 1;
        }
    }

    return numeros;
}

int main(){
    char* str[30];
    int vogais = 0;
    fflush(stdin);
    gets(str);

    printf("%s\n", str);

    printf("%d\n", calculaDigito(str, &vogais));
    printf("%d", vogais);

    return 0;
}


