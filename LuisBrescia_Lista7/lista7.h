#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// * Funções

// Volta a soma de todos os números de 1 até n
int recursivaSoma(int n){
    if(n == 0){
        return 0;
    }else{
        return n + recursivaSoma(n-1);
    }
}

/*1. Faça uma função que receba por parâmetro uma string e retorna o número de caracteres
alfanuméricos. (LISTA7Q1)*/
int LISTA7_Q1(char *str){

    int i, cont = 0;

    for(i = 0; i < strlen(str); i++){
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
            cont++;
        }
    }
    return cont;
}

/*2. Faça um procedimento que receba e preencha um vetor com as notas de uma turma de 10 alunos.
Faça um outro procedimento que receba um vetor preenchido com as notas, calcule a média da
turma e conte quantos alunos obtiveram nota acima da média. Esse procedimento deve exibir a
média (duas casas depois da virgula) e o resultado da contagem. Faça um programa que declare as
devidas variáveis e acione os procedimentos. (LISTA7Q2)*/
void preencheVetor (float* vetor, int tam) {
    srand(0);
    for (int i = 0; i < tam; i++){
        vetor[i] = rand() % 11;
        printf("%.2f\n", vetor[i]);
    }
}

void LISTA7_Q2(float *vetor, int tam){

    int i, cont = 0;
    float media = 0;

    for(i = 0; i < tam; i++){
        media += vetor[i];
    }
    media = media / tam;

    for(i = 0; i < tam; i++){
        if(vetor[i] > media){
            cont++;
        }
    }
    printf("Media: %.2f\n", media);
    printf("Alunos acima da media: %d\n", cont);
}

/*3. Faça uma função que receba duas frases como parâmetro e coloque todas as letras em caixa alta
(maiúscula). (LISTA7Q3)*/
void LISTA7_Q3(char *str1, char *str2){

    int i;

    for(i = 0; i < strlen(str1); i++){
        if(str1[i] >= 'a' && str1[i] <= 'z'){
            str1[i] = str1[i] - 32;
        }
    }
    for(i = 0; i < strlen(str2); i++){
        if(str2[i] >= 'a' && str2[i] <= 'z'){
            str2[i] = str2[i] - 32;
        }
    }
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
}

/*4. O novo padrão de placas da Mercosul adotado pelos automóveis brasileiros possuem os seguintes
requisitos: a) contém 7 caracteres. b) A sequência alfanumérica é intercalada: LLLNLNN – sendo
L para letra e N para número c) todas as letras são maiúsculas. Assim sendo, deseja-se criar um
sistema para validação das placas. Crie uma função booleana que receba como parâmetro uma
string e verifique se a placa está no padrão. Crie um programa que receba inúmeras placas se a
placa esteja correta deve imprimir "correto" ou "incorreto" e encerre o processo quando o valor da
string for "fechar". (LISTA7Q4)*/
void LISTA7_Q4(char *str){

    int i;

    if(strlen(str) != 7){
        return 0;
    }
    for(i = 0; i < strlen(str); i++){
        if(i == 3){
            if(str[i] >= '0' && str[i] <= '9'){
                return 0;
            }
        }else{
            if(str[i] >= 'A' && str[i] <= 'Z'){
                return 0;
            }
        }
    }
    return 1;
}

void verificaPlaca(){

    char placa[7];
    int resultado;

    do {
        fflush(stdin);
        gets(placa);
        resultado = 1;
        if(resultado == 1) {
            printf("correto\n");
        } else {
            printf("incorreto\n");
        }
    } while (strcmp(placa, "fechar"));
}

/*5. Faça um procedimento que leia infinitos nomes e exiba o primeiro e o último nome em ordem
alfabética. Utilize como flag, a palavra "stop", para finalizar a leitura dos nomes. Faça um programa
que declare as devidas variáveis e acione o procedimento (LISTA7Q5)*/
void LISTA7_Q5(){

    char nome[50], primeiro[50], ultimo[50];

    printf("Digite um nome: ");
    scanf("%s", nome);
    strcpy(primeiro, nome);
    strcpy(ultimo, nome);

    while(strcmp(nome, "stop") != 0){
        if(strcmp(nome, primeiro) < 0){
            strcpy(primeiro, nome);
        }
        if(strcmp(nome, ultimo) > 0){
            strcpy(ultimo, nome);
        }
        printf("Digite um nome: ");
        scanf("%s", nome);
    }
    printf("Primeiro nome: %s\n", primeiro);
    printf("Ultimo nome: %s\n", ultimo);
}

/*6. Faça um procedimento que preencha um vetor X de 10 elementos. A seguir faça uma função que
receba um vetor preenchido, teste e copie todos os valores negativos deste vetor para um novo
vetor (sem deixar elementos vazios entre os valores copiados), retornando este vetor como
resultado. Faça um procedimento que recebe e exibe o conteúdo de um vetor. Faça um programa
que faça as devidas declarações e acione os módulos para exemplificar o seu uso (LISTA7Q6).*/
void LISTA7_Q6(float *vetor, int tam){

    int i, j = 0;
    float *novo = malloc(tam * sizeof(float));

    for(i = 0; i < tam; i++){
        if(vetor[i] < 0){
            novo[j] = vetor[i];
            j++;
        }
    }
    printf("Vetor novo: ");
    for(i = 0; i < j; i++){
        printf("%.2f ", novo[i]);
    }
    printf("\n");
}

