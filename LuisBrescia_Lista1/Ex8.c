#include <stdio.h>

/*8) Faça um Programa em C que receba o número de horas trabalhadas de um funcionário e o 
valor do salário mínimo (informados pelo usuário), calcule e mostre o salário a receber seguindo 
estas regras: 
 
a) a hora trabalhada vale um décimo do salário mínimo 
b) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora 
trabalhada. 
c) o imposto equivale a 5% do salário bruto. 
d) o salário a receber equivale ao salário bruto menos o imposto. */

int main (){

    float horasTrabalhadas, salario;
    scanf("%f %f", &horasTrabalhadas, &salario);

    float horaValor = salario / 10.0;
    float salarioBruto = horasTrabalhadas * horaValor;
    float imposto = salarioBruto / 20;

    printf("%.2f", salarioBruto - imposto);

    return 0;
}