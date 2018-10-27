/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercício 3
 */
int main(int argc, char** argv) {

    int i, min, max;
    
    puts("min: "); scanf("%d", &min);
    puts("max: "); scanf("%d", &max);
    
    for (i = min; i <= max; ++i) {
        printf("%d", i);
    }
    
    return 0;
}


