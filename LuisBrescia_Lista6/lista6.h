#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 1. Crie um procedimento que recebe três números por parâmetro e “retorne” 
por referência o maior e menor. */
void func1 (float a, float b, float c, float *maior, float *menor) {

    if ( a > b && a > c ) {

        *maior = a;

        if (b < c) {        
            *menor = b;
        } else {
            *menor = c;
        }        

    } else if ( b > a && b > c ) {

        *maior = b;

        if (a < c) {        
            *menor = a;
        } else {
            *menor = c;
        }

    } else {

        *maior = c;

        if (a < b) {        
            *menor = a;
        } else {
            *menor = b;
        }
    }
}

/* 2. Crie um procedimento que recebe três valores boleanos (A, B, C) e “retorne” por referência o
valor verdade da operação ⌐ (A v ⌐ B ^ C). */
void func2 (int a, int b, int c, int *resultado) {
    *resultado = !(a || !(b && c));
}

/* 3. Crie uma função que recebe 3 números como parâmetro de entrada, calcule e retorne e a média
dos números (retorno de função usando return) e o maior valor (usando parâmetro por referência). */
float func3 (float a, float b, float c, float *maior) {
    
    float media = (a + b + c) / 3.0;

    if (a > b && a > c) {
        *maior = a;
    } else if (b > a && b > c) {
        *maior = b;
    } else {
        *maior = c;
    }

    return media;
}

/*4. Faça um procedimento que leia 3 números inteiro (a, b, c). Para cada valor lido, mostre o nome
da variável, o endereço e o seu valor, conforme exemplificado a seguir:*/
void leNumero () {
    int a, b, c;
    printf("Digite 3 numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("NAME\tADREESS\t\tVALOR\n");
    printf("a\t0x%x\t%d\n", &a, a);
    printf("b\t0x%x\t%d\n", &b, b);
    printf("c\t0x%x\t%d\n", &c, c);
}

/*5. Faça um procedimento que armazene em um vetor 3 valores inteiros digitados por um usuário.
Para cada valor lido, mostre a posição no vetor, o endereço e o seu valor, conforme
exemplificado a seguir:*/
void leVetor () {
    int vetor[3];
    printf("Digite 3 numeros inteiros: ");
    scanf("%d %d %d", &vetor[0], &vetor[1], &vetor[2]);
    printf("NAME\tADREESS\t\tVALOR\n");
    printf("a\t0x%x\t%d\n", &vetor[0], vetor[0]);
    printf("b\t0x%x\t%d\n", &vetor[1], vetor[1]);
    printf("c\t0x%x\t%d\n", &vetor[2], vetor[2]);
}

/*6. Faça um algoritmo que declare uma variável e mostre o valor, endereço e tamanho na memória
para cada um dos seguintes tipos: char, int, float, double, int *, char *, float *, double *.*/
void tipoInfo () {
    int i;
    char c;
    float f;
    double d;
    int *ip;
    char *cp;
    float *fp;
    double *dp;

    printf("NAME\tADREESS\t\tVALOR\tSIZE\n");
    printf("O Endereco da variavel c  e 0x%x.\t Essa variavel ocupa %d bytes.\n", &c, sizeof(c));
    printf("O Endereco da variavel i  e 0x%x.\t Essa variavel ocupa %d bytes.\n", &i, sizeof(i));
    printf("O Endereco da variavel f  e 0x%x.\t Essa variavel ocupa %d bytes.\n", &f, sizeof(f));
    printf("O Endereco da variavel d  e 0x%x.\t Essa variavel ocupa %d bytes.\n", &d, sizeof(d));
    printf("O Endereco da variavel cp e 0x%x.\t Essa variavel ocupa %d bytes.\n", &cp, sizeof(cp));
    printf("O Endereco da variavel ip e 0x%x.\t Essa variavel ocupa %d bytes.\n", &ip, sizeof(ip));
    printf("O Endereco da variavel fp e 0x%x.\t Essa variavel ocupa %d bytes.\n", &fp, sizeof(fp));
    printf("O Endereco da variavel dp e 0x%x.\t Essa variavel ocupa %d bytes.\n", &dp, sizeof(dp));
}

/*7. Escreva uma função chamada divisores que:
• Recebe como parâmetro um número inteiro n por valor e dois números inteiros max e min
por referência;
• Retorna 0 se n é primo e 1 caso contrário;
• Se n não for primo, as variáveis max e min devem assumir os valores do maior e do menor
divisores inteiros de n, respectivamente. Desconsidere o número 1 e o próprio número n.*/

int divisores (int n, float *max, float *min) {

    int i, cont = 0;

    for (i = 2; i <= n/2 ; i++) {
        if (n % i == 0) {
            *min = (cont == 0) ? i : *min;
            cont++;
            *max = i;
        }
    }

    if (cont == 0) {
        return 0;
    } else {
        return 1;
    }
}
