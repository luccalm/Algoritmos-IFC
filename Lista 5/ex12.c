/* 12) Escreva um algoritmo que leia um vetor inteiro de 30 posições e crie um segundo
vetor, substituindo os valores nulos por 1. Mostre os 2 vetores. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define QTE 30
int main(){

int A[QTE], B[QTE], i;
// Declaração valores:

for(i = 0; i < QTE; i++)
	{
	printf("Digite A[%d]:", i+1);
	scanf("%d", &A[i]);
	}	

for(i = 0; i < QTE; i++)
	{
	printf("A[%d] = [%d]. \n", i+1, A[i]);
	}	

	printf("\n");

for(i = 0; i < QTE; i++)
	{
		if(A[i] == 0)
		{
		A[i] = 1;
		}
	}		

for(i = 0; i < QTE; i++)
	{
	printf("A[%d] = [%d]. \n", i+1, A[i]);
	}	

return 0;
}
