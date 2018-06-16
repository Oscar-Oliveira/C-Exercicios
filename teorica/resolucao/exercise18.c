/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

/*
 * Exercise 18
 */

int main(int argc, char** argv) {
    int i, j, mat[SIZE][SIZE];
    
    for (i=0; i < SIZE; ++i) { 
        for (j=0; j < SIZE; ++j) {             
            printf("Insira valor para [%d][%d]", i, j); 
            scanf("%d", &mat[i][j]);            
        }
    }
    
     for (i=0; i < SIZE; ++i) { 
        puts("");
        for (j=0; j < SIZE; ++j) {             
            printf("%3d", mat[i][j]); 
        }
    }
            
    return 0;
}

