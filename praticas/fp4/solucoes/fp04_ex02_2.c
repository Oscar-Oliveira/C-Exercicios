/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

void adicao(int num1, int num2) { printf("%d + %d = %d", num1, num2, num1+num2); }

void subtracao(int num1, int num2) { printf("%d - %d = %d", num1, num2, num1-num2); }

void multiplicacao(int num1, int num2) { printf("%d * %d = %d", num1, num2, num1*num2); }

void divisao(int num1, int num2) { printf("%d / %d = %.2lf", num1, num2, (double)num1/num2); }

/*
 * Exercício 2_2
 */
int main(int argc, char** argv) {
    char operacao;
    int num1, num2;
    
    puts("\noperacao:");
    scanf("%c", &operacao);
    
    puts("\nnum1:");
    scanf("%d", &num1);
    
    puts("\nnum2:");
    scanf("%d", &num2);
    
    switch(operacao) {
        case '+': adicao(num1, num2); break;
        case '-': subtracao(num1, num2); break;
        case '*': multiplicacao(num1, num2); break;
        case '/': divisao(num1, num2); break;
    }
    
    return 0;
}
