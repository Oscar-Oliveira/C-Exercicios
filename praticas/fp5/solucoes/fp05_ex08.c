/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000

/*
 * Exercício 8
 */
int main(int argc, char** argv) {
    
    int i, j, c = 0, limite, primos[SIZE];

    do {
        puts("Limite: ");
        scanf("%d", &limite);
    } while (limite < 0 || limite > SIZE);
    
    // All are prime
    for (i=2; i < limite; ++i) { primos[i] = 1; }

    for (i=2; i < limite; ++i) {
        if (primos[i]) {
            // if number is prime, cross all multiples
            for (j=i; i*j < limite; ++j) { primos[i*j] = 0; }
        }
    }
    
    for (i=2; i < limite; ++i) {
        if (primos[i]) {
            printf("\nprimo %d: %d", ++c, i);
        }
    }
    
    return 0;
}
