/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercício 11
 */
int main(int argc, char** argv) {

    int X, Y;
    
    puts("X: "); scanf("%d", &X); 
   
    if (X < 1) { 
        Y = X; 
    } else if (X == 1) { 
        Y = 0; 
    } else { 
        Y = 2 * X; 
    }
    
    printf("Y: %d", Y);
        
    return 0;
}


