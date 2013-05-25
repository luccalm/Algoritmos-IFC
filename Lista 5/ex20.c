/* 20) Faça um algoritmo que leia dois vetores de 200 posições de caracteres. A seguir,
troque o 1o elemento de A com o 200o de B, o 2o de A com o 199o de B, assim por
diante, até trocar o 200o de A com o 1o de B. Mostre os vetores antes e depois da
troca. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM 200
int main(){

int i, j = TAM - 1;
char A[2], B[2], troca;

// Ler o vetor A
for(i = 0; i < TAM; i++)
{
	printf("Digite um caracter para A[%d]: ", i+1);
	scanf("%c", &A[i]);
	getchar();
}

// Ler o vetor B
for(i = 0; i < TAM; i++)
{
	printf("Digite um caracter para B[%d]: ", i+1);
	scanf("%c", &B[i]);
	getchar();
}

// Imprime o vetor de A antes da troca.
printf("Vetor de A antes da troca: \n");
for(i = 0; i < TAM; i++)
{
printf("A[%d] = %c \n", i+1, A[i]);
}

// Imprime o vetor de B antes da troca.
printf("Vetor de B antes da troca: \n");
for(i = 0; i < TAM; i++)
{
printf("B[%d] = %c \n", i+1, B[i]);
}

// Trocar o valor de A[i] por B[j]
for(i = 0; i < 2; i++)
{
troca = A[i];
A[i] = B[j];
B[j] = troca;
j--;
}

//Imprime o vetor de A depois da troca.
printf("Vetor de A depois da troca: \n");
for(i = 0; i < TAM; i++)
{
printf("A[%d] = %c \n", i+1, A[i]);	
}

//Imprime o vetor de B depois da troca.
printf("Vetor de B depois da troca: \n");
for(i = 0; i < TAM; i++)
{
printf("B[%d] = %c \n", i+1, B[i]);	
}

return 0;
}