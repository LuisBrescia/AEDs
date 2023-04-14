#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<conio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

/*
Descrisao: Calcula o cubo de um numero
Parametros (entradas): float n 
Retorno (saida): float
*/
float function1(float n)
{
    return pow(n,3);
}

/*
Descrisao: calcular a media de cinco numeros
Parametros (entradas): um vetor float de cinco casas
Retorno (saida): float
*/
float function2(float v[5])
{
    float aux = 0;
    for(int i= 0;i<5;i++)
        aux+=v[i];

    return aux/5;
}

/*
Descrisao: imprimir numeros primos
Parametros (entradas): um numero inteiro n
Retorno (saida): void
*/
void function3(int n)
{
    bool aux;// se tiver percorrido o for do j ate o final ele e false;
    printf("\nOs numeros primos de 2 a %d sao: \n2 ", n);

    for(int i = 3;i<=n ;i+=2)
    {
        for(int j = 3;j<= sqrt(n) ;j+=2)
        {
            if(i%j==0)
            {
                aux = true;
                break;
            }
        }

        if(!aux)
        {
            printf("%i ", i);
        }

        aux = false;
    }

    finalizarFuncao();
}

/*
Descrisao: identifica o maior e menor numero de uma sequencia
Parametros (entradas): void
Retorno (saida): void
*/
void function4()
{
    char nums[505];
    char aux[10] = "";
    float maior = -99999;
    float menor = 999999;
    printf("Digite uma lista de valores reais em uma linha: \n");
    fflush(stdin);
    gets(nums);

    for(int i = 0; i<strlen(nums);i++)
    {
        char stringAux[2] = "\0";

        if(nums[i] == ' ')
        {
            maior = maior > atof(aux) ? maior : atof(aux);
            menor = menor < atof(aux) ? menor : atof(aux);

            aux[0] = '\0';
        }
        else
        {
            stringAux[0]=nums[i];
            strcat(aux, stringAux);
        }
    }

    maior = maior > atof(aux) ? maior : atof(aux);
    menor = menor < atof(aux) ? menor : atof(aux);

    printf("Maior valor digitado: %f\nMenor valor digitado: %f", maior, menor);

    finalizarFuncao();
}

/*
Descrisao: calcula o diametro de uma circunferencia
Parametros (entradas): uma valor float representando o raio
Retorno (saida): float
*/
float function5_diametro(float r)
{
    return r * 2;
}

/*
Descrisao: calcula o perimetro de uma circunferencia
Parametros (entradas): uma valor float representando o raio 
Retorno (saida): float
*/
float function5_circunferencia(float r)
{
    return 2 * r * 3.14;
}

/*
Descrisao: calcula a area de uma circunferencia
Parametros (entradas): uma valor float representando o raio
Retorno (saida): float
*/
float function5_area(float r)
{
    return r * r * 3.14;
}

/*
Descrisao: resolver uma operacao booleana
Parametros (entradas): tres valores booleanos
Retorno (saida): bool
*/
bool function6(bool a, bool b, bool c)
{
    return !a || b && c;
}

/*
Descrisao: identifica o k-esimo digito de um numero
Parametros (entradas): um inteiro representando o numero e outro inteiro pra identificar qual digito
Retorno (saida): int
*/
int function7(int n, int k)
{
    char c[500];
    sprintf(c,"%d",n);

    char aux[2];
    aux[0] = c[strlen(c) - k];
    return atoi(aux);

}
/*
Descrisao: imprimir uma sequencia numerica entre 2 limites somada de um valor incremental
Parametros (entradas): dois ints representando os limites e outro definindo o valor incremental
Retorno (saida): void
*/
void function8(int limInf, int limSup, int incre)
{
    for (int i = limInf + 1; i < limSup; i++)
    {
        printf("%d ", i + incre);
    }
    
    finalizarFuncao();
}

/*
Descrisao: Resolver uma somatorio predefinido
Parametros (entradas): void
Retorno (saida): double
*/
double function9()
{
    int j = 1;
    int sub = 31;
    double resp = 0;

    for(int i = 225; i>=1; i -= sub)
    {
        resp += (double)j/i;
        sub-=2;
        j*=2;
    }

    return resp;
}

/*
Descrisao: calcular a distancia de Manhattan entre o ponto definido pelo usuario e outros n pontos aleatorios
Parametros (entradas): dois inteiros representando as cordenadas de um ponto (x,y) e outro para definir a quantidade de pontos que sera gerados aleatoriamente 
Retorno (saida): int
*/
int function10(int x, int y, int n)
{
    int distTotal = 0;

    for(int i = 0; i<n; i++)
    {
        distTotal += abs(x - rand()%100) + abs(y - rand()%100);
    }


    return distTotal;
}

/*
Descrisao: Caucular o valor de delta dado os coeficientes de uma equacao do segundo grau
Parametros (entradas): tres floats cada um representando um coeficiente de uma equacao do segundo grau
Retorno (saida): float
*/
float function11(float a, float b, float c)
{
    return b * b - 4 * a * c;
}



//AS FUNCOES SEGUINTES NAO FORAM REQUISITADAS PELO EXERCICIO
//MAS SAO ESSENCIAS PARA O PERFEITO FUNCIONAMENTO DESTE CODIGO
//POR ESSE MOTIVO ELAS NAO APRESENTAM A DOCUMENTACAO QUE FOI 
//PEDIDA SOMENTE PELAS FUNCOES REFERENTES AOS EXERCICIOS


void function12()
{
    exit(0);
}


void finalizarFuncao()
{
    printf("\n\n");
    system("pause");
}

void valorInvalidoIncerido()
{
    printf("\nValor Invalido Incerido!\n");
    system("pause");
}


#endif // FUNCTIONS_H_INCLUDED
