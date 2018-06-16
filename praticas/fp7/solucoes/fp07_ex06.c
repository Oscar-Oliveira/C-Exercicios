/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

#define N 10

/*
 * Exercício 6
 */
int main(int argc, char** argv) {

    int i, j, m1_linhas, m1_colunas, m2_linhas, m2_colunas, k, soma, m1[N][N], m2[N][N], m3[N][N];

    puts("M1 Linhas:"); scanf("%d", &m1_linhas);
    puts("M1 Colunas:"); scanf("%d", &m1_colunas);
    
    for (i = 0; i < m1_linhas; ++i) {
        for (j = 0; j < m1_colunas; ++j) {
            printf("A[%d][%d]", i, j);
            scanf("%d", &m1[i][j]);
        }
    }

    puts("M2 Linhas:"); scanf("%d", &m2_linhas);
    puts("M2 Colunas:"); scanf("%d", &m2_colunas);
   
    if (m1_colunas == m2_linhas) {
        
        for (i = 0; i < m2_linhas; ++i) {
            for (j = 0; j < m2_colunas; ++j) {
                printf("B[%d][%d]", i, j);
                scanf("%d", &m2[i][j]);
            }
        }

        for (i = 0; i < m1_linhas; ++i) {
            for (j = 0; j < m2_colunas; ++j) {
                soma = 0;
                for (k = 0; k < m2_linhas; ++k) {
                    soma +=  m1[i][k] * m2[k][j];
                }
                m3[i][j] = soma;                
            }
        }

        for (i = 0; i < m1_linhas; ++i) {
            puts("");
            for (j = 0; j < m2_colunas; ++j) {
                printf("%4d", m3[i][j]);
            }
        }
        
    } else { puts("Não é possível efetuar a multiplicação."); }

    return 0;
}
