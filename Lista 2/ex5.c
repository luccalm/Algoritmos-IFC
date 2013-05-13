/* Faça um algoritmo que leia um vetor S[20] e uma variável A. A seguir, mostre o
produto da variável A pelo vetor. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main(){

int S[20], MULT[20], A, i;


for(i = 0; i < 20; i++)
	{
	printf("Digite a posição %d do vetor S[20]:" , i);	
	scanf("%d", &S[i]);
	}

	printf("Digite uma variável:");
	scanf("%d", &A);

for(i = 0; i < 20; i++)
	{
	MULT[i] = S[i] * A;
	printf("Multiplicação da posição S[%d] pela variável %d: %d \n", i, A, MULT[i]);	
	}


return 0;
}
