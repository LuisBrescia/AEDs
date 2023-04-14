#include <stdio.h>

/* 
2. Escreva um programa que verifique a validade de uma senha fornecida pelo usuário. A 
senha válida é o número 1234. Devem ser impressas as seguintes mensagens:  
 ACESSO PERMITIDO - caso a senha seja válida.  
 ACESSO NEGADO - caso a senha seja inválida. 
*/

void main(){

    int senha;
    scanf("%d", &senha);

    if (senha == 1234){
        printf("ACESSO PERMITIDO");
        
    }else{
        printf("ACESSO NEGADO");
    }
}