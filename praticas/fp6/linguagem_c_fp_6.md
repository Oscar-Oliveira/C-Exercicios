
# Ficha prática nº 6 - Strings

## Notas
* Os programas devem ser desenvolvidos em C.
* Sempre que possível, utilize as boas práticas apresentadas na componente teórica.
* Salvo indicação em contrário, todos os dados necessários para correr o programa deverão ser solicitados ao utilizador.
* Salvo indicação em contrário, assuma que o utilizador irá inserir valores com tipos (ex.: horas - inteiro) e gamas (ex.: horas do dia – 0 a 23) corretos.
* __Assuma um tamanho máximo de 25 caracteres para a strings pedidas aos utilizadores.__

## Exercícios

1. Crie o header files (utils.h) e respetivo código (utils.c) a ser utilizado nos próximos exercícios. 
    * Incorpore no header files um método para a limpeza do buffer com o nome clean_buffer.
    * Incorpore no header files o código seguinte. O código que permite a leitura de uma string truncando-a, caso o seu tamanho seja superior a um tamanho máximo.
        ```c
        int lerString(char *string, int max) {
            if (fgets(string, max, stdin) != NULL) {
                int tamanho = strlen(string) - 1;
                if (string[tamanho] == ‘\n’) { string[tamanho] = ‘\0’; } 
                else{ clean_buffer(); }
                return 1;
            } 
            return 0;    
        }
        ```
2. Crie um programa que leia uma string utilizando a função lerString apresentada no ponto anterior.  
3. Crie um programa que leia duas strings e que as imprima ordenadas alfabeticamente.
4. Crie um programa que leia uma string e que copie a string lida para uma segunda string. 
5. Crie um programa que leia uma string e indique quantos caracteres contem.
6. Crie um programa que leia uma string e um caracter do utilizador. O programa deverá indicar quantas vezes o caracter aparece na string. 
    * Inclua no header files uma função (lerChar) para ler caracteres e outra para contar o número de ocorrências de um caracter numa string (countChar).
7. Crie um programa que leia o nome completo de uma pessoa e indique quantos caracteres tem esse nome excluindo os espaços.
8. Crie um programa que leia o nome completo de uma pessoa para uma string e imprima o nome da pessoa no formato: apelido, nome sem apelido. 
    * Deverá criar uma função (lastIndex) que indique a última posição de um caracter numa string (devolve -1 se o caracter não estiver contido na string). 
    * Inclua a função (lastIndex) no header files. 
9.	Crie um programa que leia duas strings e as concatene com uma virgula entre elas.
