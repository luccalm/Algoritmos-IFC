//2. Leia um vetor (6) de inteiros, e escreva na ordem inversa.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int N[6], V[6], i;

	for(i = 0; i < 6; i++)
	{
		printf("Digite N[%d]:", i+1);
		scanf("%d", &N[i]);
	}


	printf("Ordem:\n");
	for(i = 0; i < 6; i++)
	{
		printf("N[%d] = %d \n", i+1, N[i]);
		V[5 - i] = N[i];
	}

	printf("Ordem inversa: \n");
	for(i = 0; i < 6; i++)
	{
		printf("N[%d] = %d \n", i+1, V[i]);
	}

return 0;
}