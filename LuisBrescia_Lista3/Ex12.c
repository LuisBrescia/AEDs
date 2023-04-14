#include <stdio.h>

/* 
12 Faça um programa que leia a nota final da disciplina AED I de 10 alunos. Ao final, informar na
tela do monitor (Utilize a estrutura for):
• a média das notas;
• o valor da maior nota;
• o valor da menor nota;
• número de alunos aprovados, ou seja, tiveram notas superior ou igual a 60;
• número de alunos reprovados, ou seja, tiveram notas inferior a 60.
*/

int main(){

    float notas[10] = {0}, maior = 0, menor = 1000, media = 0;
    int i = 0, aprovados = 0, reprovados = 0;
    

    while (i < 10) {

        scanf("%f", &notas[i]);

        if (notas[i] >= 60){
            aprovados++;
        }else{
            reprovados++;
        }
        
        media += notas[i];

        if (notas[i] > maior) {
            maior = notas[i];
        }
        
        if (notas[i] < menor) {
            menor = notas[i];
        }

        i++;
    }

    printf("Media das notas = %.2f\n Maior nota = %.2f\n Menor nota = %.2f\n Aprovados: %d\n Reprovados: %d\n", 
    media/10, maior, menor, aprovados, reprovados);

    return 0;
}