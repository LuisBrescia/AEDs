#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isLetter (char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) return 1;
    return 0;
}

int LISTA7_Q1(char *str){
    int i, cont = 0;
    for (i = 0; i < strlen(str); i++) { 
        if (isLetter(str[i])){ 
            cont++; 
        } 
    }
    return cont;
}

int main () {
    char str[200];
    fflush(stdin);
    fgets(str, 200, stdin);
    printf("%d", LISTA7_Q1(str));
    return 0;
}