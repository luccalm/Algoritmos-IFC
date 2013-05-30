/* Leia um A vetor (10) de inteiros. Ordene, a seguir, os elementos de A
em ordem crescente e escreva o vetor ordenado. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int A[10], B[10], i, j, valor = 0;

	for(i = 0; i < 10; i++)
	{
		printf("Digite A[%d]:", i+1);
		scanf("%d", &A[i]);
	}


	for(i = 0; i < 10; i++)
	{
		valor = 0;
		for(j = 0; j < 10; j++)
		{
			if(A[i] > A[j])
			{
			valor++; 
			}
		}

		B[valor] = A[i];
	}
	
	for(i = 0; i < 10; i++)
	{
		printf("[%d] \n", B[i]);
	}

	return 0;
}