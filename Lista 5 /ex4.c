/* Faça um algoritmo que leia um vetor K[30]. Troque a seguir, todos os elementos de
ordem ímpar do vetor com os elementos de ordem par imediatamente posteriores. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int K[30], i, A;

// Declaração valores:


for(i = 0; i < 30; i++)
	{
	printf("Digite a posição nº %d do vetor K:", i);
	scanf("%d", &K[i]);
	}
	
for(i = 0; i < 30; i++)
	{
	if(K[i] % 2 != 0)
			{
			if(K[i+1] % 2 == 0)
			{
			A = K[i];
			K[i] = K[i+1];
			K[i+1] = A; 	
			}	
			}
	}

for(i = 0; i < 30; i++)
	{
	printf("Valor do %d vetor é: %d \n", i, K[i]);	
	}

return 0;
}
