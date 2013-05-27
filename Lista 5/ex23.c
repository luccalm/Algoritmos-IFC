/* 22) Faça um algoritmo que leia um vetor (A) de 100 posições. Em seguida, compacte o
vetor, retirando os valores nulos e negativos, colocando o resultado em um vetor B de
100 posições (deixe em branco as posições não utilizadas). */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define QTE 5 

int main(){

int i, A[QTE], valorB = 0, valorvetorB = 0;
int *vetB;

for(i = 0; i < QTE; i++)
	{
	printf("Digite um valor para A[%d]:", i+1);
	scanf("%d", &A[i]);
	}

for(i = 0; i < QTE; i++)
	{
	if(A[i] > 0)
		{
		valorvetorB++;	
		}	
	}

int B[valorvetorB];
vetB = (int*) malloc(valorvetorB * sizeof(int));

for(i = 0; i < QTE; i++)
{
	if(A[i] > 0)
		{
		vetB[valorB] = A[i];
		valorB++;	
		}	
}

printf("Vetor compactado:");
for(i = 0; i < valorB; i++)
	{
	printf("[%d]", vetB[i]);	
	}
printf("\n");	

free(vetB);

return 0;

}