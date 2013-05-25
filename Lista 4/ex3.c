// 3) Leia uma matriz 4X4, e faça a soma dos elementos das linhas.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int B[4][4];
int i, j, soma;

//Ler os valores da matriz 4x4
for(i = 0; i < 4; i++)
{
	for(j = 0; j < 4; j++)
	{
	printf("Escreva um número para B[%d][%d]: ", i+1, j+1);
	scanf("%d", &B[i][j]);
	}	
}	

//Soma das linhas
for(i = 0; i < 4; i++)
	{
soma = 0;		
	for(j = 0; j < 4; j++) 
		{
		soma = soma + B[i][j];	
		}
	printf("Soma da linha %d: %d \n", i+1, soma);	
	}
	
return 0;
}
