/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define MIN 1
#define MAX 100

/*
 * Exercício 4
 */
int main(int argc, char** argv) {

    int i, soma = 0;
    
    for (i = MIN; i <= MAX; ++i) {
        soma += i; 
        printf("%d", i);        
    }
    
    printf("\nSoma: %d", soma);        
    
    return 0;
}


