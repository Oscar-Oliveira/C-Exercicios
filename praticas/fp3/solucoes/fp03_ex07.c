/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercício 7
 */
int main(int argc, char** argv) {

    int i, num = -1;
    
    while (num < 0) {
        puts("num:"); scanf("%d", &num);
    }
  
    for (i = num - 1; i > 0; --i) {
        if (i % 2) {
            printf("%d", i); 
        }
    }
    
    return 0;
}
