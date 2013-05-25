/* 18) Escrever um algoritmo que lê um vetor K(15). Crie, a seguir, um vetor P, que
contenha todos os números primos de K. Escreva o vetor P. */

//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){

int K[5], P[5], l = 0 , j, primo, i, numeroPrimo = 0;
// Declaração valores:

for(i = 0; i < 5; i++)
	{
	printf("Digite um valor para K[%d]:", i+1);
	scanf("%d", &K[i]);
	}	

for(i = 0; i < 5; i++)
	{
primo = 0;		
	for(j = 1; j < K[i]; j++)
		{
			if(K[i] % j == 0)
			{
			primo++;	
			}
		}

	if(primo < 2)
	{
	P[l] = K[i];	
	numeroPrimo++;
	l++;
	}	
	}

printf("Os números primos são: ");
for(i = 0; i < numeroPrimo; i++)
{
printf("[%d]", P[i]);
}
	
return 0;
}
