/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

const int MINUTOS_DIA = (24 * 60); 

/*
 * Exercício 8
 */
int main(int argc, char** argv) {

    int hora1, minuto1, hora2, minuto2;
    int horas, minutos;
           
    puts("Entrada");
    puts("Hora: "); scanf("%d", &hora1); 
    puts("Minuto: "); scanf("%d", &minuto1); 
    
    puts("Saida");
    puts("Hora: "); scanf("%d", &hora2); 
    puts("Minuto: "); scanf("%d", &minuto2); 
    
    minuto1 += hora1 * 60;
    minuto2 += hora2 * 60;
    
    if (minuto1 > minuto2) { minuto2 += MINUTOS_DIA; }
    
    minutos = minuto2 - minuto1;
    horas = minutos / 60;
    minutos %= 60;
    printf("%d %d", horas, minutos);
        
    return 0;
}


