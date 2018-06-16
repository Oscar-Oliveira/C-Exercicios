/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "utils.h"

#define MAX 26

/*
 * Exercício 3
 */
int main(int argc, char** argv) {
    
    char str1[MAX], str2[MAX];
    
    puts("Insira um texto: ");
    lerString(str1, MAX);
    
    puts("Insira outro texto: ");
    lerString(str2, MAX);
    
    puts("");
            
    int comp = strcmp(str1, str2);
    if (comp < 0) {
        puts(str1);
        puts(str2);
    } else if (comp > 0) {
        puts(str2);
        puts(str1);
    } else {
        puts(str1);
    }
                
    return 0;
}
