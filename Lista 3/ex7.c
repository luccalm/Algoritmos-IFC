#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Leia um vetor (20) de inteiros. A seguir, escreva somente os valores
pares.
*/

int main(){
	int N[20], i;

	for(i = 0; i < 20; i++)
	{
		printf("Digite N[%d]:", i);
		scanf("%d", &N[i]);
	}



	printf("Os vetores: \n");
	for(i = 0; i < 20; i++)
	{
		if(N[i] % 2 == 0)
		{
			printf("N[%d] (Valor: %d) \n", i, N[i]);
		}

	}
	printf("São pares. \n");

return 0;
}