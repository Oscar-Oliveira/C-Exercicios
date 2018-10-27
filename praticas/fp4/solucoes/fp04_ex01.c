/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

int lerInteiro() {
    int num;
    puts("\nnum:");
    scanf("%d", &num);
    return num; 
}

/*
 * Exercício 1
 */
int main(int argc, char** argv) {
    
    int i;
    
    for (i=0; i < lerInteiro(); ++i) { printf("*"); }
    
    return 0;
}
