/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

int fatorial(int n) {
    int i, r = 1;
    for (i = n; i > 0; --i) { r *= i; }
    return r;
}

/*
 * Exercício 5
 */
int main(int argc, char** argv) {
    
    int n;
    
    puts("n:");
    scanf("%d", &n);
    
    printf("fatorial: %d", fatorial(n));
    
    return 0;
}
