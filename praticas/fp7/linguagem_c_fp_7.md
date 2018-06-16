
# Ficha prática nº 7 - Matrizes

## Notas
* Os programas devem ser desenvolvidos em C.
* Sempre que possível, utilize as boas práticas apresentadas na componente teórica.
* Salvo indicação em contrário, todos os dados necessários para correr o programa deverão ser solicitados ao utilizador.
* Salvo indicação em contrário, assuma que o utilizador irá inserir valores com tipos (ex.: horas - inteiro) e gamas (ex.: horas do dia – 0 a 23) corretos.

## Exercícios

1. Faça um programa que preencha cada posição de uma matriz (3x3 elementos inteiros) com um valor introduzido pelo utilizador. 
    * Deverá indicar qual o maior e qual o menor dos valores guardados na matriz.
    * Deverá imprimir todo o conteúdo da matriz da forma exemplificada:
        ```
        3 8 1
        7 4 2
        5 1 9
        ```

2. Faça um programa que preencha cada posição de uma matriz 4x5 com valores inteiros introduzidos pelo utilizador. Deverá depois ler um outro valor do utilizador e indicar quantos vezes existe na matriz.
3. Faça um programa que registe o código e as 2 notas de um grupo de 4 alunos. Esses dados devem ser armazenados numa matriz. Pretende-se que calcule a média de cada aluno e apresente no final os dados da seguinte forma:
    ```
    Codigo	Nota 1	Nota 2	Media
    804	    10	    12	11.00
    345	     5	    15	10.00
    123	    16	    17	16.50
    745	     8	    11	 9.50
    ```
    
4. Faça um programa que, dada uma matriz quadrada de dimensão N, armazene e escreva a sua matriz transposta. Nota: a
    * A transposta da matriz A[N][N] é uma matriz B[N][N] em que B[i][j]= A[j][i] para i, j = 0 .. N-1. 
    * Exemplo:
        ```
        A = 2 -8  5	B = 2 -3  7
        -3  1  4	   -8  1 -2
            7 -2  3	    5  4  3
        ```

5. Faça um programa que, dada uma matriz quadrada de dimensão N (uma constante definida por si), armazene e escreva essa matriz com uma rotação de 90 graus no sentido dos ponteiros do relógio. Não utilize nenhuma matriz ou vetor auxiliar. 
    * Exemplo:
        ```
        Inicial     Final
        1 2 3 4     3 1 7 1
		7 8 9 0     3 1 8 2
		1 1 1 1     3 1 9 3
		3 3 3 3     3 1 0 4
        ```

6. Faça um programa que armazene duas matrizes e as multiplique apresentando no final a matriz resultante. Considere que a dimensão máxima de qualquer uma das matrizes é de 10x10 e que todos os elementos são do tipo inteiro. As dimensões, assim como todos os elementos de cada matriz, são pedidas ao utilizador. Deve verificar se a operação é possível com os dados indicados pelo utilizador. 

