#include <stdio.h>

/* 
3. Construa um algoritmo onde o usuário informar uma data (dia, mês e ano) e verifica se é 
uma data válida em 2022. Exemplos:  
 -30/08/2022 é uma data válida em 2022.  
 -31/Fev/2005 não é uma data válido, pois não fevereiro não tem 31 dias e o ano é diferente 
de 2022.  
*/

void main(){

    int dia, mes, ano;
    scanf("%d %d %d", &dia, &mes, &ano);

    if (ano == 2022){
        if (mes == 2) {
            if (dia <= 28) {
                printf("%d/%d/%d eh uma data valida.", dia, mes, ano);
            }else{
                printf("%d/%d/%d nao eh uma data valida.", dia, mes, ano); 
            }
        } else if ( (((mes <= 7) && (mes % 2 != 0)) || ((mes >= 8) && (mes % 2 == 0))) && dia <= 31) {
            printf("%d/%d/%d eh uma data valida.", dia, mes, ano);
        } else if ( (((mes <= 7) && (mes % 2 == 0)) || ((mes >= 8) && (mes % 2 != 0))) && dia <= 30) {
            printf("%d/%d/%d eh uma data valida.", dia, mes, ano);
        }
    }else{
        printf("%d/%d/%d nao eh uma data valida.", dia, mes, ano);
    }
}
