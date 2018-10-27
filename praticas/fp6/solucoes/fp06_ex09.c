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
 * Exercício 9
 */
int main(int argc, char** argv) {
    
    char str1[MAX], str2[MAX], str3[MAX * 2];
    int i;
    
    puts("Insira um texto: ");
    lerString(str1, MAX);
    
    puts("Insira um texto: ");
    lerString(str2, MAX);
    
    strcpy(str3, str1);
    strcat(str3, ",");
    strcat(str3, str2);
    
    puts(str3);
    
    return 0;
}
