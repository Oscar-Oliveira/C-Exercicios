/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 21
#define STEP 5

/*
 * Exercício 2
 */
int main(int argc, char** argv) {
    
    int i, vetor[SIZE];
    
    for (i=0; i < SIZE; ++i) {
        vetor[i] = i + STEP;
    }
    
    for (i=0; i < SIZE; ++i) {
        printf("%d", vetor[i]);
    }
        
    return 0;
}
