/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define ARR_SIZE 10

/*
 * Exercise 16
 */

int main(int argc, char** argv) {
    float sum=0 , arr[ARR_SIZE];
    int i=0;
    
    for (; i < ARR_SIZE; ++i) { 
        printf("insert value %d:", i); 
        scanf("%f", &arr[i]);
        sum += arr[i];
    }
    
    for (i=0; i < ARR_SIZE; ++i) { printf("\n%d: %.2f ", i, arr[i]); }
    
    printf("\n\nsum: %f", sum); 
    
    return 0;
}

