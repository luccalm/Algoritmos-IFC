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

int num1, num2, n, A[50], i;

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

	for(i = 3; i < 10; i++)
		{
		if(i % 2 == 0)
			{
			A[i] = (num1 -1) - (num2 - 2);	
			printf("%d \n", A[i]);
			num1 = num2;
			num2 = A[i];
			}
		else
			{
			A[i] = (num1 -1) + (num2 - 2);	
			printf("%d \n", A[i]);
			num1 = num2;
			num2 = A[i];
			}
		}


return 0;
}
