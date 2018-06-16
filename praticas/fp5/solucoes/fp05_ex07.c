/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void a_and_b(int A[], int B[], int C[]) {
    int i = 0;
    for (i=0; i < SIZE; ++i) { C[i] = A[i]; }
    for (i=0; i < SIZE; ++i) { C[i + SIZE] = B[i]; }
}

int isIn(int valor, int vetor[], int tam) {
    int i;
    for (i=0; i < tam; ++i) { 
        if (valor == vetor[i]) { return 1; }
    }
    return 0;
}

int a_not_in_b(int A[], int B[], int C[]) {
    int i, count = 0;
    for (i=0; i < SIZE; ++i) { 
        if (!isIn(A[i], B, SIZE)) { 
            C[count] = A[i]; 
            ++count;
        }
    }
    return count;
}

int distinct_in_a_and_b(int A[], int B[], int C[]) {
    int i, count = 0;
    for (i=0; i < SIZE; ++i) { 
        if (isIn(A[i], B, SIZE) && !isIn(A[i], C, count)) {
            C[count] = A[i]; 
            ++count;
        }
    }
    return count;
}

void print(int vetor[], int tam) {
    int i;
    puts("");
    for (i=0; i < tam; ++i) { printf(" %d |", vetor[i]); }
}

/*
 * Exercício 7
 */
int main(int argc, char** argv) {
    
    int i, j, countD, countE, A[SIZE], B[SIZE], C[SIZE * 2], D[SIZE], E[SIZE];
    
    for (i=0; i < SIZE; ++i) {
        printf("\nA[%d]: ", i);
        scanf("%d", &A[i]);
    }
    
    for (i=0; i < SIZE; ++i) {
        printf("\nB[%d]: ", i);
        scanf("%d", &B[i]);
    }
    
    a_and_b(A, B, C);
    print(C, SIZE * 2);
    
    countD = a_not_in_b(A, B, D);
    print(D, countD);
  
    countE = distinct_in_a_and_b(A, B, E);
    print(E, countE);
    
    return 0;
}
