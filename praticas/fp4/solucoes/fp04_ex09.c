/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>

int i;

void print() {   
    if (--i) { print(); }
    printf("%d", i++);
}

/*
 * Exercício 9
 */
int main(int argc, char** argv) {
	scanf("%d", &i);
    if (i > 0) { print(); }
    return 0;
}
