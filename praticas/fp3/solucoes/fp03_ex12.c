/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercício 12
 */
int main(int argc, char** argv) {

    int i, num = 0, soma = 0, count = 0;   
    
    do {
        soma += num;
        puts("num:"); scanf("%d", &num);
    } while ((num != -1) && ++count);
    
    printf("Soma: %d | Count: %d | Média: %.2f ", soma, count, (double)soma/count);
      
    return 0;
}
