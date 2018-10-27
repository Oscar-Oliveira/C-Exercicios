/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define D2E 0.85
#define E2D 1.17

/*
 * Exercise 14
 */

double convert(double value, char type) {
    return value * (type == 'D' || type == 'd' ? D2E : E2D);
}

int main(int argc, char** argv) {
    double value;
    char operation;
 
    puts("\ninsert operation [D|E]:");
    scanf("%c", &operation);
    
    if (operation == 'D' || operation == 'd' || operation == 'E' || operation == 'e' ) {
    
        puts("\ninsert value:");
        scanf("%lf", &value);

        printf("value: %.3lf", convert(value, operation));
        
    } else {
        puts("Invalid operation");
    }
    
    return 0;
}

