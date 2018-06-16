
# Ficha prática nº 2 - Estruturas de controlo condicional

## Notas
* Os programas devem ser desenvolvidos em C.
* Sempre que possível, utilize as boas práticas apresentadas na componente teórica.
* Salvo indicação em contrário, todos os dados necessários para correr o programa deverão ser solicitados ao utilizador.
* Salvo indicação em contrário, assuma que o utilizador irá inserir valores com tipos (ex.: horas - inteiro) e gamas (ex.: horas do dia – 0 a 23) corretos.

## Exercícios

1. Escreva um programa que leia dois números inteiros e escreva o maior deles.

2. Escreva um programa que leia dois valores numéricos e os apresente do maior para o menor valor.

3.	Escreva um programa que leia três notas (0 a 20 valores) de um aluno, calcule a sua média final ponderada, e diga se o aluno está aprovado ou não. Ponderações: 
    * Nota 1: 25%
    * Nota 2: 35%
    * Nota 3: 40%

4.	Crie um programa que mostre o menor de três números inteiros lidos.

5.	Escreva um programa que leia dois números reais e pergunte depois ao utilizador qual a operação aritmética que este deseja realizar e apresente o resultado. O utilizador deve responder usando o símbolo da operação (exemplo: para fazer a adição o utilizador deve inserir o símbolo +).

6.	Faça um programa que leia um horário no sistema de 24 horas e imprima este horário no sistema de 12 horas.
    * Exemplo:	
        * Valores lidos: 22 32
        * Resultado: 10 32 PM
	* Lembre-se que:
	    * 00:00 (meia-noite) = 12:00 AM
		* 12:00 (meio-dia) = 12:00 PM        

7.	Escreva um programa que leia 3 números e escreva-os no ecrã por ordem crescente.

8.	Faça um programa que leia o horário de entrada (hora e minuto) e o horário de saída (hora e minuto) de um funcionário e imprima quanto tempo, no formato hora:minuto, o funcionário trabalhou. Lembre-se que algumas pessoas entram ao serviço ao final do dia e saem apenas no dia seguinte. Nota: considere que o funcionário não trabalha 24h seguidas ou mais.

9.	Escreva um programa que leia um número e diga se este é par ou ímpar.

10.	Escreva um programa que leia um número inteiro e verifique se este é simultaneamente divisível por 5 e por 3.

11.	Escreva um programa que leia um número X e calcule o valor de Y de acordo com as condições a seguir:
    * Y ← X, se X < 1
    * Y ← 0, se X = 1
    * Y ← 2X, se X > 1

12.	Escreva um programa que leia um par de coordenadas (x,y) inteiras e imprima uma mensagem informando em qual quadrante está o ponto. O algoritmo deve também ser capaz de identificar se o ponto está sobre um dos eixos ou no ponto de origem.
    
    ```
       Y
       ^
    2º | 1º
    ---|---- > X
    3º | 4º
    ```

13.	O sistema de ar condicionado necessita de 2 minutos de funcionamento por cada grau centígrado que seja necessário reduzir e 3 minutos por cada grau centígrado que seja necessário aumentar. Escreva um programa que peça ao utilizador a temperatura atual (valor real) e a temperatura pretendida (valor inteiro) e apresente o tempo (em segundos) necessário para o sistema atingir a temperatura pretendida.

14.	Escreva um programa que, após pedir ao utilizador o saldo de uma conta bancária (considere que é introduzido um valor positivo) e montante a creditar/debitar (valor positivo ou negativo, respetivamente), verifique se a operação é possível, i.e., se o saldo se mantém positivo após a operação, e apresente ao utilizador o resultado da operação, que pode ser um dos seguintes:
    * débito ou crédito realizado com sucesso (acompanhado de informação sobre o valor do saldo após a operação);
    * operação impossível por saldo insuficiente.

15.	O Sr. Alcino vai fazer uma viagem de automóvel, de Guimarães a Melgaço (cerca de 130 km). O depósito tem apenas 4 litros de combustível. Sabe-se também que o consumo do carro do Sr. Alcino depende da velocidade média: 
    * 5 litros/100km, para velocidade até 60 km/h (inclusive);
    * 6 litros/100km, para velocidades entre 60 e 120 km/h (inclusive);
    * 7 litros/100km, para velocidades superiores a 120 km/h.

    Ao longo do caminho existem 3 postos de combustível, aos quilómetros 60, 70, e 79. Faça um algoritmo que, com base nesta informação, peça ao Sr. Alcino em quanto tempo pretende fazer a viagem (valor em minutos) e indique ao Sr. Alcino em que posto de combustível terá obrigatoriamente de abastecer, para não correr o risco de ficar com o automóvel encostado à berma.
