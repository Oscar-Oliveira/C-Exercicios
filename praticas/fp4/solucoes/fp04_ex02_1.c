/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

int num1, num2;

void adicao() { printf("%d + %d = %d", num1, num2, num1+num2); }

void subtracao() { printf("%d - %d = %d", num1, num2, num1-num2); }

void multiplicacao() { printf("%d * %d = %d", num1, num2, num1*num2); }

void divisao() { printf("%d / %d = %.2lf", num1, num2, (double)num1/num2); }

/*
 * Exercício 2_1
 */
int main(int argc, char** argv) {
    char operacao;
    
    puts("\noperacao:");
    scanf("%c", &operacao);
    
    puts("\nnum1:");
    scanf("%d", &num1);
    
    puts("\nnum2:");
    scanf("%d", &num2);
    
    switch(operacao) {
        case '+': adicao(); break;
        case '-': subtracao(); break;
        case '*': multiplicacao(); break;
        case '/': divisao(); break;
    }
    
    return 0;
}
