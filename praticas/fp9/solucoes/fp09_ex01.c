/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercício 1
 */
 
void somar(int num1, int num2, long *resultado) {
    *resultado = num1 + num2;
}

int main(int argc, char **argv) {
    
    int valor1, valor2;
    long res;
    
    puts("Valor 1: ");
    scanf("%d", &valor1);
    puts("Valor 2: ");
    scanf("%d", &valor2);
   
    somar(valor1, valor2, &res);
    
    printf("Resultado: %d + %d = %ld", valor1, valor2, res);    
    
    return 0;
}
