/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define SYMBOL '*'

/*
 * Exercise 13
 */

void print(int value) {
    int i=0;
    for (;i < value; ++i) { printf("%c", SYMBOL); }
}

int main(int argc, char** argv) {
    int num;
 
    puts("\ninsert value:");
    scanf("%d", &num);
    
    puts("");
    
    print(num);
    
    return 0;
}

