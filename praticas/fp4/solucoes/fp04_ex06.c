/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

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

int lerInt() {
    int d;
    scanf("%d", &d);
    clean_buffer();
    return d; 
}

int Rect(char c, int linhas, int colunas) {
    
    int i, j;
    
    puts("");
    for (i = 0; i < colunas; i++) { printf("%c", c); }
    
    for (i = 0; i < linhas-2; ++i) { 
        printf("\n%c", c); 
        for (j = 0; j < colunas - 2; ++j) { printf(" "); }
        printf("%c", c); 
    }
    
    puts("");
    for (i = 0; i < colunas; i++) { printf("%c", c); }
    
}

/*
 * Exercício 6
 */
int main(int argc, char** argv) {
    
    int lin, col;
    char c;
    
    puts("Linhas:");
    lin = lerInt();
    puts("Colunas:");
    col = lerInt();
    puts("Caracter:");
    c = lerChar();
        
    Rect(c, lin, col);
    
    return 0;
}
