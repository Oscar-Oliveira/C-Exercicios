/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercício 7
 */
int main(int argc, char** argv) {

    int num1, num2, num3;
           
    puts("num1: "); scanf("%d", &num1); 
    puts("num2: "); scanf("%d", &num2); 
    puts("num3: "); scanf("%d", &num3); 
       
    
    // versão 1
    if (num1 < num2 && num1 < num3) {
        printf("%d ", num1);
        if (num2 < num3) { printf("%d %d", num2, num3); }
        else { printf("%d %d", num3, num2); }
    } else if (num2 < num1 && num2 < num3) {
        printf("%d ", num2);
        if (num1 < num3) { printf("%d %d", num1, num3); }
        else { printf("%d %d", num3, num1); }        
    } else {
        printf("%d ", num3);
        if (num1 < num2) { printf("%d %d", num1, num2); }
        else { printf("%d %d", num2, num1); }
    }
    
    // versão 2
    if (num2 > num3) {
        num2 += num3;
        num3 = num2 - num3;
        num2 -= num3;
    }
    if (num1 > num2) {
        num1 += num2;
        num2 = num1 - num2;
        num1 -= num2;
    }
    if (num2 > num3) {
        num2 += num3;
        num3 = num2 - num3;
        num2 -=num3;
    }
    
    printf("\n\n%d %d %d", num1, num2, num3); 
    
    return 0;
}


