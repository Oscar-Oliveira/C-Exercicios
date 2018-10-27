/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * Exercício 9
 */
int main(int argc, char** argv) {

    float massa, altura, IMC;
    
    puts("introduza a massa (kg): ");
    scanf("%f", &massa);
    puts("introduza a altura (m): ");
    scanf("%f", &altura);
   
    IMC = massa / pow(altura, 2);
            
    printf("o IMC é: %.2f", IMC);
        
    return 0;
}

