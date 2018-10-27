/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define LIN 4
#define COL 5

/*
 * Exercício 2
 */
int main(int argc, char** argv) {
    
    int i, j, matriz[LIN][COL], valor, count = 0;
        
    for (i=0; i < LIN; ++i) {
        for (j = 0; j < COL; ++j) {
            printf("\nA[%d][%d]:", i, j);
            scanf("%d", &matriz[i][j]);
        }   
    }
    
    puts("\nValor:");
    scanf("%d", &valor);
   
    for (i=0; i < LIN; ++i) {
        for (j = 0; j < COL; ++j) {
            if (matriz[i][j] == valor) { ++count; }
        }   
    }
    
    printf("\nCount: %d", count);
    
    return 0;
}
