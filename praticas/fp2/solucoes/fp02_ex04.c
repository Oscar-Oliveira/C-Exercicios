/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define STR "O menor numero é %d"

/*
 * Exercício 4
 */
int main(int argc, char** argv) {

    int num1, num2, num3;
            
    puts("num 1: "); scanf("%d", &num1); 
    puts("num2 2: "); scanf("%d", &num2); 
    puts("num2 3: "); scanf("%d", &num3); 
    
    if (num1 <= num2 && num1 <= num3) { 
        printf(STR, num1); 
    } else if (num2 <= num3) { 
        printf(STR, num2); 
    } else { 
        printf(STR, num3); 
    }
    
    return 0;
}


