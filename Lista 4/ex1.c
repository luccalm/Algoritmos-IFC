// Leia uma matriz 4X4, e escreva os elementos da 2a linha.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int B[4][4];
int i, j;


//Ler os valores da matriz 4x4
for(i = 0; i < 4; i++)
{
	for(j = 0; j < 4; j++)
	{
	printf("Escreva um número para B[%d][%d]: ", i+1, j+1);
	scanf("%d", &B[i][j]);
	}	
}	

//Escreve os elementos da segunda linha.
for(i = 0; i < 4; i++)
	{
	printf("B[2][%d] - Número: %d \n", i+1, B[1][i]);
	}
	
return 0;
}
