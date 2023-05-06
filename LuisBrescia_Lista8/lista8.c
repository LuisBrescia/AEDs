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
        "1 - Questao 1 \n2 - Questao 2 \n"
        "3 - Questao 3 \n4 - Questao 4 \n"
        "5 - Questao 5 \n6 - Questao 6 \n"
        "7 - Questao 7 \n8 - Questao 8 \n"
        "9 - Questao 9 \n10 - Questao 10 \n"
        "0 - Sair \n-1 - Exibe Matriz \n"
        "Digite um numero da opcao acima: \n");
        scanf("%d", &opcao);
        switch (opcao) {
        
        case -1:
            exibeMatriz(matrizA);
            break;

        case 1:
            printf("%d\n", maiorElemento(matrizA));
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