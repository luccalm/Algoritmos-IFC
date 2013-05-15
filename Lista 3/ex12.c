/* Gere um vetor (50) de inteiros, onde o 1o elemento será
fornecido pelo usuário, e os elementos seguintes serão o triplo do
elemento anterior. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int N, i, multi;

	printf("Digite um número:");
	scanf("%d", &N);

	for(i = 0; i < 50; i++)
	{
		multi = N * 3;
		N = multi;
		printf("N[%d] vale: %d \n", i+1, N);
		multi = 0;
	}


return 0;
}