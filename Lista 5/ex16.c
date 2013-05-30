/*16) Escrever um algoritmo que lê 2 vetores de tamanho 10. Crie, a seguir, um vetor S de
20 posições que contenha os elementos dos outros 2 vetores em ordem crescente.
Obs.: copie primeiro os valores para o vetor S para depois ordená-los */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int A[10], B[10], S[20], i, j = 10, troca, temporario;


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
	S[i] = A[i];
	S[j] = B[i];
	j++;
	}

	troca = 1;

	while(troca) {
	troca = 0;
		for(i = 0; i < 19; i++)
			{
			if(S[i] > S[i+1])
				{
				temporario = S[i];
				S[i] = S[i+1];
				S[i+1] = temporario;
				troca = 1;
				}	
			}	
	}

	for(i = 0; i < 20; i++)
	{
		printf("[%d]", S[i]);
		printf("\n");
	}

	return 0;
}

