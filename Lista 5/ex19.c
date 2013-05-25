/* 19) Escrever um algoritmo que lê um vetor X
(20). Escreva, a seguir, cada um dos valores
distintos que aparecem em X
 dizendo quantas vezes cada valor aparece em X
. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define QTE 10
int main(){

int X[5], igual[5], i, j, valorDistinto = 0;

for(i = 0; i < 5; i++)
{
	printf("Digite um valor para X[%d]: ", i+1);
	scanf("%d", &X[i]);
}

for(i = 0; i < 5; i++) 
{
valorDistinto = 0;	
	for(j = 0; j < 5; j++)
		{
		if(X[i] == X[j])
			{
			valorDistinto++;	
			}
		}
	
	printf("O valor %d aparece %d vezes no vetor. \n", X[i], valorDistinto);	

}


return 0;
}
