
# Ficha prática nº 4 - Funções

## Notas
* Os programas devem ser desenvolvidos em C.
* Sempre que possível, utilize as boas práticas apresentadas na componente teórica.
* Salvo indicação em contrário, todos os dados necessários para correr o programa deverão ser solicitados ao utilizador.
* Salvo indicação em contrário, assuma que o utilizador irá inserir valores com tipos (ex.: horas - inteiro) e gamas (ex.: horas do dia – 0 a 23) corretos.

## Exercícios

1. Faça um programa que leia um valor inteiro do utilizador e crie uma função que imprima numa linha um número de asteriscos igual ao valor inserido pelo utilizador. O valor inteiro deve ser lido através de uma função. Considere o seguinte protótipo para a leitura do número:
    ```c
    /*  
     *   Solicita um número inteiro ao utilizador 
     *   @return int O número introduzido pelo utilizador
     */
    int lerInteiro();
    ```
2. Faça um programa que solicite dois números inteiros ao utilizador e que permite depois ao utilizador escolher entre 4 operações aritméticas: adição, subtração, multiplicação e divisão. Cada uma dessas operações deve ser implementada através de uma função específica para esse propósito. Faça duas versões deste algoritmo: uma usando apenas variáveis globais e outra usando apenas variáveis locais.
3. Faça um programa que permita ao utilizador introduzir um valor real (double) e um caracter. Crie uma função que receba esses 2 parâmetros e que converta o número de Euros para Dólares no caso de o caracter ser ‘E’ e que que converta o número de Dólares para Euros no caso de o caracter ser ‘D’. A mesma função deve permitir fazer as duas conversões. O resultado deve ser impresso na função principal do programa. Crie uma função lerChar() que solicite um caracter ao utilizador e retorne esse mesmo caracter, e outra função lerDouble() que faça o mesmo mas para valores double.
4. Faça um programa que leia um número inteiro (n). Depois, através de uma função, peça ao utilizador n notas de um aluno. Por fim, através de uma outra função, calcule a média das notas desse aluno. A média deve ser impressa na função principal do programa.
5. Faça um programa que calcule, através de uma função, o fatorial de um número inteiro lido do utilizador. Lembre-se que:
    ```
    n! = n × (n - 1) × (n - 2) × ... × 1
    0! = 1! = 1
    ```
6. Faça um programa para desenhar um retângulo no ecrã. Esse quadrado deverá ser desenhado por uma função para a qual são passados três parâmetros: caracter a utilizar, número de linhas e número de colunas. Segue-se um exemplo do programa a ser executado, ilustrando aquilo que se pretende:         
    ``` 
    Introduza um caracter: z 
    Introduza o numero de linhas: 4
    Introduza o numero de colunas: 6
        zzzzzz
        z    z
        z    z
        zzzzzz
    ```
7. Altere a função lerInteiro criada no exercício 1, por forma a validar o intervalo de valores permitido. Segue abaixo um exemplo do protótipo da função:
    ```c
    int lerInteiro(int min, int max);
    ```
8. Implemente um programa que leia do utilizador as notas de 10 alunos. Considere que as notas têm uma gama de valores de 0-20. Implemente a leitura numa função independente e utilize a função implementada na questão anterior para a leitura de cada nota. 
9. Fazer um programa em C que imprima os números de 0 até um número introduzido pelo utilizador, usando apenas uma variável.
