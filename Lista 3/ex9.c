/* Leia um vetor (12) de inteiros. Conte, a seguir quantos valores são
negativos e escreva esta informação. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int N[12], i, negativo = 0;

	for(i = 1; i <= 12; i++)
	{
		printf("Digite N[%d]:", i);
		scanf("%d", &N[i]);
	}


	for(i = 1; i <= 12; i++)
	{
		if(N[i] < 0)
		{
			negativo++;
		}

	}
	printf("%d números são negativos. \n", negativo);

return 0;
}