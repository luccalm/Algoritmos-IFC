/* 24) Faça um algoritmo que leia um vetor de 500 posições de números e divida todos os
seus elementos pelo maior valor do vetor. Mostre o vetor após os cálculos. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define QTE 500

int main(){

int i, A[QTE], maiorValor;
float divisao;

for(i = 0; i < QTE; i++)
	{
	printf("Digite um valor para A[%d]:", i+1);
	scanf("%d", &A[i]);
	}

maiorValor = A[0];

for(i = 0; i < QTE; i++)
	{
	if(A[i] > maiorValor)
		{
		maiorValor = A[i];	
		}	
	}

printf("Maior valor: %d\n", maiorValor);
for(i = 0; i < QTE; i++)
	{
	divisao = (float) A[i] / maiorValor;
	printf("Divisão de A[%d] por %d: %0.1f\n", i+1, maiorValor, divisao);
	}

return 0;

}