
# Ficha prática nº 3 - Estruturas de repetição

## Notas
* Os programas devem ser desenvolvidos em C.
* Sempre que possível, utilize as boas práticas apresentadas na componente teórica.
* Salvo indicação em contrário, todos os dados necessários para correr o programa deverão ser solicitados ao utilizador.
* Salvo indicação em contrário, assuma que o utilizador irá inserir valores com tipos (ex.: horas - inteiro) e gamas (ex.: horas do dia – 0 a 23) corretos.

## Exercícios

1. Escreva um programa que imprima os números inteiros de 1 a 100 inclusive.
2. Escreva um programa que imprima os números pares no intervalo de 1 a 300 inclusive.
3. Escreva um programa que leia dois números inteiros, representando os valores início e fim de um intervalo e imprima os números nesse intervalo.
4. Escreva um programa que imprima os números inteiros de 1 a 100 inclusive e no final imprima o valor do seu somatório.
5. Escreva um programa que leia um número inteiro e imprima os 5 anteriores e os 5 seguintes.
6. Escreva um programa que leia um número inteiro (variável limite), um incremento (variável salto) e imprima os números inteiros de 0 até limite inclusive, com incremento de salto. Admita que limite e salto são maiores que zero. 
    * Exemplo:    
    	* Valores lidos: 30 (limite) 5 (salto)
            * Resultado: 0 5 10 15 20 25 30
        * Valores lidos: 10 (limite) 3 (salto)
            * Resultado: 0 3 6 9
7. Escreva um programa que leia um número inteiro positivo e imprima os números ímpares menores do que esse número (até 0) por ordem decrescente. Garanta que o utilizador introduz um número maior que 0.
8. Escreva um programa que leia um número inteiro positivo (n) e imprima os n primeiros números pares.
9. Escreva um programa que imprima a tabuada de um número inteiro introduzido pelo utilizador. Exemplo do resultado pretendido:
    ```
    2 x 1 = 2
    2 x 2 = 4
    2 x 3 = 6
    … … … …
    ```
10. Escreva um programa que imprima as tabuadas dos números inteiros de 1 a 10.
11.	Escreva um programa que indique se um número é primo ou não (um número é primo se tiver exatamente dois divisores distintos). Exemplos: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97. 
12. Escreva um programa que vai pedindo números ao utilizador até que este introduza o número -1. O computador deve dizer a média dos números introduzidos (excluindo o -1).
13.	Escreva um programa que leia uma nota inteira com um intervalo de 0 a 20. No final indique se o aluno obteve aprovação. Deve garantir que o utilizador introduz um valor entre 0 e 20.
14. Numa eleição presidencial existem quatro candidatos. Os votos são indicados através de códigos. Garanta que os códigos introduzidos pertencem à gama de valores definida abaixo. Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:
    * 1, 2, 3, 4 = voto para os candidatos 1, 2, 3, 4, respetivamente;
    * 0 = voto em branco;
    * 9 = voto nulo.

    Escreva um programa que leia um número desconhecido de votos através dos códigos indicados acima. A leitura de votos termina com a leitura do valor -1. No final, o programa deve imprimir:
    *  Total de votos;
    * Total de votos para cada candidato, votos nulos e votos em branco;
    * Percentagem de votos para cada candidato, de votos nulos e de votos em branco.
15.	Foi realizada uma pesquisa sobre algumas características da população de uma certa região, na qual se recolheram os seguintes dados referentes a cada habitante:
    * Idade [16..150];
    * Sexo (M ou F);
    * Estado civil (Solteiro: 1, Casado: 2, Divorciado: 3 ou Viúvo: 4);
    * Salário (> que o salário mínimo nacional).
    
    Escreva um programa que permita introduzir estes dados sobre um número indeterminado de habitantes. A entrada de dados termina quando for digitada uma idade negativa. Garanta que toda a informação introduzida respeita o domínio dos elementos definidos acima. No final o programa deve imprimir:
    * A maior e menor idade do grupo;
    * A média de salários do grupo;
    * A quantidade de indivíduos do sexo feminino com salário até 500€;
    * A quantidade de indivíduos do sexo masculino cuja idade está entre 18 e 35 anos inclusive e que sejam casados.
