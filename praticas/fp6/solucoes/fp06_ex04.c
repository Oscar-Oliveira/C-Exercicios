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
 * Exercício 4
 */
int main(int argc, char** argv) {
    
    char str1[MAX], str2[MAX];
    
    puts("Insira um texto: ");
    lerString(str1, MAX);
  
    strcpy(str2, str1);
    
    puts("");
            
    puts(str1);
    puts(str2);
                
    return 0;
}
