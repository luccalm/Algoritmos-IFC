/* 18) Escrever um algoritmo que lê um vetor K(15). Crie, a seguir, um vetor P, que
contenha todos os números primos de K. Escreva o vetor P.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM 15 

int main(){

int K[TAM], P[TAM], i;
int valorP, divisor , qntPrimo = 0;

 for(i = 0; i < TAM; i++)
 	{
 	printf("Digite um valor para K[%d]", i+1);
 	scanf("%d", &K[i]);	
 	}

for(i = 0; i < TAM; i++)
	{
	valorP = 0;
	divisor = 1;
	while(divisor <= K[i])
		{
		if(K[i] % 2 == 0)
			{valorP++;}	
		divisor++;
		}
	
	if(valorP <= 2)
		{
		P[qntPrimo] = K[i];
		qntPrimo++;
		}
	}

for(i = 0; i < qntPrimo; i++)
	{
	printf("[%d]", P[i]);
	}
printf("\n");

return 0;

}
