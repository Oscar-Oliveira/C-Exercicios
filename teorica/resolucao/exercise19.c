/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE_ROWS 2
#define SIZE_COLUMNS 3

/*
 * Exercise 19
 */

int main(int argc, char** argv) {
    int i, j;
    float higher, mat[SIZE_ROWS][SIZE_COLUMNS];
        
    for (i=0; i < SIZE_ROWS; ++i) { 
        for (j=0; j < SIZE_COLUMNS; ++j) {
            printf("Insira valor para [%d][%d]", i, j); 
            scanf("%f", &mat[i][j]);
        }
    }
    
    higher = mat[0][0];    
    for (i=0; i < SIZE_ROWS; ++i) { 
        for (j=0; j < SIZE_COLUMNS; ++j) {             
            if (higher < mat[i][j]) { higher = mat[i][j]; }            
        }
    }
    
    for (i=0; i < SIZE_ROWS; ++i) { 
        puts("");
        for (j=0; j < SIZE_COLUMNS; ++j) {             
            printf("%5.2f", mat[i][j]); 
        }
    }
         
    printf("\n\nHigher value is %.2f", higher); 
    
    return 0;
}

