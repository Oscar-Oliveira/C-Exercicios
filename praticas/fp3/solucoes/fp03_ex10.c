/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define MIN 1
#define MAX 10

/*
 * Exercício 10
 */
int main(int argc, char** argv) {

    int i, j;
    
    for (i=MIN; i <= MAX; ++i) {
        for (j=MIN; j <= MAX; ++j) {
            printf("\n%d x %d = %d", i, j, i * j);
        }
    }
    
    return 0;
}
