#include "lista7.h"
#define TAM 10

int main(){

    // Fa�a um switch que executa cada fun��o da lista 7
    // de acordo com a op��o do usu�rio
    int opcao, vogais[5];
    char **string, c;
    float vetor[10], vetor2[10], dias[31];
    float* vetorNovo;

    string = (char**) malloc(3 * sizeof(char*));
    for (int i = 0; i < 3; i++) { string[i] = (char*) malloc(30 * sizeof(char)); }

    do{ 
        printf("Digite a funcao que deseja usar:\n");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1:  
            fflush(stdin);
            fgets(string[0], 30, stdin);
            printf("%d\n", LISTA7_Q1(string[0]));
            break;

        case 2:
            LISTA7_Q2(vetor, TAM);
            break;

        case 3:
            fflush(stdin);
            fgets(string[0], 30, stdin);
            fflush(stdin);
            fgets(string[1], 30, stdin);
            LISTA7_Q3(string[0], string[1]);
            break;

        case 4:
            LISTA7_Q4();
            break;
        
        case 5:
            LISTA7_Q5();
            break;

        case 6:
            preencheVetor(vetor, TAM);
            vetorNovo = LISTA7_Q6(vetor, TAM);
            break;

        case 7:
            fflush(stdin);
            fgets(string[0], 30, stdin);
            scanf("%c", &c);
            printf("%d\n", LISTA7_Q7(string[0], c));
            break;

        case 8:
            LISTA7_Q8(vetor, vetor2, TAM);
            break;

        case 9:
            // ? Essas linhas são para remover o \n do fgets
            fflush(stdin);
            fgets(string[0], 30, stdin);
            string[0][strlen(string[0]) - 1] = '\0';
            fgets(string[1], 30, stdin);
            fgets(string[2], 30, stdin);
            string[1][strlen(string[1]) - 1] = '\0';

            LISTA7_Q9(string);
            break;

        case 10:
            fflush(stdin);
            fgets(string[0], 30, stdin);
            LISTA7_Q10(string[0]);
            break;

        case 11:
            preencheVetor(dias, 31);
            LISTA7_Q11(dias);
            break;

        case 12:
            vogais[0] = vogais[1] = vogais[2] = vogais[3] = vogais[4] = 0;
            fflush(stdin);
            fgets(string[0], 30, stdin);
            LISTA7_Q12(string[0], vogais);
            break;

        case 0:
            printf("PROGRAMA FINALIZADO\n");
            break;

        default:
            printf("INEXISTENTE\n");
            break;
        }
    }while(opcao != 0);

    return 0;
}
