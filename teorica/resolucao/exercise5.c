/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercise 5
 */
int main(int argc, char** argv) {
    int grade1, grade2;
    
    puts("Grade 1:");
    scanf("%d", &grade1);
    
    puts("Grade 2:");
    scanf("%d", &grade2);
    
    if (grade1 >= 10 && grade2 >= 10) {
	printf("Approved, excused from exame.");
    } else { 
        printf("Failed. have to go to exam."); 
    }
    
    return 0;
}

