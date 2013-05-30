#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* A série de FETUCCINE é gerada da seguinte forma: os dois primeiros termos são
fornecidos pelo usuário; a partir daí, os termos são gerados com a soma ou subtração
dos dois termos anteriores, ou seja:
a. Ai=(Ai−1)+(Ai−2) para i ímpar;
b. Ai=(Ai−1)−(Ai−2) para i par.
Criar um algoritmo que imprima os N primeiros termos da série de FETUCCINE, sabendo se
que para existir esta série serão necessários pelo menos três termos.
*/

int main(){

int num1, num2, n, i, valorTermo;

printf("Digite o primeiro número:");
scanf("%d", &num1);

printf("Digite o segundo número:");
scanf("%d", &num2);

printf("Digite a quantidade de termos:");
scanf("%d", &n);

if(n < 3)
	{
		printf("A quantidade mínima de termos é 3.\n");
	}

printf("[%d]\n", num1);
printf("[%d]\n", num2);

for(i = 3; i < n; i++)  //Como a quantidade de termos mínima é 3 o i começa com o valor 3 (mínimo)
	{
	if(i % 2 == 0)
		{
		valorTermo = num2 - num1; //para i par.	
		}
	else 
		{
		valorTermo = num2 + num1; //para i impar
		}
	printf("[%d]\n",valorTermo);
	num1 = num2; 
	num2 = valorTermo;
	}

return 0;
}