/*7. Faça uma função que receba como parâmetro uma string e um caractere e, retorne o número total
de ocorrência do caractere recebido como parâmetro. Atenção não deve haver diferença entre letras
maiúsculas e minúsculas (LISTA7Q7).*/
int LISTA7_Q7(char *str, char c){

    int i, cont = 0;

    for(i = 0; i < strlen(str); i++){
        if(str[i] == c){
            cont++;
        }
    }
    return cont;
}

/*8. Faça um procedimento que preencha 2 vetores X e Y com 10 elementos cada um (ocupando as
posições de 0 a 9 em cada vetor). Faça um outro procedimento que receba dois vetores preenchidos
e gera um novo vetor com os elementos desses 2 vetores intercalados de tal forma que nas posições
ímpares do novo vetor estejam os elementos do primeiro vetor e nas posições pares os elementos
do segundo vetor recebido por parâmetro. Faça um procedimento que receba e exiba o conteúdo
de um vetor. (LISTA7Q8)*/
void LISTA7_Q8(int *vetor1, int *vetor2, int tam){

    int i, j = 0;

    int *novo = malloc(sizeof(int) * tam*2);

    for(i = 0; i < tam*2; i++){
        if(i % 2 == 0){
            novo[i] = vetor1[j];
        }else{
            novo[i] = vetor2[j];
            j++;
        }
    }
    printf("Vetor novo: ");
    for(i = 0; i < tam*2; i++){
        printf("%d ", novo[i]);
    }
    printf("\n");
}

/*9. Crie um procedimento que receba três strings e concatenação delas e exiba o resultado. Faça um
programa que faça as devidas declarações e acione os módulos para exemplificar o seu uso
(LISTA7Q9)*/
void LISTA7_Q9(char *str1, char *str2, char *str3){

    char str[100];

    strcpy(str, str1);
    strcat(str, str2);
    strcat(str, str3);

    printf("String concatenada: %s\n", str);
}

/*10. Faça uma função que receba uma frase de string como parâmetro e elimine, caso houver uma
sequência de espaços contínuos indesejados. Faça um programa que faça as devidas declarações e
acione os módulos para exemplificar o seu uso (LISTA7Q10)*/
void LISTA7_Q10(char *str){

    int i, j = 0;
    char str2[100];

    for(i = 0; i < strlen(str); i++){
        if(str[i] != ' '){
            str2[j] = str[i];
            j++;
        }else{
            if(str[i+1] != ' '){
                str2[j] = str[i];
                j++;
            }
        }
    }
    str2[j] = '\0';
    strcpy(str, str2);
}

/*11. Em uma cidade, sabe-se hipoteticamente que, em janeiro de 2023, não ocorreu temperatura
inferior a 15°C, nem superior a 40°C. Faça um programa que armazene as temperaturas de cada
dia de janeiro em um vetor (de 31 posições), calcule e imprima:
• A menor e a maior temperatura ocorrida (duas casas decimais depois da virgula);
• A temperatura média (duas casas decimais depois da virgula);
• O número de dias nos quais a temperatura foi inferior à temperatura média.
(LISTA7Q11)*/
void LISTA7_Q11(float *temperaturas, int tam){

    int i, cont = 0;
    float menor = 40, maior = 15, media = 0;

    for(i = 0; i < tam; i++){
        if(temperaturas[i] < menor){
            menor = temperaturas[i];
        }
        if(temperaturas[i] > maior){
            maior = temperaturas[i];
        }
        media += temperaturas[i];
    }
    media = media / tam;
    for(i = 0; i < tam; i++){
        if(temperaturas[i] < media){
            cont++;
        }
    }
    printf("Menor temperatura: %.2f\n", menor);
    printf("Maior temperatura: %.2f\n", maior);
    printf("Temperatura media: %.2f\n", media);
    printf("Temperaturas abaixo da media: %d\n", cont);
}

/*12. Crie uma função que receba uma string e um vetor de inteiros com tamanho 5, em cada posição
é referente a uma vogal. Essa função deve preencher o vetor de inteiro com o número de vogais
"a", "e", "i", "o" e "u" em cada posição. Atenção não deve haver diferença entre letras maiúsculas
e minúsculas. Ao final do programa deve exibir o número de vogais em cada posição
(LISTA7Q12) */
void LISTA7_Q12(char *str, int *vogais){

    int i;

    for(i = 0; i < strlen(str); i++){
        if(str[i] == 'a' || str[i] == 'A'){
            vogais[0]++;
        }
        if(str[i] == 'e' || str[i] == 'E'){
            vogais[1]++;
        }
        if(str[i] == 'i' || str[i] == 'I'){
            vogais[2]++;
        }
        if(str[i] == 'o' || str[i] == 'O'){
            vogais[3]++;
        }
        if(str[i] == 'u' || str[i] == 'U'){
            vogais[4]++;
        }
    }
}
