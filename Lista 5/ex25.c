/* 25) Faça um algoritmo que leia um vetor de 10 posições. Mostre então os 3 menores
valores do vetor. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define QTE 10 

int main(){

	int A[QTE], valor, troca, i;

	for(i = 0; i < QTE; i++){
		printf("Digite um valor para A[%d]:", i+1);
		scanf("%d", &A[i]);	
	}

	valor = 1;	
	while(valor){
		valor = 0;
		for(i = 0; i < QTE - 1; i++)
		{
			if(A[i] > A[i+1])
			{
				troca = A[i];
				A[i] = A[i+1];
				A[i+1] = troca;	
				valor = 1;
			}
		}
	}

	for(i = 0; i < 3; i++)
	{
		printf("[%d]", A[i]);
	}

	return 0;

}