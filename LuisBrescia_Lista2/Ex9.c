#include <stdio.h>

/* 
9. Construa um algoritmo que, a partir do peso e altura informados pelo usuário, calcule e 
apresente o IMC de uma pessoa e a sua classificação conforme tabela a seguir: 
*/

void main(){

    float peso, altura;
    scanf("%f %f", &peso, &altura);
    float imc = peso *(altura * altura);

    if (imc <= 18.5){
        printf("Abaixo do peso");
    }else if(imc <= 25){
        printf("Peso ideal (Parabens)");
    }else if(imc <= 30){
        printf("Levemente acima da peso");
    }else if(imc <= 35){
        printf("Obesidade grau I");
    }else if(imc < 40){
        printf("Obesidade grau II (severa)");
    }else{
        printf("Obesidade morbida");
    }
}
