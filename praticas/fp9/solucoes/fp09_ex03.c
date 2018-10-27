/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercício 3
 */

void ler(int *arr, int tam) {
    int i;
    for (i = 0; i < tam; ++i) {
        printf("valor %d: ", i);
        scanf("%d", &arr[i]);
    }     
}

void media(int *arr, int tam) {
    int i, soma = 0;
    for (i = 0; i < tam; ++i) { soma += arr[i]; }
    printf("\nMedia: %.2fl", (double)soma/tam);
}

int main(int argc, char **argv) {
    
    int tam, *arr;
    
    puts("Tamanho: ");
    scanf("%d", &tam);
    
    arr = (int *)malloc(tam * sizeof(int));

    ler(arr, tam);
    
    media(arr, tam);
    
    return 0;
}
