/* Faça um programa que preencha dois vetores de 10 posições
faça a multiplicação dos elementos de mesmo índice, colocando o
resultado em um terceiro vetor. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int A[10], B[10], i, C[10];

	for(i = 0; i < 10; i++)
	{
		printf("Digite A[%d]:", i+1);
		scanf("%d", &A[i]);
	}

	for(i = 0; i < 10; i++)
	{
		printf("Digite B[%d]:", i+1);
		scanf("%d", &B[i]);
	}

	for(i = 0; i < 10; i++)
	{
		C[i] = A[i] * B[i];
	}
	
	for(i = 0; i < 10; i++)
	{
		printf("A multiplicação de A[%d] por B[%d] é:[%d] \n", i+1, i+1, C[i]);
	}

	return 0;
}

