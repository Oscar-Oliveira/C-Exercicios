/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define LIMIT 100

/*
 * Exercise 12
 */
int main(int argc, char** argv) {
    int sum = 0, num;
 
    for (;sum < LIMIT; sum += num) {
        puts("\ninsert value:");
        scanf("%d", &num);
    }
    
    printf("sum: %d", sum);
    
    return 0;
}

