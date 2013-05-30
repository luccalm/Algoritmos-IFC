/* 33) Escreva um algoritmo que leia um número inteiro A e uma matriz V 30x30 de
números. Conte quantos valores iguais a A estão na matriz. Crie, a seguir, uma
matriz X
 contendo todos os elementos de V diferentes de A. Mostre os resultados. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define QTE 3

int main() {

int V[QTE][QTE], X[QTE][QTE];
int i, j, x = 0; //Variáveis for.
int a; //Variável A
int igual = 0;

	//Inserir os valores da Matriz.
	for(i = 0; i < QTE; i++)
	{
		for(j = 0; j < QTE; j++)
		{ 
		printf("Digite M[%d][%d]:", i+1, j+1);
		scanf("%d", &V[i][j]);	
		}
	}

	printf("Digite um valor para A:");
	scanf("%d", &a);



	for(i = 0; i < QTE; i++)
	{
	printf("[%d][%d][%d]\n", V[i][0],V[i][1],V[i][2] );	
	}

	for(i = 0; i < QTE; i++)
	{
		for(j = 0; j < QTE; j++)
		{
		if(a == V[i][j])
			{
			igual++;
			}
		}
	}



printf("Existem %d valores iguais a A.\n", igual);

return 0;	
}