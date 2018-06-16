/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int lerInteiro(int min, int max) {
    int num = -1;
    while (num < min || num > max) {
        scanf("%d", &num);
    }
    return num; 
}

int leitura() {
    int i, soma = 0;
    for (i = 0; i < MAX; ++i) {
        puts("insira uma nota:");
        soma += lerInteiro(0, 20);
    }
    return soma;
}


/*
 * Exercício 8
 */
int main(int argc, char** argv) {
    
    printf("media: %.2lf", leitura() / (double)MAX);
    
    return 0;
}
