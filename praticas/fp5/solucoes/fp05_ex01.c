/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 20

/*
 * Exercício 1
 */
int main(int argc, char** argv) {
    
    int i, vetor[MAX];
    
    for (i=0; i < MAX; ++i) {
        vetor[i] = i;
    }
    
    for (i=0; i < MAX; ++i) {
        printf("%d", vetor[i]);
    }
        
    return 0;
}
