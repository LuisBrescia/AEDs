#include "lista6.h"

void main() {

    int func, num, aux = 0, temp = 0; 
    float a, b, c, d, e, maior, menor;
    int x, y, z, resultado = 0;

    do{
        printf("DIGITE A FUNCTION QUE DESEJA UTILIZAR:\n1 - maiorMenor()" 
        "\n2 - boolean()\n3 - maiorMedia\n4 - leNumero()\n5 - leVetor()\n" 
        "6 - tipoInfo()\n7 - divisores()\n8 - Sair\n");
        scanf("%d", &func);
        system("cls");

        switch (func) {

            case 1:
                printf("Function maiorMenor()\n");
                scanf("%f %f %f", &a, &b, &c);
                func1(a, b, c, &maior, &menor);
                printf("Maior: %.2f\nMenor: %.2f\n", maior, menor);
                system("pause");
                break;

            case 2:
                printf("Function bool()\n");
                scanf("%d %d %d", &x, &y, &z);
                func2(x, y, z, &resultado);
                printf("Resultado: %d\n", resultado);
                system("pause");
                break;

            case 3:
                printf("Function media()\n");
                scanf("%f %f %f", &a, &b, &c);
                func3(a, b, c, &maior);
                printf("Media: %.2f Maior: %.2f\n", func3(a, b, c, &maior), maior);
                system("pause");
                break;

            case 4:
                printf("Function leNumero()\n");
                leNumero();
                system("pause");
                break;
            
            case 5:
                printf("Function leVetor()\n");
                leVetor();
                system("pause");
                break;

            case 6:
                printf("Function tipoInfo()\n");
                tipoInfo();
                system("pause");
                break;
            
            case 7:
                printf("Function divisores()\n");
                scanf("%d", &x);
                maior = menor = 0;
                printf("Tem divisores? %d\n", divisores(x, &maior, &menor));
                printf("Maior divisor: %f\nMenor divisor: %f\n", maior, menor);
                system("pause");
                break; 

            case 8:
                break;
            default:
                printf("Function inexistente.\n");
                system("pause");
                break;
        }

        system("cls");

    } while(func != 8);
}