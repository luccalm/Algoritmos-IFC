/* 15) Escrever um algoritmo que gera os 30 primeiros números primos a partir de 100 e os
armazena em um vetor de X
 [100] escrevendo, no final, o vetor X */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define QTE 20

int main(){

int X[100], numero = 100;
int divisor, numeroPrimo, num = 0;
int i, ehPrimo;
int numPrimo = 30;

for(i = 0; i < numPrimo;)
	{
	divisor = 1;
	ehPrimo = 0; 
		while(numero >= divisor)
			{
			if(numero % divisor == 0)
				{
				ehPrimo++;	
				}	
			divisor++;	
			}
	if(ehPrimo <= 2)	
	{
	X[num] = numero; 
	num++;
	numPrimo--;	
	}

	numero++;
	}

for(i = 0; i < 30; i++)
{
	printf("[%d]", X[i]);	
}

printf("\n");

return 0;
}

