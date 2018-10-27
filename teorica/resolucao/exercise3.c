/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define LOWER_THAN_1500 0.2
#define BETWEEN_1500_2000 0.30
#define BETWEEN_2000_2500 0.35
#define GREATER_THAN_2500 0.4

/*
 * Exercise 3
 */
int main(int argc, char** argv) {
    double salary, tax;
    
    puts("insert salary:");
    scanf("%lf", &salary);
    
    if (salary > 2500) {
        tax = salary * GREATER_THAN_2500;
    } else if (salary > 2000) {
        tax = salary * BETWEEN_2000_2500;
    } else if (salary > 1500) {
        tax = salary * BETWEEN_1500_2000;
    } else {
        tax = salary * LOWER_THAN_1500;
    }
    
    printf("You must pay %.2lf", tax);
   
    return 0;
}

