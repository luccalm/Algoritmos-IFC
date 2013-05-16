/* 17.
Faça um programa que preencha dois vetores de 10 posições
cada um. Determine e mostre um terceiro contendo os elementos 
dos dois vetores anteriores ordenados de maneira decrescente. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int A[10], B[10], C[10], D[10], i, j, valorA, valorB;

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
		valorA = 0;
		for(j = 0; j < 10; j++)
		{
			if(A[i] > A[j])
			{
			valorA++; 
			}
		}

		C[valorA] = A[i];
	}

		for(i = 0; i < 10; i++)
	{
		valorB = 0;
		for(j = 0; j < 10; j++)
		{
			if(B[i] > B[j])
			{
			valorB++; 
			}
		}

		D[valorB] = B[i];
	}

	for(i = 0; i < 10; i++)
	{
		printf("A[%d] \n", C[valorA]);
	}
	
	for(i = 0; i < 10; i++)
	{
		printf("B[%d] \n", D[valorB]);
	}

	return 0;
}



