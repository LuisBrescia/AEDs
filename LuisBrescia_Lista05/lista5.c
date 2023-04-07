#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Testando coneão do girhub

// Funções
void imprimePrimos(int a);
int cubo(int a);
float media(int a, int b, int c, int d, int e);
void maiorMenor(int a, int b);
float diametro(float raio);
float circunferencia(float raio);
float area(float raio);
int logica(int a, int b, int c);
void imprimeIntervalo(int a, int b, int c);  
void somatorio();
int numDigitos(int a);
float somaDistancias(int x, int y, int n);
float delta(float a, float b, float c);

int main() {

    int func, num, aux = 0, temp = 0;
    int a, b, c, d, e;

    do{
        printf("DIGITE A FUNCTION QUE DESEJA UTILIZAR: \n1 - imprimePrimos()\n2 - elevaCubo()\n3 - media()\n4 - maiorMenor()\n"
        "5 - circunferencia()\n6 - logica()\n7 - imprimeIntervalo()\n8 - somatorio()\n9 - numDigitos\n10 - somaDistancia()\n11 - calculaDelta()\n12 - Sair\n");
        scanf("%d", &func);
        system("cls");

        switch (func) {

            case 1:
                printf("Function imprimePrimos()\nPasse um valor inteiro como parametro: ");
                scanf("%d", &num);
                imprimePrimos(num);
                system("pause");
                break;

            case 2:
                printf("Function cubo()\nPasse um valor inteiro como parametro: ");
                scanf("%d", &num);
                printf("%d^3 = %d\n", num, cubo(num));
                system("pause");
                break;

            case 3:
                printf("Function media()\nPasse 5 valores inteiros como parametro: ");
                scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
                printf("A media desses numeros e %f\n", media(a, b, c, d, e));
                system("pause");
                break;

            case 4:
                printf("Function maiorMenor()\nPasse 2 valores inteiros como parametro: ");
                int x, y;
                scanf("%d %d", &x, &y);
                maiorMenor(x, y);
                system("pause");
                break;

            case 5:
                printf("Functions relacionadas a circunferencia\n");
                printf("1 - diametro()\n2 - circunferencia()\n3 - area()\n");
                scanf("%d", &aux);
                switch (aux) {
                    case 0:
                        printf("1 - diametro()\n2 - circunferencia()\n3 - area()\n");
                        scanf("%d", &aux);
                        system("cls");
                        break;
                    case 1:
                        printf("Function diametro()\nEscreva o valor do raio da circunferencia: ");

                        float raio;

                        scanf("%f", &raio);

                        printf("O diametro desse circulo e %f\n", diametro(raio));
                        system("pause");
                        break;

                    case 2:
                        printf("Function circunferencia()\nEscreva o valor do raio da circunferencia: ");

                        scanf("%f", &raio);

                        printf("A circunferencia desse circulo e %f\n", circunferencia(raio));
                        system("pause");
                        break;

                    case 3:
                        printf("Function area()\nEscreva o valor do raio da circunferencia: ");

                        scanf("%f", &raio);

                        printf("A area desse circulo e %f\n", area(raio));
                        system("pause");
                        break;

                    default:
                        printf("Function inexistente.\n");
                        system("pause");
                        break;
                } 
                break;

            case 6:
                printf("Function logica()\nPasse 3 valores booleanos como parametro: ");
                scanf("%d %d %d", &a, &b, &c);
                printf("O resultado da funcao e %d\n", logica(a, b, c));
                system("pause");
                break;

            case 7:

                printf("Function imprimeIntervalo()\nPasse 3 valores inteiros como parametro: ");

                scanf("%d %d %d", &a, &b, &c);

                imprimeIntervalo(a, b, c);
                system("pause");
                break;

            case 8:
                
                printf("Function somatorio().\n");
                somatorio();
                system("pause");
                break;
            
            case 9: 

                printf("numDigitos()\nPasse um valor inteiro como parametro: ");
                
                scanf("%d", &a);
                printf("O numero de digitos desse numero e %d\n", numDigitos(a));

                system("pause");
                break;

            case 10:

                printf("somaDistancias()\nPasse 3 valores inteiros como parametro: ");

                scanf("%d %d %d", &a, &b, &c);

                printf("A soma das distancias entre os pontos e %f\n", somaDistancias(a, b, c));

                system("pause");
                break;

            case 11:   

                printf("delta()\nPasse 3 valores inteiros como parametro: ");

                scanf("%d %d %d", &a, &b, &c);

                printf("O valor de delta e %f\n", delta(a, b, c));

                system("pause");
                break;

            case 12:
                printf("Programa finalizado.\n");
                system("pause");
                break;
            default:
                printf("Function inexistente.\n");
                system("pause");
                break;
        }

        system("cls");

    } while(func != 12);

    return 0;
}

