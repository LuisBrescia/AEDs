#include <stdio.h>

/* 
* 13.  Construa um algoritmo que leia dois pontos cartesianos P1 (x1, y1) e P2 ( x2, y2) e calcule e 
* mostre a distância de manhattan entre esses dois pontos. Se os pontos forem os mesmos, 
* o seu algoritmo deverá alertar o usuário. 
*/
void main(){
    
    float x1, x2, y1, y2;

    printf("P1 = ");
    scanf("%f %f", &x1, &y1);

    printf("P2 = ");
    scanf("%f %f", &x2, &y2);

    float xs = x1 - x2;
    float ys = y1 - y2;

    if (xs < 0)
    {
        xs *= -1;
    }
    if (ys < 0)
    {
        ys *= -1;
    }
    
    printf("%.2f", xs + ys);
}

