#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 1. Leia um vetor (20) de inteiros. A seguir, escreva somente os valores
pares.
*/

int main(){
	int N[20], i;

	for(i = 0; i < 20; i++)
	{
		printf("Digite N[%d]:", i+1);
		scanf("%d", &N[i]);
	}


	printf("Os valores pares são: \n");
	for(i = 0; i < 20; i++)
	{
		if(N[i] % 2 == 0)
		{
			printf("[%d]\n", N[i]);
		}

	}

return 0;
}