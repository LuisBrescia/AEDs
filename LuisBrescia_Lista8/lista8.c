#include "lista8.h"

int main() {

    int i = 0, j = 0;
    int** matrizA = criaMatriz();
    int** matrizB = criaMatriz();
    int* vetor = (int*) malloc(sizeof(int) * C);

    exibeMatriz(matrizA);
    escadaUp(matrizA);

    int opcao;
    do {
        system("cls");
        printf("\nMenu de Exercicios!\n"
        "1 - Maior elemento e sua posicao\n"
        "2 - Soma da Diagonal principal\n"
        "3 - Soma matrizes\n"
        "4 - Multiplica matrizes\n"
        "5 - Verifica matriz permutacao\n"
        "6 - Verifica matriz quadrada\n"
        "7 - Bagunca matriz segundo comandos\n"
        "8 - Copia 1 linha e multiplica ela pelas respectivas linhas \n"
        "9 - Escada subindo \n"
        "10 - Escada descendo \n"
        "0 - Sair \n"
        "-1 - Exibe Matriz \n"
        "Digite um numero da opcao acima: \n");
        scanf("%d", &opcao);
        switch (opcao) {
        
        case -1:
            exibeMatriz(matrizA);
            break;

        case 1:
            maiorElemento(matrizA);
            break;

        case 2:
            diagonalMatriz(matrizA, vetor);
            break;

        case 3:
            mesclaMatriz(matrizA, matrizB);
            break;

        case 4:
            produtoMatriz(matrizA, matrizB);
            break;

        case 5:
            permutaMatriz(matrizA);
            break;

        case 6:
            quadradoMagico(matrizA);
            break;

        case 7:
            matrizZ(matrizA);
            break;

        case 8: 
            matrizMultiplicadora(matrizA);
            break;

        case 9:
            escadaDown(matrizA);
            break;

        case 10:
            escadaUp(matrizA);
            break;

        case 0: 
            printf("\nAte logo\n!");
	    	break;

        default:
        printf("Opcao invalida");
        }

        system("pause");

    } while (opcao != 0);

    return 0;
}