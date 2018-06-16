/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define MIN 1
#define MAX 300

/*
 * Exercício 2
 */
int main(int argc, char** argv) {

    int i;
    
    for (i = MIN; i <= MAX; ++i) {
        if (i % 2 == 0)  {
            printf("%d", i);
        }
    }
    
    return 0;
}


