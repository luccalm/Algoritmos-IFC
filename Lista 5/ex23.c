/* 22) Faça um algoritmo que leia um vetor (A) de 100 posições. Em seguida, compacte o
vetor, retirando os valores nulos e negativos, colocando o resultado em um vetor B de
100 posições (deixe em branco as posições não utilizadas). */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define QTE 100 

int main(){

int i, A[QTE], valorB = 0, valorvetorB = 0;

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

for(i = 0; i < QTE; i++)
	{
	if(A[i] > 0)
		{
		B[valorB] = A[i];
		valorB++;	
		}	
	}

printf("Vetor compactado:");
for(i = 0; i < valorB; i++)
	{
	printf("[%d]", B[i]);	
	}
printf("\n");	

return 0;

}