/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define VELOCIDADE_LUZ 300000

/*
 * Exercício 7
 */
int main(int argc, char** argv) {

    int distancia;
    double tempo;
    double anos_luz;
    
    puts("introduza a distancia (km): ");
    scanf("%d", &distancia);
   
    anos_luz = (365.25 * 24 * 60 * 60 * VELOCIDADE_LUZ);

    tempo = distancia / anos_luz;
    
    printf("Demoraria: %.20f", tempo);
        
    return 0;
}

