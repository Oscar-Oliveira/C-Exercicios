/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

/*
 * Exercício 1
 */
int main(int argc, char** argv) {

    int i;
    
    for (i = 1; i <= MAX; ++i) {
        printf("%d", i);
    }
    
    puts("");
    
    i = 1;
    while (i <= MAX) {
        printf("%d", i++);
    }
    
    puts("");
    
    i = 1;
    do {
        printf("%d", i);
    } while (++i <= MAX);
    
    return 0;
}


