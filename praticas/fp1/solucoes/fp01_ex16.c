/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercício 16
 */
int main(int argc, char** argv) {

    double valor, taxa;
    
    puts("Valor: "); scanf("%lf", &valor);
    puts("Taxa: "); scanf("%lf", &taxa);
   
    taxa /= 100;
            
    valor *= (1 + taxa);
    printf("\nFIm trimestre 1: %.2lf", valor);
    
    valor *= (1 + taxa);
    printf("\nFIm trimestre 2: %.2lf", valor);
    
    valor *= (1 + taxa);
    printf("\nFIm trimestre 3: %.2lf", valor);
    
    valor *= (1 + taxa);
    printf("\nFIm trimestre 4: %.2lf", valor);
    
    return 0;
}


