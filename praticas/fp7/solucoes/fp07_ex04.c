/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define N 3

/*
 * Exercício 4
 */
int main(int argc, char** argv) {
    
    int i, j, A[N][N], B[N][N];
        
    for (i=0; i < N; ++i) {
        for (j = 0; j < N; ++j) {
            printf("\nA[%d][%d]:", i, j);
            scanf("%d", &A[i][j]);
        }   
    }
    
    for (i=0; i < N; ++i) {
        for (j = 0; j < N; ++j) { B[i][j] = A[j][i]; }   
    }
       
    for (i=0; i < N; ++i) {
        puts("");
        for (j = 0; j < N; ++j) {
            printf("%d ", A[i][j]);            
        }   
    }
    
    for (i=0; i < N; ++i) {
        puts("");
        for (j = 0; j < N; ++j) {
            printf("%d ", B[i][j]);            
        }   
    }
    
    return 0;
}
