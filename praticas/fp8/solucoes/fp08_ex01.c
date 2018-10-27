/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#include "utils.h"

#define MAX_NOME    31
#define MAX_ALUNOS  30

#define ERRO_INSERCAO       "\nAtingido o maximo de alunos."
#define ERRO_COD_NAO_EXISTE "\nO codigo de aluno nao existe."

typedef struct data { int ano, mes, dia; } Data;

typedef struct aluno {
    int numero;
    char nome[MAX_NOME];
    Data data_nasc;
} Aluno;

void cabecalho() {
    printf("\n%-20s | %-30s | %-20s", "Numero", "Nome", "Data de nascimento");
}

void escrever(Aluno aluno) {
    printf("\n%-20d | %-30s | %d/%d/%d", aluno.numero, aluno.nome, aluno.data_nasc.ano, aluno.data_nasc.mes, aluno.data_nasc.dia);
}

void ler(Aluno *aluno) {
    printf("\nNumero: "); scanf("%d", &aluno->numero);
    clean_buffer();   
    printf("Nome: "); lerString(aluno->nome, MAX_NOME);
    printf("Ano de nascimento: "); scanf("%d", &aluno->data_nasc.ano);
    printf("Mes de nascimento: "); scanf("%d", &aluno->data_nasc.mes);
    printf("Dia de nascimento: "); scanf("%d", &aluno->data_nasc.dia);
}

void inserir(Aluno DB[], int *count) {    
    if (*count < MAX_ALUNOS) { 
        ler(&DB[*count]); 
        (*count)++;
    } else { puts(ERRO_INSERCAO); }    
}

int listar(Aluno DB[], int count) {
    int i;
    cabecalho();
    for (i = 0; i < count; ++i) { escrever(DB[i]); }
}

int consultar(Aluno DB[], int count) {  
    int i, numero;

    printf("\nNumero: ");
    scanf("%d", &numero);
    
    for (i = 0; i < count; ++i) { 
        if (DB[i].numero == numero) {
            escrever(DB[i]); 
            break;
        }
    }
    
    if (i == count) { puts(ERRO_COD_NAO_EXISTE); }
 
}

int alterar(Aluno DB[], int count) {
    int i, numero;

    printf("\nNumero: ");
    scanf("%d", &numero);
    
     for (i = 0; i < count; ++i) { 
        if (DB[i].numero == numero) {
            ler(&DB[i]);
            break;
        }
    }
    
    if (i == count) { puts(ERRO_COD_NAO_EXISTE); }

}

int remover(Aluno DB[], int *count) {
    int i, numero;

    printf("\nNumero: ");
    scanf("%d", &numero);
    
    for (i = 0; i < *count; ++i) { 
        if (DB[i].numero == numero) {
            if (*count != 1) { DB[i] = DB[*count - 1]; }
            (*count)--;
            break;
        }
    }
    
    if (i == *count) { puts(ERRO_COD_NAO_EXISTE); }
}


int menu(Aluno DB[], int *count) {
    int opcao;
    
    do {
        printf("\n---------------------");
        printf("\n1 - Inserir");        
        if (*count) { 
            printf("\n2 - Listar");
            printf("\n3 - Consultar");        
            printf("\n4 - Alterar");        
            printf("\n5 - Remover");
        }
        printf("\n0 - Sair");
        printf("\n---------------------");
        printf("\nElementos: %d", *count);
        
        printf("\nOpcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: inserir(DB, count); break;
            case 2: listar(DB, *count); break;
            case 3: consultar(DB, *count); break;
            case 4: alterar(DB, *count); break;
            case 5: remover(DB, count); break;
            case 0: break;            
            default: printf("\nOpcao invalida!");
        }

    } while (opcao != 0);
}


int main(int argc, char **argv) {

    Aluno DB[MAX_ALUNOS];
    int count = 0;
    
    menu(DB, &count);

    return 0;
}
