/* 30) Faça um algoritmo que leia um vetor A[10]. Inverta então os valores de A. troque o
primeiro pelo último, segundo pelo penúltimo e assim por diante. Mostre o vetor A
após as alterações. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define QTE 10

int main(){

int A[QTE], i, troca, j = QTE - 1;

	for(i = 0; i < QTE; i++)
	{
	printf("Digite um valor para A[%d]:", i+1);
	scanf("%d", &A[i]);	
	}

	for(i = 0; i < QTE / 2; i++)
	{
	troca = A[i];
	A[i] = A[j];
	A[j] = troca;
	j--;  	
	}

	for(i = 0; i < QTE; i++)
	{
	printf("[%d]", A[i]);	
	}

return 0;

}