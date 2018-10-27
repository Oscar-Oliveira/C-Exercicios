/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define PONDERACAO1 .25
#define PONDERACAO2 .35
#define PONDERACAO3 .40

/*
 * Exercício 3
 */
int main(int argc, char** argv) {

    int nota1, nota2, nota3;
    double media;
        
    puts("nota 1: "); scanf("%d", &nota1); 
    puts("nota 2: "); scanf("%d", &nota2); 
    puts("nota 3: "); scanf("%d", &nota3); 
    
    media = (nota1 * PONDERACAO1) 
          + (nota2 * PONDERACAO2) 
          + (nota3 * PONDERACAO3);
    
    if (media >= 9.5) { 
        printf("O aluno está aprovado com média de %.2lf", media);
    } else {
        printf("O aluno está reprovado com média de %.2lf", media);
    }
    
    return 0;
}


