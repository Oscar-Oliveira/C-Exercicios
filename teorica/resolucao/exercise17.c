/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define START 5
#define ARR_SIZE 21

/*
 * Exercise 17
 */

int main(int argc, char** argv) {
    int i, arr[ARR_SIZE];
    
    for (i=0; i < ARR_SIZE; ++i) { 
        arr[i] = i + START;        
    }
    
    for (i=0; i < ARR_SIZE; ++i) { printf("\n%d: %d ", i, arr[i]); }
        
    return 0;
}

