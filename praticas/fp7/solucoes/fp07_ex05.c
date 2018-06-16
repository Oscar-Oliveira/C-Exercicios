/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define N 4

/*
 * Exercício 5
 */
int main(int argc, char** argv) {
    
    int i, j, t, matriz[N][N];
        
    for (i=0; i < N; ++i) {        
        for (j = 0; j < N; ++j) {
            printf("\nA[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }   
    }    
    
    // option 1
    /*
    for (i = 0; i<N/2; ++i) {
        for (j = 0; j < (N+1) / 2; ++j) {
            t = matriz[i][j];
            matriz[i][j] = matriz[N-1-j][i];
            matriz[N-1-j][i] = matriz[N-1-i][N-1-j];
            matriz[N-1-i][N-1-j] = matriz[j][N-1-i];
            matriz[j][N-1-i] = t;
        }
    }
    */

    // option 2 - Transpose + reverse
   
    //transpose
    for(i = 0; i < N; i++) {
        for(j = i; j < N; j++) {  
            t = matriz[i][j];
            matriz[i][j] = matriz[j][i];
            matriz[j][i] = t;
        }
    }
    //reverse elements on row order
    for(i = 0; i < N; ++i) {
        for(j = 0; j < N/2; ++j) {
            t = matriz[i][j];
            matriz[i][j] = matriz[i][N-j-1];
            matriz[i][N-j-1] = t;           
        }
    }

    puts("");
    for (i=0; i < N; ++i) {
        puts("");
        for (j = 0; j < N; ++j) {
            printf("%d ", matriz[i][j]);            
        }   
    }
    
    return 0;
}
