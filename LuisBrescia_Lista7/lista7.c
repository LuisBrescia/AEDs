#include "lista7.h"

int main(){

    // Fa�a um switch que executa cada fun��o da lista 7
    // de acordo com a op��o do usu�rio

    int tam;
    int opcao;
    char str[30], str2[30];
    float turma[10];
    scanf("%d", &opcao);

    // Crie um switch do modelo lista6.c

    switch (opcao) {
        case 1:
            fflush(stdin);
            gets(str);
            printf("%d\n", LISTA7_Q1(str));
            break;

        case 2:
            tam = 10;
            preencheVetor(turma, tam);
            LISTA7_Q2(turma, tam);
            break;

        case 3:
            fflush(stdin);
            gets(str);
            fflush(stdin);
            gets(str2);
            LISTA7_Q3(str, str2);
            break;

        case 4:
            verificaPlaca();
            break;
        /*
        case 5:
            // Fa�a um programa que leia uma string e imprima a string sem os caracteres especiais.
            // Exemplo: Entrada: "Luis Brescia 123" Sa�da: "Luis Brescia 123"
            fflush(stdin);
            gets(str);
            printf("%s\n", str);
            LISTA7_Q5(str);
            printf("%s", str);
            break;

        case 6:
            // Fa�a um programa que leia uma string e imprima a string sem os caracteres especiais.
            // Exemplo: Entrada: "Luis Brescia 123" Sa�da: "Luis Brescia 123"
            fflush(stdin);
            gets(str);
            printf("%s\n", str);
            LISTA7_Q6(str);
            printf("%s", str);
            break;

        case 7:
            // Fa�a um programa que leia uma string e imprima a string sem os caracteres especiais.
            // Exemplo: Entrada: "Luis Brescia 123" Sa�da: "Luis Brescia 123"
            fflush(stdin);
            gets(str);
            printf("%s\n", str);
            LISTA7_Q7(str);
            printf("%s", str);
            break;

        case 8:
            // Fa�a um programa que leia uma string e imprima a string sem os caracteres especiais.
            // Exemplo: Entrada: "Luis Brescia 123" Sa�da: "Luis Brescia 123"
            fflush(stdin);
            gets(str);
            printf("%s\n", str);
            LISTA7_Q8(str);
            printf("%s", str);
            break;

        case 9:
            // Fa�a um programa que leia uma string e imprima a string sem os caracteres especiais.
            // Exemplo: Entrada: "Luis Brescia 123" Sa�da: "Luis Brescia 123"
            fflush(stdin);
            gets(str);
            printf("%s\n", str);
            LISTA7_Q9(str);
            printf("%s", str);
            break;

        case 10:
            // Fa�a um programa que leia uma string e imprima a string sem os caracteres especiais.
            // Exemplo: Entrada: "Luis Brescia 123" Sa�da: "Luis Brescia 123"
            fflush(stdin);
            gets(str);
            printf("%s\n", str);
            LISTA7_Q10(str);
            printf("%s", str);
            break;

        case 11:
            // Fa�a um programa que leia uma string e imprima a string sem os caracteres especiais.
            // Exemplo: Entrada: "Luis Brescia 123" Sa�da: "Luis Brescia 123"
            fflush(stdin);
            gets(str);
            printf("%s\n", str);
            LISTA7_Q11(str);
            printf("%s", str);
            break;

        case 12:
            // Fa�a um programa que leia uma string e imprima a string sem os caracteres especiais.
            // Exemplo: Entrada: "Luis Brescia 123" Sa�da: "Luis Brescia 123"
            fflush(stdin);
            gets(str);
            printf("%s\n", str);
            LISTA7_Q12(str);
            printf("%s", str);
            break;
        */
        default:
            printf("Opcao invalida");
            break;
    }

    return 0;
}
