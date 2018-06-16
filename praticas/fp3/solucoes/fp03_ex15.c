/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define MIN_IDADE 16
#define MAX_IDADE 150

#define MIN_SALARIO 600

int clean_buffer() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
    return 1; 
}

/*
 * Exercício 15
 */
int main(int argc, char** argv) {

    int i, idade = 0, estado_civil, count = 0, count_F1500 = 0, count_M18352 = 0;
    int menor_idade = MAX_IDADE, maior_idade = MIN_IDADE;
    
    char sexo;
    double soma_salarios = 0, salario;
    
    while (idade != -1) {
        
        do {
            puts("\nIdade:"); scanf("%d", &idade);
            clean_buffer(); 
        } while ((idade < MIN_IDADE || idade > MAX_IDADE) && idade != -1);
        
        if (idade != -1) {
            
            do {
                puts("Sexo:"); scanf("%c", &sexo);
                clean_buffer();
            } while (sexo != 'M' && sexo != 'F');
                    
            do {
                puts("Estado civil:"); scanf("%d", &estado_civil);
                clean_buffer();
            } while (estado_civil < 1 || estado_civil > 4);
            
            do {
                puts("Salario:"); scanf("%lf", &salario);
                clean_buffer();
            } while (salario < MIN_SALARIO);
            
            if (menor_idade > idade) { menor_idade = idade; }
            if (maior_idade < idade) { maior_idade = idade; }
            if (sexo == 'F' && salario < 1500) { ++count_F1500; }
            if (sexo == 'M' && idade >=18 && idade <= 35 && estado_civil == 2) { ++count_M18352; }

            soma_salarios += salario;           
            ++count;
        }    
    }
    
    printf("\nCount: %d", count);
    
    printf("\nMaior idade: %d", maior_idade);
    printf("\nMenor idade: %d", menor_idade);
    
    printf("\nMédio salarios: %.2lf", soma_salarios / count);
    printf("\nFem. sal < 1500: %d", count_F1500);
    printf("\nMasc. [18..35] casado: %d", count_M18352);
    
    return 0;
}
