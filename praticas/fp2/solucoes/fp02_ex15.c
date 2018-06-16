/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define DISTANCIA 130
#define CAPACIDADE_DEPOSITO 4

/*
 * Exercício 15
 */
int main(int argc, char** argv) {

    int duracao, consumo;
    double velocidade, distancia;
    
    puts("Duração: "); scanf("%d", &duracao); 
    
    velocidade = DISTANCIA / (duracao / 60.0);
    
    printf("Velocidade (km/h): %.2lf", velocidade);
    
    if (velocidade <= 60) {
        consumo = 5;
    } else if (velocidade <= 120) {
        consumo = 6;
    } else {
        consumo = 7;
    }
    
    distancia = (CAPACIDADE_DEPOSITO * 100) / (double)consumo;
    
    printf("\nDistancia (1 deposito): %.2lf", distancia);
            
    return 0;
}


