/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercise 9
 */
int main(int argc, char** argv) {
    int num = 0;
    
    do {
        printf("\n%d", num);
        num += 2; 
    } while (num <= 20);
   
    return 0;
}

