/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercício 9
 */
int main(int argc, char** argv) {

    int num;
    
    puts("Valor: "); scanf("%d", &num); 
   
    printf("O numero é %s", ((num % 2) == 0) ? "par" : "impar");
        
    return 0;
}


