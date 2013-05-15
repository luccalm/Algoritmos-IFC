/* Leia um vetor (15) de inteiros. Substitua a seguir, todos os
valores negativos por 1 e escreva o vetor modificado. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int V[15], i;

	for(i = 0; i < 15; i++)
	{
	printf("Digite o valor de V[%d]:", i+1);
	scanf("%d", &V[i]);
	}

	for(i = 0; i < 15; i++)
	{
		if(V[i] < 0)
		{
			V[i] = 1;
		}
	}

	for(i = 0; i < 15; i++)
	{
		printf("V[%d] \n", V[i]);
	}


return 0;
}