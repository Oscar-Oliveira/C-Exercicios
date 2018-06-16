/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercício 2
 */
int main(int argc, char** argv) {

    int num1, num2;
    long resultado;
    puts("introduza o primeiro valor: ");
    scanf("%d", &num1);
    puts("introduza o segundo valor: ");
    scanf("%d", &num2);
    
    resultado = (num1 - num2) * num1;
    printf("o resultado é: %ld", resultado);
        
    return 0;
}

