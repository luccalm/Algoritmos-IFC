/* Leia um vetor (20) de inteiros. O programa deve retornar dois
veores resultantes, sendo o primeiro com os números pares e o
se/gundo com os números ímpares do vetor lido. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int N[20], par[20], impar[20], i, nimpar = 0, npar = 0;

	for(i = 0; i < 20; i++)
	{
		printf("Digite N[%d]:", i+1);
		scanf("%d", &N[i]);
	}


	for(i = 0; i < 20; i++)
	{
		if(N[i] % 2 == 0)
		{
			par[npar] = N[i];
			npar++;
		}
		else
		{
			impar[nimpar] = N[i];
			nimpar++;
		}
	}
	
	printf("Números pares: \n");
	for(i = 0; i < npar; i++)
	{
		printf("[%d] \n", par[i]);
	}

	printf("Números impares: \n");
	for(i = 0; i < nimpar; i++)
	{
		printf("[%d] \n", impar[i]);
	}		

return 0;
}