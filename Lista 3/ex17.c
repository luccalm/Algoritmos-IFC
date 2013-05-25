/* 17.
Faça um programa que preencha dois vetores de 10 posições
cada um. Determine e mostre um terceiro contendo os elementos 
dos dois vetores anteriores ordenados de maneira decrescente. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int A[10], B[10], C[20], i, j = 10, troca, temporario;


	//Insere valores para o vetor A[10]:
	for(i = 0; i < 10; i++)
	{
		printf("Digite A[%d]:", i+1);
		scanf("%d", &A[i]);
	}

	//Insere valores para o vetor B[10]:
	for(i = 0; i < 10; i++)
	{
		printf("Digite B[%d]:", i+1);
		scanf("%d", &B[i]);
	}

	//Preenche um terceiro vetor com os valores dos vetores A e B
	for(i = 0; i < 10; i++)
	{
	C[i] = A[i];
	C[j] = B[i];
	j++;
	}

	troca = 1;

	while(troca) {
	troca = 0;
		for(i = 0; i < 19; i++)
			{
			if(C[i] < C[i+1])
				{
				temporario = C[i];
				C[i] = C[i+1];
				C[i+1] = temporario;
				troca = 1;
				}	
			}	
	}

	for(i = 0; i < 20; i++)
	{
		printf("[%d]", C[i]);
		printf("\n");
	}

	return 0;
}



