/*  Escreva um algoritmo que leia 50 valores para um vetor de 50 posições. Mostre
depois somente os positivos. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int A[50], i;
// Declaração valores:

for(i = 0; i < 50; i++)
	{
	printf("Digite a posição nº [%d] do vetor:", i+1);
	scanf("%d", &A[i]);
	}	
//

	for(i = 0; i < 50; i++)
		{
		if(A[i] > 0)
				{
				printf("[%d]", A[i]);
				}
		}
	
return 0;
}
