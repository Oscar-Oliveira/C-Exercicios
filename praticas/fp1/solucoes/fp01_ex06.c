/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercício 6
 */
int main(int argc, char** argv) {

    int num;
    
    puts("introduza um numero: ");
    scanf("%d", &num);
    
    printf("O antecessor é: %d", num - 1);
    printf("\nO sucessor é: %d", num + 1);
        
    return 0;
}

