#include "lista7.h"

int main(){

    // Faça um switch que executa cada função da lista 7
    // de acordo com a opção do usuário

    int opcao;
    scanf("%d", &opcao);

    // Crie um switch do modelo lista6.c

    switch (opcao) {
        case 1:
            // Faça um programa que leia uma string e imprima a string sem as vogais.
            // Exemplo: Entrada: "Luis Brescia" Saída: "Ls Brsc"
            char str[30];
            fflush(stdin);
            gets(str);
            printf("%s\n", str);
            removeVogais(str);
            printf("%s", str);
            break;
        
        case 2:
            // Faça um programa que leia uma string e imprima a string sem as consoantes.
            // Exemplo: Entrada: "Luis Brescia" Saída: "ui eia"
            char str2[30];
            fflush(stdin);
            gets(str2);
            printf("%s\n", str2);
            removeConsoantes(str2);
            printf("%s", str2);
            break;

        case 3:
            // Faça um programa que leia uma string e imprima a string sem os números.
            // Exemplo: Entrada: "Luis Brescia 123" Saída: "Luis Brescia "
            char str3[30];
            fflush(stdin);
            gets(str3);
            printf("%s\n", str3);
            removeNumeros(str3);
            printf("%s", str3);
            break;

        case 4:
            // Faça um programa que leia uma string e imprima a string sem os espaços.
            // Exemplo: Entrada: "Luis Brescia" Saída: "LuisBrescia"
            char str4[30];
            fflush(stdin);
            gets(str4);
            printf("%s\n", str4);
            removeEspacos(str4);
            printf("%s", str4);
            break;

        case 5:
            // Faça um programa que leia uma string e imprima a string sem os caracteres especiais.
            // Exemplo: Entrada: "Luis Brescia 123" Saída: "Luis Brescia 123"
            char str5[30];
            fflush(stdin);
            gets(str5);
            printf("%s\n", str5);
            removeCaracteresEspeciais(str5);
            printf("%s", str5);
            break;

        case 6:
            // Faça um programa que leia uma string e imprima a string sem os caracteres especiais.
            // Exemplo: Entrada: "Luis Brescia 123" Saída: "Luis Brescia 123"
            char str6[30];
            fflush(stdin);
            gets(str6);
            printf("%s\n", str6);
            removeCaracteresEspeciais(str6);
            printf("%s", str6);
            break;

        case 7:
            // Faça um programa que leia uma string e imprima a string sem os caracteres especiais.
            // Exemplo: Entrada: "Luis Brescia 123" Saída: "Luis Brescia 123"
            char str7[30];
            fflush(stdin);
            gets(str7);
            printf("%s\n", str7);
            removeCaracteresEspeciais(str7);
            printf("%s", str7);
            break;

        case 8:
            // Faça um programa que leia uma string e imprima a string sem os caracteres especiais.
            // Exemplo: Entrada: "Luis Brescia 123" Saída: "Luis Brescia 123"
            char str8[30];
            fflush(stdin);
            gets(str8);
            printf("%s\n", str8);
            removeCaracteresEspeciais(str8);
            printf("%s", str8);
            break;

        case 9:
            // Faça um programa que leia uma string e imprima a string sem os caracteres especiais.
            // Exemplo: Entrada: "Luis Brescia 123" Saída: "Luis Brescia 123"
            char str9[30];
            fflush(stdin);
            gets(str9);
            printf("%s\n", str9);
            removeCaracteresEspeciais(str9);
            printf("%s", str9);
            break;

        case 10:
            // Faça um programa que leia uma string e imprima a string sem os caracteres especiais.
            // Exemplo: Entrada: "Luis Brescia 123" Saída: "Luis Brescia 123"
            char str10[30];
            fflush(stdin);
            gets(str10);
            printf("%s\n", str10);
            removeCaracteresEspeciais(str10);
            printf("%s", str10);
            break;

        case 11:
            // Faça um programa que leia uma string e imprima a string sem os caracteres especiais.
            // Exemplo: Entrada: "Luis Brescia 123" Saída: "Luis Brescia 123"
            char str11[30];
            fflush(stdin);
            gets(str11);
            printf("%s\n", str11);
            removeCaracteresEspeciais(str11);
            printf("%s", str11);
            break;

        case 12:
            // Faça um programa que leia uma string e imprima a string sem os caracteres especiais.
            // Exemplo: Entrada: "Luis Brescia 123" Saída: "Luis Brescia 123"
            char str12[30];
            fflush(stdin);
            gets(str12);
            printf("%s\n", str12);
            removeCaracteresEspeciais(str12);
            printf("%s", str12);
            break;

        default:
            printf("Opcao invalida");
            break;
    }
    
    return 0;
}


