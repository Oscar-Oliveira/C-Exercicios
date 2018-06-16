/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define LOWER_THAN_1500 0.2
#define GREATER_THAN_1500 0.3

/*
 * Exercise 2
 */
int main(int argc, char** argv) {
    double salary, tax;
    
    puts("insert salary:");
    scanf("%lf", &salary);
    
    if (salary > 1500) {
        tax = salary * GREATER_THAN_1500;
    } else {
        tax = salary * LOWER_THAN_1500;
    }
    
    printf("You must pay %.2lf", tax);
   
    return 0;
}
