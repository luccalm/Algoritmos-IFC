/* 32) Elaborar um algoritmo que lê uma matriz M(6,6) e um valor A e multiplica a matriz M
pelo valor A e coloca os valores da matriz multiplicados por A em um vetor de V(36) e
escreve no final o vetor V. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define QTE 6

int main() {

int M[QTE][QTE], multi[QTE*QTE];
int i, j, x = 0; //Variáveis for.
int a; //Variável A

	//Inserir os valores da Matriz.
	for(i = 0; i < QTE; i++)
	{
		for(j = 0; j < QTE; j++)
		{
		printf("Digite M[%d][%d]:", i+1, j+1);
		scanf("%d", &M[i][j]);	
		}
	}

	printf("Digite um valor para A:");
	scanf("%d", &a);

	for(i = 0; i < QTE; i++)
	{
		for(j = 0; j < QTE; j++)
		{
		multi[x] = M[i][j] * a;
		x++;
		}
	}

	for(i = 0; i < QTE*QTE; i++)
	{
	printf("[%d]", multi[i]);	
	}
	printf("\n");

return 0;	
}