/* Faça um algoritmo que leia dois vetores: F[20] e G[20]. Calcule e mostre, a seguir, o
produto dos valores de F por G. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int A[20], B[20], C[20], i;

// Declaração valores:


for(i = 0; i < 20; i++)
	{
	printf("Digite a posição nº %d do primeiro vetor:", i);
	scanf("%d", &A[i]);
	}
	
for(i = 0; i < 20; i++)
	{
	printf("Digite a posição nº %d do segundo vetor:", i);
	scanf("%d", &B[i]);
	C[i] = A[i] * B[i];
	}

for(i = 0; i < 20; i++)
	{
	printf("Valor da posição nº %d da multiplicação de A[%d] por B[%d] é %d\n", i, i, i, C[i]);	
	}

return 0;
}

