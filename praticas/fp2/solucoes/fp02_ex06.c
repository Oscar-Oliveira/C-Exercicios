/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercício 6
 */
int main(int argc, char** argv) {

    int horas, minutos;
           
    puts("Horas: "); scanf("%d", &horas); 
    puts("Minutos: "); scanf("%d", &minutos); 
        
    if (horas < 12) {
        printf("horas: %d %d AM", horas + (12 * (horas == 0 && minutos == 0)), minutos);
    } else {
        printf("horas: %d %d PM", horas - (12 * (horas != 12 && minutos != 0)), minutos);
    }
    
    return 0;
}


