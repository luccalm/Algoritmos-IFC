/* 35) Escrever um algoritmo que lê uma matriz A(15,5) e a escreva. Verifique, a seguir,
quais os elementos de A que estão repetidos e quantas vezes cada um está repetido.
Escrever cada elemento repetido com uma mesagem dizendo que o elemento
aparece X
 vezes em A. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define LIN 2
#define COL 2

int main(){

int A[LIN][COL], i, j, qntIgual = 0;
int iLinha, iColuna;
int numeros[LIN*COL];
int valor;
int ColunaComparar;

	//Inserir valores para a matriz:
	for(i = 0; i < LIN; i++)
	{
		for(j = 0; j < COL; j++)
		{
		printf("Digite um valor para A[%d][%d]:", i+1,j+1);	
		scanf("%d", &A[i][j]);
		}
	}

	//Mostrar a matriz:
	printf("\nMatriz:\n");
	for(i = 0; i < LIN; i++)
	{
		for(j = 0; j < COL; j++)
		{
		printf("[%d]", A[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for(i = 0; i < LIN; i++)
	{	
		for(j = 0; j < COL; j++)
		{
			ColunaComparar = 1;
			valor = 0;
			for(iLinha = 0; iLinha < LIN; iLinha++)
			{
				for(iColuna = ColunaComparar; iColuna < COL; iColuna++)
				{
					if(A[i][j] = A[iLinha][iColuna])
					{
					valor++;
					}
				}
			ColunaComparar = 0;
			}
		printf("%d - %d \n", A[i][j], valor);
		}	
	}

return 0;
}
