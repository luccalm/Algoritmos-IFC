/* 26) Faça um algoritmo que leia dois vetores (A e B) de 50 posições de números. O
algoritmo deve, então, subtrair o primeiro elemento de A do último de B, acumulando
o valor, subtrair o segundo elemento de A do penúltimo de B, acumulando o valor, e
assim por diante. Mostre o resultado da soma final. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define QTE 5

int main(){

int A[QTE], B[QTE], valor[QTE], i, valorFinal = 0;
int j = QTE - 1; //Define J como o último valor do vetor.

	//Inserir valores para o vetor de A
	for(i = 0; i < QTE; i++)
	{
	printf("Digite um valor para A[%d]:",i+1);
	scanf("%d", &A[i]);
	}

	//Inserir valores para o vetor de B
	for(i = 0; i < QTE; i++)
	{
	printf("Digite um valor para B[%d]:",i+1);
	scanf("%d", &B[i]);	
	}

	//Realiza a subtração de A[i] por B[j]
	for(i = 0; i < QTE; i++)
	{
	valor[i] = A[i] - B[j];
	j--;
	}

	//Realiza a soma dos valores do vetor "valor"
	for(i = 0; i < QTE; i++)
	{
	valorFinal = valorFinal + valor[i];
	}

	printf("Valor da soma: %d\n", valorFinal);
return 0;

}