/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define D2E 0.84593
#define E2D 1.18213

int clean_buffer() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
    return 1; 
}

char lerChar() {
    char c;
    scanf("%c", &c);
    clean_buffer();
    return c; 
}

double lerDouble() {
    double d;
    scanf("%lf", &d);
    clean_buffer();
    return d; 
}

double converte(char moeda, double valor) {    
    return (moeda == 'E') ? valor * E2D : valor * D2E;
}

/*
 * Exercício 3
 */
int main(int argc, char** argv) {
    
    double valor, moeda;
    
    puts("Valor:");
    valor = lerDouble();
    
    puts("Moeda:");
    moeda = lerChar();
    
    printf("Conversão: %.2lf", converte(moeda, valor));
    
    return 0;
}
