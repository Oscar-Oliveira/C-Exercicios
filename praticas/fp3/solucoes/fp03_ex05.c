/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define NEXT 5
#define PREV 5

/*
 * Exercício 5
 */
int main(int argc, char** argv) {

    int i, num;
    
    puts("Num:"); scanf("%d", &num);
    
    for (i = num + 1; i <= num + NEXT; ++i) {
        printf("%d", i);        
    }
    
    puts("");
    
    for (i = num - 1; i >= num - PREV; --i) {
        printf("%d", i);        
    }
    
    return 0;
}


