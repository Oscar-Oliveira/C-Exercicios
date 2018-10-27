/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define MIN 0
#define MAX 20

#define MSG_PASSOU "O aluno passou"
#define MSG_NPASSOU "O aluno não passou"

/*
 * Exercício 13
 */
int main(int argc, char** argv) {

    int i, num = -1;
    
    while (num < MIN || num > MAX) {
        puts("num:"); scanf("%d", &num);
    }
  
    printf("%s", num >=10 ? MSG_PASSOU : MSG_NPASSOU); 
    
    return 0;
}
