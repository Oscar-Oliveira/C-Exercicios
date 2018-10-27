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
    long soma;
    puts("introduza o primeiro valor: ");
    scanf("%d", &num1);
    puts("introduza o segundo valor: ");
    scanf("%d", &num2);
    
    soma = num1 + num2;
    printf("A soma dos valores é: %ld", soma);
        
    return 0;
}

