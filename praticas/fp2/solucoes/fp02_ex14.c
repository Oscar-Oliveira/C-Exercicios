/* 
 * File:   main.c
 * Author: OAO
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercício 14
 */
int main(int argc, char** argv) {

    int saldo, montante_operacao;
    
    puts("Saldo: "); scanf("%d", &saldo); 
    puts("Operação: "); scanf("%d", &montante_operacao);
    
    if (saldo + montante_operacao > 0) {
        
        printf("\nOperação: %s", montante_operacao > 0 ? "Credito" : "Débito"); 
        saldo += montante_operacao;
        printf("\nNovo saldo: %d", saldo);
        
    } else {
        puts("Operação inválida");
    }
    
    return 0;
}


