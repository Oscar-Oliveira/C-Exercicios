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

    int i, limite, salto;
    
    puts("limite:"); scanf("%d", &limite);    
    puts("salto:"); scanf("%d", &salto);
    
    for (i = 0; i <= limite; i += salto) {
        printf("%d", i);        
    }
        
    return 0;
}
