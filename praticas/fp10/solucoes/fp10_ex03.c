/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "utils.h"

#define MAX_NOME    31

#define ERRO_ABERTURA       "\nA abertura de ficheiro não foi concretizada com sucesso."
#define ERRO_EXISTE         "\nO codigo de aluno ja se encontra na base de dados."
#define ERRO_INSERCAO       "\nA inserção não foi concretizada com sucesso."
#define ERRO_COD_NAO_EXISTE "\nO codigo de aluno nao existe."
#define ERRO_ALTERACAO      "\nA alteracao não foi concretizada com sucesso."
#define ERRO_REMOCAO        "\nA remocao não foi concretizada com sucesso."

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

int inserir(char *ficheiro) {
    FILE *fp;
    Aluno aluno, novo_aluno;
    int posicao = 0, pos_disponivel = -1;
    
    if ((fp = fopen(ficheiro, "r+b")) == NULL) {
        if ((fp = fopen(ficheiro, "w+b")) == NULL) {
            fprintf(stderr, ERRO_ABERTURA);
            return 0;
        }
    }

    ler(&novo_aluno);
    
    while (fread(&aluno, sizeof(Aluno), 1, fp)) {
        if (aluno.numero == -1) {
            pos_disponivel = posicao;
            break;
        }        
        posicao = ftell(fp);
    }

    if (pos_disponivel != -1) { fseek(fp, pos_disponivel, SEEK_SET); }

    if (fwrite(&novo_aluno, sizeof(Aluno), 1, fp) != 1) {
        fprintf(stderr, ERRO_INSERCAO);
        return 0;
    }

    fclose(fp);
    return 1;
}

int listar(char *ficheiro) {
    FILE * fp;
    Aluno aluno;

    if ((fp = fopen(ficheiro, "rb")) == 0) {
        fprintf(stderr, ERRO_ABERTURA);
        return 0;
    }
    
    cabecalho();
    while (fread(&aluno, sizeof(Aluno), 1, fp)) { 
        if (aluno.numero != -1) { escrever(aluno);  }
    }
    
    fclose(fp);
    return 1;
}

int consultar(char *ficheiro) {
    FILE * fp;
    Aluno aluno;
    int encontrou = 0, numero;

    if ((fp = fopen(ficheiro, "rb")) == 0) {
        fprintf(stderr, ERRO_ABERTURA);
        return 0;
    }
 
    printf("\nNumero: ");
    scanf("%d", &numero);
    
    if (numero != -1) {

        while (fread(&aluno, sizeof(Aluno), 1, fp)) {
            if (aluno.numero == numero) {
                cabecalho();
                escrever(aluno);
                encontrou = 1;
                break;
            }
        }
        
    }

    if (!encontrou) { fprintf(stdout, ERRO_COD_NAO_EXISTE); }
    
    fclose(fp);
    return 1;
}

int alterar(char *ficheiro) {
    FILE * fp;
    Aluno aluno;
    int encontrou = 0, numero;

    if ((fp = fopen(ficheiro, "r+b")) == 0) {
        fprintf(stderr, ERRO_ABERTURA);
        return 0;
    }
 
    printf("\nNumero: ");
    scanf("%d", &numero);

    while (fread(&aluno, sizeof(Aluno), 1, fp)) {

        if (aluno.numero == numero) {

            ler(&aluno);
    
            fseek(fp, -(int)sizeof(Aluno), SEEK_CUR);

            if (fwrite(&aluno, sizeof(Aluno), 1, fp) != 1) {
                fprintf(stderr, ERRO_ALTERACAO);
                return 0;
            }

            encontrou = 1;
            break;
        }
    }
    
    if (!encontrou) { fprintf(stdout, ERRO_COD_NAO_EXISTE); }

    fclose(fp);
    return 1;
}

int remover(char *ficheiro) {
    FILE * fp;
    Aluno aluno;
    int encontrou = 0, numero;
    Aluno disponivel;
    
    disponivel.numero = -1;
    strcpy(disponivel.nome, "");
    disponivel.data_nasc.ano = 0;
    disponivel.data_nasc.mes = 0;
    disponivel.data_nasc.dia = 0;
    
    if ((fp = fopen(ficheiro, "r+b")) == 0) {
        fprintf(stderr, ERRO_ABERTURA);
        return 0;
    }

    printf("\nNumero: ");
    scanf("%d", &numero);

    while (fread(&aluno, sizeof(Aluno), 1, fp) == 1) {
        if (aluno.numero == numero) {

            fseek(fp, -(int)sizeof(Aluno), SEEK_CUR);

            if (fwrite(&disponivel, sizeof(Aluno), 1, fp) != 1) {
                fprintf(stderr, ERRO_REMOCAO);
                return 0;
            }
            
            encontrou = 1;
            break;
        }
    }

    if (!encontrou) { fprintf(stdout, ERRO_COD_NAO_EXISTE); }

    fclose(fp);
    return 1;
}

int menu(char *ficheiro) {
    int opcao;
    
    do {
        printf("\n---------------------");
        printf("\n1 - Inserir");
        printf("\n2 - Listar");
        printf("\n3 - Consultar");        
        printf("\n4 - Alterar");        
        printf("\n5 - Remover");
        printf("\n0 - Sair");
        printf("\n---------------------");
        
        printf("\nOpcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: inserir(ficheiro); break;
            case 2: listar(ficheiro); break;
            case 3: consultar(ficheiro); break;
            case 4: alterar(ficheiro); break;
            case 5: remover(ficheiro); break;            
            case 0: break;            
            default: printf("\nOpcao invalida!");
        }

    } while (opcao != 0);
}


int main(int argc, char **argv) {

    char *ficheiro = "alunos.dat";
    
    menu(ficheiro);

    return 0;
}
