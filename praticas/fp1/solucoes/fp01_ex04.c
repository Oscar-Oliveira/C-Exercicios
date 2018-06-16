/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * Exercício 4
 */
int main(int argc, char** argv) {

    int raio;
    double area, perimetro;
   
    puts("introduza o raio: ");
    scanf("%d", &raio);
    
    area = M_PI * pow(raio, 2);
    perimetro = M_PI * raio * 2;
    
    printf("A area é: %.2f", area);
    printf("\nO perimetro é: %.2f", perimetro);
        
    return 0;
}

