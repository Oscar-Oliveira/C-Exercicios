/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercício 10
 */
int main(int argc, char** argv) {

    int num;
    
    puts("Valor: "); scanf("%d", &num); 
   
    printf("O numero é divisivel: %s", ((num % 3) == 0 && (num % 5) == 0) ? "Sim" : "Não");
        
    return 0;
}


