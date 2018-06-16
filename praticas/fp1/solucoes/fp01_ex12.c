/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercício 12
 */
int main(int argc, char** argv) {

    int horas, minutos, segundos;
    
    puts("segundos: "); scanf("%d", &segundos);
            
    horas = segundos / (60 * 60);
    segundos = segundos % (60 * 60);
    
    minutos = segundos / 60;
    segundos = segundos % 60;
    
    printf("%2d:%2d:%2d", horas, minutos, segundos);
        
    return 0;
}


