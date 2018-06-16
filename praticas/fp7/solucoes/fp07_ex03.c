/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define LIN 4
#define COL 3

/*
 * Exercício 3
 */
int main(int argc, char** argv) {
    
    int i, j, matriz[LIN][COL], valor, count = 0;
        
    for (i=0; i < LIN; ++i) {        
        puts("Codigo:");
        scanf("%d", &matriz[i][0]);        
        for (j = 1; j < COL; ++j) {
            puts("Nota");
            scanf("%d", &matriz[i][j]);
        }   
    }
   
    puts("");
    puts("Codigo\tNota 1\tNota 2\t Média");
    for (i=0; i < LIN; ++i) {
        for (j = 0; j < COL; ++j) {
            printf("%6d\t", matriz[i][j]);
        }
        printf("%6.2lf\t", (matriz[i][1] + matriz[i][2]) / 2.0);
        puts("");
    }
    
    return 0;
}
