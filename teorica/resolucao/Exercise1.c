/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercise 1
 */
int main(int argc, char** argv) {
    int first_value, second_value;
    \
    puts("insert first value:");
    scanf("%d", &first_value);
    
    puts("insert second value:");
    scanf("%d", &second_value);
    
    if (first_value > second_value) {
        puts("first value is greater than second value.");
    } else {
        puts("first value is less or equal than second value.");
    }
    
    return 0;
}

