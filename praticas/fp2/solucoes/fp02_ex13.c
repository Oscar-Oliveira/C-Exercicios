/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define AUMENTAR 3
#define DIMUNUIR 2

/*
 * Exercício 13
 */
int main(int argc, char** argv) {

    double temp_actual;
    int temp_pretendida, diferenca;
    
    puts("Temp. atual: "); scanf("%lf", &temp_actual); 
    puts("Temp pretendida: "); scanf("%d", &temp_pretendida);
    
    diferenca = temp_pretendida - temp_actual;
    
    if (diferenca < 0) {
        printf("Duração: %d", (diferenca * DIMUNUIR * 60) * -1);
    } else {
        printf("Duração: %d segundos", diferenca * AUMENTAR * 60);
    }
    
    return 0;
}


