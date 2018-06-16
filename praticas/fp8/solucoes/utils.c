/* 
 * File:   utils.c
 * Author: OAO
 */

#include "utils.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int clean_buffer() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
    return 1; 
}

int lerString(char *string, int max) {
    if (fgets(string, max, stdin) != NULL) {
        unsigned int tamanho = strlen(string) - 1;
        if (string[tamanho] == '\n') { string[tamanho] = '\0'; } 
        else{ clean_buffer(); }
        return 1;
    } 
    return 0;    
}

char lerChar() {
    char c;
    scanf("%c", &c);
    clean_buffer();
    return c; 
}

int countChar(char c, char *string) {
    int i=0, count=0;
    while (string[i] != '\0') {
        if (string[i++] == c) { ++count; }
    }
    return count;
}

int lastIndex(char *string, char c) {
    int i=0, index=-1;
    while (string[i] != '\0') {
        if (string[i] == c) { index = i; }
        ++i;
    }
    return index;
}

