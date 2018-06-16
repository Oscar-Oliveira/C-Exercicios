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

/*
 * Exercício 3
 */
int main(int argc, char** argv) {
    
    int i, j, count = 0, pos[SIZE];
    char c, vetor[SIZE];
    
    for (i=0; i < SIZE; ++i) {
        printf("\nInsira um caracter: ");
        vetor[i] = lerChar();
        pos[i] = 0;
    }
    
    printf("\nProcurar caracter: ");
    c = lerChar();
        
    for (i=0, j=0; i < SIZE; ++i) {
        if (vetor[i] == c)  { 
            pos[j++] = i;
            ++count;            
        }
    }
      
    printf("\nEncontrados: %d", count);
    
    if (count) {
        puts("\nPosições");
        for (j=0; j < count; ++j) {
            printf("%d ", pos[j]);
        }
    }       
    
    return 0;
}
