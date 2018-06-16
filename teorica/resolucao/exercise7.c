/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercise 7
 */
int main(int argc, char** argv) {
    int num = 0;
    
    while (num <= 20) {
        printf("\n%d", num);
        num += 2; 
    }
   
    return 0;
}

