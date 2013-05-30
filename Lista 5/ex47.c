/* 47) Faça um algoritmo que gere a seguinte matriz:Faça um algoritmo que gere a seguinte matriz: */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define QNT 6 


int main(){

int M[QNT][QNT], i, j;

	printf("\nPrimeira Matriz: \n");

	for(i = 0; i < QNT; i++)
	{
		for(j = 0; j < QNT; j++)
		{
		M[i][j] = 1;	
		}
	}

 	for(i = 1; i < QNT - 1; i++)
	{
		for(j = 1; j < QNT - 1; j++)
		{
		M[i][j] = 2;	
		}
	}


	for(i = 2; i < QNT - 2; i++)
	{
		for(j = 2; j < QNT - 2; j++)
		{
		M[i][j] = 3;	
		}
	}

	for(i = 0; i < QNT; i++)
	{
		for(j = 0; j < QNT; j++)
		{
		printf("[%d]", M[i][j]);
		}
		printf("\n");
	}

//Segunda matriz (Ver documento PDF)

	for(i = 0; i < QNT; i++)
	{
		for(j = 0; j < QNT; j++)
		{
		M[i][j] = 3;
		}
	}

	j = 0;
 	for(i = 0; i < QNT; i++)
	{
	M[i][j] = 1;	
	j++;	
	}


	j = QNT - 1;
	for(i = 0; i < QNT; i++)
	{
	M[i][j] = 2;	
	j--;	
	}

	printf("\nSegunda Matriz: \n");

	for(i = 0; i < QNT; i++)
	{
		for(j = 0; j < QNT; j++)
		{
		printf("[%d]", M[i][j]);
		}
		printf("\n");
	}


return 0;
}
