/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

/*
 * Exercício 9
 */
int main(int argc, char** argv) {

    int i, num;
    
    puts("num:"); scanf("%d", &num);
    
    for (i=1; i <= MAX; i++) {
        printf("\n%d x %d = %d", num, i, num * i);
    }

    return 0;
}
