#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Leia um vetor (10) de inteiros. A seguir, escreva somente os de
índice ímpar. */

int main(){
	int N[10], i;

	for(i = 0; i < 10; i++)
	{
		printf("Digite N[%d]:", i+1);
		scanf("%d", &N[i]);
	}


	printf("Os vetores: \n");
	for(i = 0; i < 10; i++)
	{
		if(N[i] % 2 != 0)
		{
			printf("N[%d] (Valor: %d) \n", i, N[i]);
		}

	}
	printf("São impares. \n");

return 0;
}