/* Escreva um algoritmo que leia dois vetores de 10 posições e faça a multiplicação dos
elementos de mesmo índice, colocando o resultado em um terceiro vetor. Mostre o
vetor resultante. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int A[10], B[10], C[10], i;

// Declaração valores:


for(i = 0; i < 10; i++)
	{
	printf("Digite a posição nº %d do primeiro vetor:", i+1);
	scanf("%d", &A[i]);
	}
	
for(i = 0; i < 10; i++)
	{
	printf("Digite a posição nº %d do segundo vetor:", i+1);
	scanf("%d", &B[i]);
	C[i] = A[i] * B[i];
	}

for(i = 0; i < 10; i++)
	{
	printf("Valor da posição nº %d da multiplicação de A[%d] por B[%d] é %d\n", i+1, i+1, i+1, C[i]);	
	}

return 0;
}
