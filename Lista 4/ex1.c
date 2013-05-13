// Leia uma matriz 4X4, e escreva os elementos da 2a linha.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int B[4][4];
int i, icoluna;
// Declaração valores:

for(icoluna = 1; icoluna <= 4; icoluna++)
{
for(i = 1; i <= 4; i++)
	{
	printf("Escreva o elemento A[%d][%d]: ", icoluna, i);
	scanf("%d", &B[icoluna][i]);
	}	
}	

for(i = 1; i <= 4; i++)
	{
	printf("Elementos %d do Matriz[%d][2]", B[i][2], B[i][2]);

	}
	
return 0;
}
