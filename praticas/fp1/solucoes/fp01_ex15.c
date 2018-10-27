/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercício 15
 */
int main(int argc, char** argv) {

    int combustivel, km, hora_partida, hora_chegada, minutos_partida, minutos_chegada;
    
    puts("Quantidade de combustível gasto (litros): "); scanf("%d", &combustivel);
    puts("Distância percorrida (km): "); scanf("%d", &km);
    
    puts("\nPartida");
    puts("Hora: "); scanf("%d", &hora_partida);
    puts("Minutos: "); scanf("%d", &minutos_partida);
    
    puts("\nChegada");
    puts("Hora: "); scanf("%d", &hora_chegada);
    puts("Minutos: "); scanf("%d", &minutos_chegada);
    
    int minutos = ((hora_chegada * 60) + minutos_chegada) - ((hora_partida * 60) + minutos_partida);
    
    puts("\n\nComputador de bordo---------------------------------");
    printf("Consumo (litros/km): %.2lf", (combustivel / (double)km) * 100.0);
    printf("\nTempo (hh:mm): %d:%d", minutos / 60, minutos % 60);
    printf("\nVelocidade (k/h): %.2lf", km / (minutos / 60.0));
    
    return 0;
}


