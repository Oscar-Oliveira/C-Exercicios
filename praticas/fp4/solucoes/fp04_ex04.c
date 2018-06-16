/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

int ler(int n) {
    int i, soma = 0, nota;
    for (i=0; i < n; ++i) {
        printf("nota %d:", i);
        scanf("%d", &nota);
        soma += nota;
    }
    return soma;
}

double media(int n, int soma) {
    return (double)soma/n;
}

/*
 * Exercício 4
 */
int main(int argc, char** argv) {
    
    int n, soma;
    
    puts("n:");
    scanf("%d", &n);
    
    soma = ler(n);
    
    printf("Media: %.2lf", media(n, soma));
    
    return 0;
}
