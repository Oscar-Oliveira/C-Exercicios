/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

/*
 * Exercício 4
 */
int main(int argc, char** argv) {
    
    int i = 0, j, soma = 0;
    double vetor[SIZE];
    
    do {
        printf("%d: ", i);
        scanf("%lf", &vetor[i]);    
    } while (vetor[i] != -1 && ++i < SIZE);
    
    if (i == SIZE) { puts("Capacidade max. atingida"); }
    
    for (j = 0; j < i; ++j) { soma += vetor[j]; }
    
    printf("Media: %.2lf", (double)soma/i);
    
    return 0;
}
