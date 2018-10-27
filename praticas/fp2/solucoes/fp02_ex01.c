/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercício 1
 */
int main(int argc, char** argv) {

    int num1, num2;
    
    puts("num1: "); scanf("%d", &num1);
    puts("num2: "); scanf("%d", &num2);
    
    if (num1 > num2) {
        printf("O maior é: %d", num1);
    } else {
        printf("O maior é: %d", num2);
    }
    
    return 0;
}


