/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercício 1
 */
int main(int argc, char** argv) {
    
    FILE *p_file_input, *p_file_output;
    char ch, *in, *out;
    
    if(argc != 3) {
        fprintf(stderr, "Faltam argumentos");
        exit(1);
    }
    
    in = argv[1];
    out = argv[2];
    
    p_file_input = fopen(in, "r");
    p_file_output = fopen(out, "w");
    
    if (p_file_input != NULL && p_file_output != NULL) {
        while ((ch = getc(p_file_input)) != EOF) { putc(ch, p_file_output); }
        fclose(p_file_input);
        fclose(p_file_output);
        printf("\n%s copied to %s", in, out);
    }

    return 0;
}
