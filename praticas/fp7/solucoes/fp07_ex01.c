/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define LIN 3
#define COL 3

/*
 * Exercício 1
 */
int main(int argc, char** argv) {
    
    int i, j, matriz[LIN][COL], maior, menor;
        
    for (i=0; i < LIN; ++i) {
        for (j = 0; j < COL; ++j) {
            printf("\nA[%d][%d]:", i, j);
            scanf("%d", &matriz[i][j]);
        }   
    }
    
    maior = matriz[0][0];
    menor = matriz[0][0];
    for (i=0; i < LIN; ++i) {
        for (j = 0; j < COL; ++j) {
            if (maior < matriz[i][j]) { maior = matriz[i][j]; } 
            else if (menor > matriz[i][j]) { menor = matriz[i][j]; } 
        }   
    }
    printf("\nO maior é: %d", maior);
    printf("\nO menor é: %d", menor);
        
    for (i=0; i < LIN; ++i) {
        puts("");
        for (j = 0; j < COL; ++j) {
            printf("%d ", matriz[i][j]);            
        }   
    }
    
    return 0;
}
