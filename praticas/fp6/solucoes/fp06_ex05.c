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
 * Exercício 5
 */
int main(int argc, char** argv) {
    
    char str1[MAX];
    
    puts("Insira um texto: ");
    lerString(str1, MAX);
          
    printf("A string tem %d", strlen(str1));
    
    return 0;
}
