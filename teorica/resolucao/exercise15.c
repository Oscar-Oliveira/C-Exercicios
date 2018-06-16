/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define ARR_SIZE 20

/*
 * Exercise 15
 */

int main(int argc, char** argv) {
    int i=0, arr[ARR_SIZE];
    
    for (; i < ARR_SIZE; ++i) { arr[i] = i; }
    
    for (i=0; i < ARR_SIZE; ++i) { printf("%d ", arr[i]); }
    
    return 0;
}

