/* Escreva um algoritmo que leia um vetor de 20 posições e mostre- o. Em seguida,
troque o primeiro elemento com o último, o segundo com o penúltimo, o terceiro com
o antepenúltimo, e assim sucessivamente. Mostre o novo vetor depois da troca. */

// a

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int A[20], i, NUM = 0, B[20];
// Declaração valores:

for(i = 0; i < 20; i++)
	{
	printf("Digite a posição nº [%d] do vetor:", i);
	scanf("%d", &A[i]);
	}	
//

for(i = 19; i >= 0; i--)
	{
	B[NUM] = A[i];	
	printf("[%d] \n", B[NUM]);
	NUM++;
	}
	
return 0;
}
