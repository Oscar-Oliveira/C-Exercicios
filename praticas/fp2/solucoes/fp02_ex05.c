/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercício 4
 */
int main(int argc, char** argv) {

    double num1, num2;
    char operacao;
    
    puts("operação: "); scanf("%c", &operacao); 
            
    puts("num 1: "); scanf("%lf", &num1); 
    puts("num2 2: "); scanf("%lf", &num2); 
    
    switch (operacao) {
        case '+': printf("Adi: %.2lf", num1 + num2); break;
        case '-': printf("Sub: %.2lf", num1 - num2); break;
        case '*': printf("Mul: %.2lf", num1 * num2); break;
        case '/': printf("Div: %.1lf", num1 / num2); break;
    }
    
    return 0;
}


