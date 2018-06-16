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
 * Exercício 8
 */
int main(int argc, char** argv) {
    
    char str1[MAX];
    int i, index;
    
    puts("Insira um texto: ");
    lerString(str1, MAX);
   
    index = lastIndex(str1, ' ');
    
    puts("");
    for (i = index+1; i < strlen(str1); ++i) { 
        printf("%c", str1[i]); 
    }
    printf(", ");
    for (i = 0; i < index; ++i) { 
        printf("%c", str1[i]); 
    }
    
    return 0;
}
