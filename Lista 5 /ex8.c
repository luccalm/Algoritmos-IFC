/* Escreva um algoritmo que leia e mostre um vetor de 20 números. A seguir, conte
quantos valores pares existem no vetor. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int A[20], i, b = 0;

// Declaração valores:

for(i = 0; i < 20; i++)
	{
	printf("Digite a posição nº [%d] do vetor:", i+1);
	scanf("%d", &A[i]);
		if(A[i] % 2 == 0)
			{
			b++;
			}
	}
//

	printf("A quantidade de valores pares é: [%d] \n", b);	
	

return 0;
}
