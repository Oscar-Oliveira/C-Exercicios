/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercício 12
 */
int main(int argc, char** argv) {

    int x, y;
    
    puts("X: "); scanf("%d", &x); 
    puts("Y: "); scanf("%d", &y); 

    
    if (!x && !y) { printf("No centro!"); }
    else {
        if (x > 0) {
            if (y > 0) { printf("1º Q"); }
            else if (y < 0) { printf("4º Q"); }
            else { printf("Sobre y (+x)"); }
        } else {
            if (y > 0) { printf("2º Q"); }
            else if (y < 0) { printf("3º Q"); }
            else { printf("Sobre y (-x)"); }
        }
    }
    return 0;
}


