/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercício 2
 */
int main(int argc, char** argv) {
    
    int count = 0;
    FILE *p_file_input;
    char *in, s[16];
    
    //if (argc != 2) {
    //    fprintf(stderr, "Faltam argumentos");
    //    exit(1);
    //}
    
    in = "utils.c"; // argv[1];
        
    p_file_input = fopen(in, "r");
   
    if (p_file_input == NULL) {
        printf("\nErro na abertura de %s", in);
        exit(1);
    }

    while (!feof(p_file_input)) {
        fscanf(p_file_input, "%s", &s);
        if (!feof(p_file_input)) { count++; }
    }
    printf("\nCount: %d", count);
   
    fclose(p_file_input);
    return 0;
}
