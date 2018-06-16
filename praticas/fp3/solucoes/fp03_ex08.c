/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercício 8
 */
int main(int argc, char** argv) {

    int i=0, limite;
    
    puts("num:"); scanf("%d", &limite);
    
    while (limite) {
        if (++i % 2 == 0) {
            printf("%d", i); 
            --limite;
        }    
    }
    
    return 0;
}
