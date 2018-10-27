/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercise 4
 */
int main(int argc, char** argv) {
    int position, points = 0;
    
    puts("insert position:");
    scanf("%d", &position);
    
    if (position == 1) {
        points = 10; 
    } else if (position == 2) {
        points = 8; 
    } else if (position == 3) {
        points = 6; 
    } else if (position == 4) {
        points = 5; 
    } else if (position == 5) {
        points = 4; 
    } else if (position == 6) {
        points = 3; 
    } else if (position == 7) {
        points = 2; 
    } else if (position == 8) {
        points = 1; 
    }
    
    printf("points: %d", points);
   
    return 0;
}

