/* Faça um algoritmo que leia um vetor S[20] e uma variável A. A seguir, mostre o
produto da variável A pelo vetor */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int S[20], i, A;

// Declaração valores:


for(i = 0; i < 20; i++)
	{
	printf("Digite a posição nº %d do vetor K:", i+1);
	scanf("%d", &S[i]);
	}

	printf("Digite a variável:");
	scanf("%d", &A);	
	
for(i = 0; i < 20; i++)
	{
	printf("Valor da multiplicação de S[%d] é: %d \n", i+1 , S[i] * A );
	}




return 0;
}
