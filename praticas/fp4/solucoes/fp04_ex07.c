/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

int lerInteiro(int min, int max) {
    int num;
    while (num < min || num > max) {
        puts("\nnum:");
        scanf("%d", &num);
    }
    return num; 
}

/*
 * Exercício 7
 */
int main(int argc, char** argv) {
    
    int valor = lerInteiro(1, 10);
    
    printf("%d", valor);
    
    return 0;
}
