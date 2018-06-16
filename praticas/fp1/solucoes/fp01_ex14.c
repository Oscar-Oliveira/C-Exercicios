/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercício 14
 */
int main(int argc, char** argv) {

    int candidato1, candidato2, candidato3, candidato4, candidato5;
    long total;
    
    puts("Candidato 1: "); scanf("%d", &candidato1);
    puts("Candidato 2: "); scanf("%d", &candidato2);
    puts("Candidato 3: "); scanf("%d", &candidato3);
    puts("Candidato 4: "); scanf("%d", &candidato4);
    puts("Candidato 5: "); scanf("%d", &candidato5);
    
    total = candidato1 + candidato2 + candidato3 + candidato4 + candidato5;
    
    printf("Candidato 1: %.2lf%%", (candidato1 / (double)total) * 100);
    printf("Candidato 2: %.2lf%%", (candidato2 / (double)total) * 100);
    printf("Candidato 3: %.2lf%%", (candidato3 / (double)total) * 100);
    printf("Candidato 4: %.2lf%%", (candidato4 / (double)total) * 100);
    printf("Candidato 5: %.2lf%%", (candidato5 / (double)total) * 100);
    
    return 0;
}


