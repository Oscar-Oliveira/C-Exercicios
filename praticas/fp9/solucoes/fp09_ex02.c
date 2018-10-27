/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercício 2
 */

void somar(int num1, int num2, long *resultado) {
    *resultado = num1 + num2;
}

int main(int argc, char **argv) {
    
    int *num1, *num2;
    long *num3;
    num1 = (int *)malloc(sizeof(int));
    num2 = (int *)malloc(sizeof(int));
    num3 = (long *)malloc(sizeof(long));
    
    *num1 = 12;
    *num2 = 3;
    
    somar(*num1, *num2, num3);
    printf("Resultado = %ld" , *num3);
    
    free(num1);
    free(num2);
    free(num3);
    
    return 0;
}
