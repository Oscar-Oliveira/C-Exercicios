/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int clean_buffer() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
    return 1; 
}

char lerChar() {
    char c;
    scanf("%c", &c);
    clean_buffer();
    return c; 
}

int par(int valor) {
    return valor % 2 == 0;
}

/*
 * Exercício 6
 */
int main(int argc, char** argv) {
    
    int i, vetor[SIZE];
    char c = ' ';
    
    for (i=0; i < SIZE; ++i) {
        printf("\nInsira um valor: ");
        scanf("%d", &vetor[i]);
    }
    
    for (i=0; i < SIZE; ++i) {
        printf("%d ", vetor[i]);
    }  
    
    clean_buffer();
    
    do {
        puts("\nP ou I:");
        c = lerChar();
    } while (c != 'P' && c != 'I');
    
    for (i=0; i < SIZE; ++i) {
        if (c == 'P' && par(vetor[i])) {
            printf("\nO valor %d é par. ", vetor[i]);
        } else if (c == 'I' && !par(vetor[i])) {
            printf("\nO valor %d é impar. ", vetor[i]);
        }        
    }
    
    return 0;
}
