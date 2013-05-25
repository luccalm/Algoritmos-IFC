/* Gere um vetor (50) de inteiros, onde o 1o elemento será
fornecido pelo usuário, e os elementos seguintes serão o triplo do
elemento anterior. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int N, i;
	int multi;

	printf("Digite um número:");
	scanf("%d", &N);

	for(i = 1; i <= 50; i++)
	{
		multi= N*3;
		printf("O triplo do número %d é %d \n", i, N, multi);
		N = multi;
	}



return 0;
}