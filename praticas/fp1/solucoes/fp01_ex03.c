/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercício 3
 */
int main(int argc, char** argv) {

    int comprimento, largura;
    long area, perimetro;
        
    puts("introduza o comprimento: ");
    scanf("%d", &comprimento);
    puts("introduza a largura: ");
    scanf("%d", &largura);
    
    area = (comprimento * largura);
    perimetro = (comprimento * 2) + (largura * 2);
    
    printf("A area é: %ld", area);
    printf("\nO perimetro é: %ld", perimetro);
        
    return 0;
}

