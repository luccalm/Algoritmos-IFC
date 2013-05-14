/* Leia um vetor (10) de inteiros. A seguir, percorra o vetor e retorne o
maior valor. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int N[10], i, maior = 0;

	for(i = 0; i < 10; i++)
	{
		printf("Digite N[%d]:", i+1);
		scanf("%d", &N[i]);
	}


	for(i = 0; i < 10; i++)
	{
		if(N[i] > maior)
		{
			maior = N[i];
		}
	}

	printf("Maior valor: %d \n", maior);

return 0;
}