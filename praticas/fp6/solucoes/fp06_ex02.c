/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#include "utils.h"

#define MAX 26

/*
 * Exercício 2
 */
int main(int argc, char** argv) {
    
    char str[MAX];
    
    puts("Insira um texto: ");
    lerString(str, MAX);
    
    puts(str); // ou printf("%s", str);
    
    return 0;
}
