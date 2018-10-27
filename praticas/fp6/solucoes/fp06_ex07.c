/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#include "utils.h"

#define MAX 26 

/*
 * Exercício 7
 */
int main(int argc, char** argv) {
    
    char str1[MAX];
    int i=0, count=0;
    
    puts("Insira um texto: ");
    lerString(str1, MAX);
   
    while (str1[i] != '\0') {
        if (str1[i++] != ' ') { ++count; }
    }
    
    printf("A string tem %d caracters", count);
    
    return 0;
}
