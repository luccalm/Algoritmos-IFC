// 2) Leia uma matriz 5X5, e escreva os elementos da última coluna.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int B[5][5];
int i, j;

//Ler os valores da matriz 5x5
for(i = 0; i < 5; i++)
{
	for(j = 0; j < 5; j++)
	{
	printf("Escreva um número para B[%d][%d]: ", i+1, j+1);
	scanf("%d", &B[i][j]);
	}	
}	

//Escreve os elementos da ultima coluna.
for(i = 0; i < 5; i++)
	{
	printf("B[%d][5] - Número: %d \n", i+1, B[i][4]);
	}
	
return 0;
}
