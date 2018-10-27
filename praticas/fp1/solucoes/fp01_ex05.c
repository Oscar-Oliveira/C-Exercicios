/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercício 5
 */
int main(int argc, char** argv) {

    int base, altura;
    double area;
   
    puts("introduza a base: ");
    scanf("%d", &base);
    puts("introduza a altura: ");
    scanf("%d", &altura);
    
    area = (base * altura) / 2.0;
    
    printf("A area é: %.2f", area);
        
    return 0;
}

