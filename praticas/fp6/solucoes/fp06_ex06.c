/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#include "utils.h"

#define MAX 26 

/*
 * Exercício 6
 */
int main(int argc, char** argv) {
    
    char c, str1[MAX];
    int count;
    
    puts("Insira um texto: ");
    lerString(str1, MAX);
    
    puts("Carater: ");
    c = lerChar();
    
    count = countChar(c, str1);
    
    printf("A string tem %d \'%c\'", count, c);
    
    return 0;
}
