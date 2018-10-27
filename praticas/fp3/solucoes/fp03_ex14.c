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

    int i, voto, count, count1, count2, count3, count4, count0, count9;
    voto = count = count1 = count2 = count3 = count4 = count0 = count9 = 0;
    
    while (voto != -1) {
        
        puts("voto:");
        scanf("%d", &voto);

        if (voto == 1) { ++count1; } 
        else if (voto == 2) { ++count2; } 
        else if (voto == 3) { ++count3; } 
        else if (voto == 4) { ++count4; } 
        else if (voto == 0) { ++count0; } 
        else if (voto == 9) { ++count9; }  
    }
    
    count = count1 + count2 + count3 + count4 + count0 + count9;

    printf("\ntotal de votos: %d", count); 
    
    printf("\ntotal de votos c1: %d", count1); 
    printf("\ntotal de votos c2: %d", count2); 
    printf("\ntotal de votos c3: %d", count3); 
    printf("\ntotal de votos c4: %d", count4); 
    printf("\ntotal de votos em branco: %d", count0); 
    printf("\ntotal de votos nulos: %d", count9); 
    
    printf("\n%% de votos c1: %.2lf", (count1/(double)count) * 100); 
    printf("\n%% de votos c2: %.2lf", (count2/(double)count) * 100); 
    printf("\n%% de votos c3: %.2lf", (count3/(double)count) * 100); 
    printf("\n%% de votos c4: %.2lf", (count4/(double)count) * 100); 
    printf("\n%% de votos em branco: %.2lf", (count0/(double)count) * 100); 
    printf("\n%% de votos nulos: %.2lf", (count9/(double)count) * 100); 
    
    return 0;
}
