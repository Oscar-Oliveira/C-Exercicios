/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define LIMIT 100

/*
 * Exercise 8
 */
int main(int argc, char** argv) {
    int sum = 0, num;
 
    while (sum < LIMIT) {
        puts("\ninsert value:");
        scanf("%d", &num);
        sum += num;        
    }
	
	printf("sum: %d", sum);
    
    return 0;
}

