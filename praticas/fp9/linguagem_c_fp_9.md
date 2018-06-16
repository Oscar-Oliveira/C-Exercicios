
# Ficha prática nº 3 - Memória dinámica

## Notas
* Os programas devem ser desenvolvidos em C.
* Sempre que possível, utilize as boas práticas apresentadas na componente teórica.
* Salvo indicação em contrário, todos os dados necessários para correr o programa deverão ser solicitados ao utilizador.
* Salvo indicação em contrário, assuma que o utilizador irá inserir valores com tipos (ex.: horas - inteiro) e gamas (ex.: horas do dia – 0 a 23) corretos.

## Exercícios

1. Escreva um programa que leia 2 valores inteiros na função main e de seguida envie esses valores para a função somar. Essa função deve devolver a soma dos 2 valores no parâmetro resultado, que será apresentada através da função main. 

    ```
    void somar(int num1, int num2, long *resultado);
    ```

2. Escreva um programa que reserve dinamicamente espaço para três inteiros. De seguida coloque no primeiro espaço reservado o valor 12 e no segundo espaço reservado o valor 3. Utilize função somar para efetuar a soma na terceira variável criada.
3. Escreva um programa que reserve dinamicamente memória para um vetor com um determinado número de valores (inteiros) indicado pelo utilizador. Após ter reservado a memória, e usando uma função, preencha o vetor com valores introduzidos pelo utilizador. Depois, envie o vetor para uma função onde vai calcular e imprimir a média dos valores do vetor.
4. Faça um programa que permita gerir uma base de dados de alunos. 
    * O programa deve utilizar um array de alunos alocado dinamicamente como suporte ao armazenamento. Quando o programa é executado deve perguntar ao utilizador qual o número máximo de participantes.
    * Cada aluno deve conter a seguinte informação: 
        * Número;
        * Nome; 
        * Data de nascimento (dia, mês, ano). 
    * O programa deve permitir que sejam feitas operações sobre a base de dados, estando associado a cada uma dessas opções uma função. As operações pretendidas sobre a base de dados são as seguintes: 
        * Inserção;
        * Alteração;
        * Remoção;
        * Consulta aos detalhes de um determinado aluno;
        * Listagem de todos os alunos. 
