/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define LIMIT 100

/*
 * Exercise 10
 */
int main(int argc, char** argv) {
    int sum = 0, num;
 
    do {
        puts("\ninsert value:");
        scanf("%d", &num);
        sum += num;        
    } while (sum < LIMIT);
	
	printf("sum: %d", sum);
    
    return 0;
}

