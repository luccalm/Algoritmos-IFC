/* Leia um vetor (10) de inteiros e o escreva. A seguir, conte quantos
valores são negativos e escreva esta informação. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int A[10], i, negativo = 0;

	for(i = 0; i < 10; i++)
	{
		printf("Digite A[%d]:", i+1);
		scanf("%d", &A[i]);
	}


	for(i = 0; i < 10; i++)
	{
		if(A[i] < 0)
		{
		negativo++;	
		}
	}
	
	printf("Existem %d números negativos. \n", negativo);

	return 0;
}