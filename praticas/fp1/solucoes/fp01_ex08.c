/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercício 8
 */
int main(int argc, char** argv) {

    double F, C;
    
    puts("introduza a temperatura em graus Fahrenheit: ");
    scanf("%lf", &F);
   
    C = (F - 32) * (5.0/9);
    
    printf("C: %.2lf", C);
        
    return 0;
}