/* Função 1
Recebe um número
Imprime todos os números primos menores que ele
*/
void imprimePrimos(int a){

    int i, j, divisores;

    for(i = 2; i < a; i++) {

        divisores = 0;

        for (j = 2; j < i; j++) {
            if (i % j == 0) {
            divisores++;
            }
        }

        if(divisores == 0){
            printf("%d eh primo \n", i);
        }
    }
}

/* Função 2
Recebe um número
Retorna o cubo desse número
*/
int cubo (int a) {
    return pow(a, 3);
}

/* Função 3
Recebe 5 números
Retorna a média entre eles
*/
float media (int a, int b, int c, int d, int e) {
    return (a + b + c + d + e) / 5.0;
}

/* Função 4
Recebe 2 números
Imprime o maior deles e o menor deles
*/  
void maiorMenor (int a, int b) {
    if (a > b) {
        printf("O maior numero e %d e o menor e %d\n", a, b);
    } else {
        printf("O maior numero e %d e o menor e %d\n", b, a);
    }
}

/* Função 5
Crie 3 três funções que recebam como parâmetro um raio de uma circunferência e calcule
respectivamente: diâmetro, circunferência e a área do círculo.
*/
float diametro (float raio) {
    return raio * 2;
}
float circunferencia (float raio) {
    return 2 * 3.14 * raio;
}
float area (float raio) {
    return 3.14 * pow(raio, 2);
}

/* Função 6 
Crie uma função que recebe três valores booleanos (A, B e C) e retorne o valor verdade da
operação (~A V B & C) em relação aos três valores. */
int logica (int a, int b, int c) {
    return (!a || b) && c;
}

/* Função 7 
Crie um procedimento que receba como parâmetro três inteiros: 
um limite inferior, limite superior e valor de incrementação e 
imprima na tela os números entre os limites fornecidos incrementados pelo último parâmetro fornecido. 
*/  
void imprimeIntervalo (int a, int b, int c) {
    int i;
    for (i = a; i < b; i += c) {
        printf("%d ", i);
    }
}

/* Função 8
crie uma função que imprime o somatório de 1 / 225 até 16384 / 1, multiplicando o
numerador por 2 e subtraindo o denominador por 2 a cada iteração. */
void somatorio () {
    int i = 1, j = 225, dec = 29;
    float soma = 0;
    for (i = 1; i <= 16384; i++) {
        
        soma += (float) i / j;

        i *= 2;
        j -= dec;
        dec -= 2;   
        
    }
    printf("O somatorio e %f\n", soma);
}

/* Função 9
Crie uma função que receba como parâmetro um número inteiro e retorne o número de dígitos
desse número. */
int numDigitos (int a) {
    int i = 0;
    while (a > 0) {
        a /= 10;
        i++;
    }
    return i;
}

/* Função 10 
Construa uma função que recebe as coordenadas (x,y) de um ponto P e um valor n. A função
deverá calcular e retornar a soma das distâncias do ponto P para outros n pontos a serem gerados
aleatoriamente.
*/
float somaDistancias (int x, int y, int n) {
    int i, x2, y2;
    float soma = 0;
    for (i = 0; i < n; i++) {
        x2 = rand() % 100;
        y2 = rand() % 100;
        soma += sqrt(pow(x2 - x, 2) + pow(y2 - y, 2));
    }
    return soma;
}

/* Função 11	
Faça uma função que receba como parâmetro três coeficientes de uma equação de segundo
grau e retorne o valor de delta.
*/
float delta (float a, float b, float c) {
    return pow(b, 2) - 4 * a * c;
}