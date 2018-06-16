/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercício 13
 */
int main(int argc, char** argv) {

    int horas, minutos, segundos;
    int total_segundos= 0; 
    
    // Leitura dos valores
    puts("Cancao 1");     
    puts("minutos: "); scanf("%d", &minutos);
    total_segundos += minutos * 60;
    puts("segundos: "); scanf("%d", &segundos);
    total_segundos += segundos;
    
    puts("Cancao 2");    
    puts("minutos: "); scanf("%d", &minutos);
    total_segundos += minutos * 60;
    puts("segundos: "); scanf("%d", &segundos);
    total_segundos += segundos;
    
    puts("Cancao 3");    
    puts("minutos: "); scanf("%d", &minutos);
    total_segundos += minutos * 60;
    puts("segundos: "); scanf("%d", &segundos);
    total_segundos += segundos;
    
    puts("Cancao 4");    
    puts("minutos: "); scanf("%d", &minutos);
    total_segundos += minutos * 60;
    puts("segundos: "); scanf("%d", &segundos);
    total_segundos += segundos;
    
    puts("Cancao 5");    
    puts("minutos: "); scanf("%d", &minutos);
    total_segundos += minutos * 60;
    puts("segundos: "); scanf("%d", &segundos);
    total_segundos += segundos;
            
    // Calculo
    
    horas = total_segundos / (60 * 60);
    total_segundos = total_segundos % (60 * 60);
    
    minutos = total_segundos / 60;
    total_segundos = total_segundos % 60;
    
    segundos = total_segundos;
    
    // Apresentacao
    
    printf("%2d:%2d:%2d", horas, minutos, segundos);
        
    return 0;
}


