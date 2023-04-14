#include "functions.h"

int main()
{
    int op;
    int n, k;
    float nf;
    float v[5];
    int a, b, c;
    float af, bf, cf;
    int x,y;

    while (1)
    {
        printf("Digite o numero correspondente a cada funcao para executala: \n\n");

        printf("01) Imprimir o cubo de um numero \n");
        printf("02) Media de 5 numeros \n");
        printf("03) Imprimir numeros primos \n");
        printf("04) Maximo e minimo de uma sequencia \n");
        printf("05) Diametro area e circunferencia \n");
        printf("06) Operacao booleana \n");
        printf("07) K-esimo digito de um numero \n");
        printf("08) Sequencia incremental \n");
        printf("09) Somatorio \n");
        printf("10) Distancia de Manhattan \n");
        printf("11) Valor de delta \n");
        printf("12) Fechar o menu\n\n");

        scanf("%i", &op);
        system("cls");
        fflush(stdin);

        switch (op)
        {
        case 1:
            printf("Digite um valor real: ");
            scanf("%f", &nf);
            printf("O cubo de %.2f e: %.2f", nf, function1(nf));
            finalizarFuncao();
            break;

        case 2:
            printf("Digite 5 valores reais na tela: \n");

            for (int i = 0; i < 5; i++)
                scanf("%f", &v[i]);

            printf("A media entre eles e: %.2f", function2(v));
            finalizarFuncao();

            break;

        case 3:
            printf("Digite um numero inteiro positivo maior que 1: ");
            scanf("%d", &n);

            if (n < 2)
            {
                valorInvalidoIncerido();
                break;
            }

            function3(n);
            break;

        case 4:

            function4();
            break;

        case 5:
            printf("Digite o valor do raio: ");
            scanf("%f", &nf);

            printf("O valor do diametro referente a esse raio sera: %.2f\n", function5_diametro(nf));
            printf("O valor da circunferencia referente a esse raio sera: %.2f\n", function5_circunferencia(nf));
            printf("O valor da area referente a esse raio sera: %.2f", function5_area(nf));
            finalizarFuncao();
            break;

        case 6:
            printf("Digite o valor de tres booleano sendo 1 pra verdadeiro e 0 para falso: \n");
            fflush(stdin);
            scanf("%d %d %d", &a, &b, &c);
            printf("A exprecao (~A V B & C) e: %s", function6(a, b, c) ? "true" : "false");

            finalizarFuncao();
            break;

        case 7:
            printf("Digite dois numeros inteiros: ");
            scanf("%i %d", &n, &k);
            printf("O %d digito de %d e: %d", k, n, function7(n, k));

            finalizarFuncao();
            break;

        case 8:
            printf("Digite um limite inferior um limite superir e um valor de incrementacao: \n");
            scanf("%i %i %i", &a, &b, &c);

            if(a>b)
            {
                valorInvalidoIncerido();
                break;
            }

            function8(a, b, c);
            break;

        case 9:

            printf("O resultado do somatorio predifinido e: %lf", function9());
            finalizarFuncao();
            break;

        case 10:
            printf("Digite as cordenadas de um ponto (x,y) e em seguida um numero inteiro: \n");
            scanf("%d %d %d", &x,&y,&n);
            
            printf("A distancia total do ponto escolhido para os outros %d gerados aleatoriamente e: %d", n, function10(x,y,n));
            finalizarFuncao();
            break;

        case 11:
            printf("Digite os 3 coeficientes de uma equacao do segundo grau: \n");
            fflush(stdin);
            scanf("%f %f %f", &af, &bf, &cf);
            printf("O respectivo valor de delta e: %f", function11(af, bf, cf));
            finalizarFuncao();
            break;

        case 12:
            function12();
            break;
        }

        system("cls");
    }

    return 0;
}
