/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercício 10
 */
int main(int argc, char** argv) {

    int num;
    double media = 0;
    
    puts("num 1: "); scanf("%d", &num); media += num;
    puts("num 2: "); scanf("%d", &num); media += num;
    puts("num 3: "); scanf("%d", &num); media += num;
    puts("num 4: "); scanf("%d", &num); media += num;
    puts("num 5: "); scanf("%d", &num); media += num;
   
    media /= 5.0; 
    
    printf("A media é : %.2lf", media);
        
    return 0;
}


