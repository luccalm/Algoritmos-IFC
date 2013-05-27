/* 20) Faça um algoritmo que leia dois vetores de 200 posições de caracteres. A seguir,
troque o 1o elemento de A com o 200o de B, o 2o de A com o 199o de B, assim por
diante, até trocar o 200o de A com o 1o de B. Mostre os vetores antes e depois da
troca. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define QTE 200

int main(){

char A[QTE], B[QTE], troca;
int i, valorTrocar = QTE - 1;

for(i = 0; i < QTE; i++)
	{
	printf("Digite um caractere para A[%d]:", i+1);
	scanf(" %c", &A[i]);	
	}


for(i = 0; i < QTE; i++)
	{
	printf("Digite um caractere para B[%d]:", i+1);
	scanf(" %c", &B[i]);	
	}

	printf("Vetor A antes da troca:");
	for(i = 0; i < QTE; i++)
	{
	printf("[%c]", A[i]);
		
	}

	printf("\nVetor B antes da troca:");
	for(i = 0; i < QTE; i++)
	{
	printf("[%c]", B[i]);	
	}

for(i = 0; i < QTE; i++)
	{
	troca = A[i];
	A[i] = B[valorTrocar];
	B[valorTrocar] = troca;
	valorTrocar--;
	}


	printf("\nVetor A depois da troca:");
	for(i = 0; i < QTE; i++)
	{
	printf("[%c]", A[i]);	
	}


	printf("\nVetor B depois da troca:");
	for(i = 0; i < QTE; i++)
	{
	printf("[%c]", B[i]);	
	}
return 0;
}