/* 29) Faça um algoritmo que leia um vetor A[10]. Preencha então um vetor B[10] com o
fatorial de cada valor de A respeitando as posições, caso o referido valor for positivo
ou nulo. Substitua no final os valores negativos por 0 (zero).
Mostre o vetor B. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define QTE 10

int main(){

int A[QTE], B[QTE], n = 1, valorB = 0, fatorial, i;

	for(i = 0; i < QTE; i++)
	{
	printf("Digite um valor para A[%d]:", i+1);
	scanf("%d", &A[i]);	
	}

	for(i = 0; i < QTE; i++)
	{
	
	if(A[i] > 0) {
	fatorial = 1;
	n = 1;
		while(n <= A[i])
			{
			fatorial = fatorial * n;
			n++;	
			}

	B[i] = fatorial;	
	}

	else
	{
	B[i] = 0;
	}

	}
	for(i = 0; i < QTE; i++)
	{
	printf("[%d]\n", B[i]);	
	}

return 0;

}