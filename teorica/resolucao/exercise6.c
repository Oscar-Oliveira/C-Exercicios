/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercise 6
 */
int main(int argc, char** argv) {
    int position, points = 0;
    
    puts("insert position:");
    scanf("%d", &position);
    
    switch (position) {
        case 1: points = 10; break;
        case 2: points = 8; break;
        case 3: points = 6; break;
        case 4: points = 5; break;
        case 5: points = 4; break;
        case 6: points = 3; break;
        case 7: points = 2; break;
        case 8: points = 1; break;
    }
        
    printf("points: %d", points);
   
    return 0;
}

