/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

typedef enum {false=0, true=1} bool;

/*
 * Exercício 11
 */
int main(int argc, char** argv) {

    int i, num;   
    bool primo = true;
    
    puts("num:"); scanf("%d", &num);

    for(i=2; i < num; ++i) {
        if (num % i == 0) { 
            primo = false;
        }
    }

    printf("%d%s é primo.", num, primo ? "" : " não");
      
    return 0;
}
