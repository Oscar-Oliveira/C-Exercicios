/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

/*
 * Exercício 5
 */
int main(int argc, char** argv) {
    
    int i;
    double vetor[SIZE], soma = 0, maior, menor;
    
    for (i=0; i < SIZE; ++i) {
        printf("\nInsira um valor: ");
        scanf("%lf", &vetor[i]);
    }
    
    for (i=0; i < SIZE; ++i) {
        printf("%.2lf ", vetor[i]);
    }  
    
    puts("");
    for (i=0; i < SIZE; ++i) {
        printf("%.2lf ", vetor[i] * 2);
    }
    
    puts("");
    maior = vetor[0];
    menor = vetor[0];
    for (i=0; i < SIZE; ++i) {
        soma += vetor[i];
        if (maior < vetor[i]) { maior = vetor[i]; }
        else if (menor > vetor[i]) { menor = vetor[i]; }
    }
    
    printf("\nSoma: %.2lf", soma);
    printf("\nMedia: %.2lf", soma / SIZE);
    printf("\nMaior: %.2lf", maior);
    printf("\nMenor: %.2lf", menor);
    
    return 0;
}
