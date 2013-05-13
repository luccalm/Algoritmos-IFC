/* Faça um algoritmo que leia um vetor N[20]. A seguir, encontre o menor elemento do
vetor N e a sua posição dentro do vetor, mostrando: “O menor elemento de N é”, M,
“e sua posição dentro do vetor é:”,P. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main(){

int N[20], i, menor;

// Declaração valores:

for(i = 0; i < 20; i++)
	{
	printf("Digite um número:");	
	scanf("%d", &N[i]);
	}

// Fim declaração valores.

menor = N[0];

for(i = 0; i < 20; i++)
	{
	if(N[i] < menor)
		{
		menor = N[i];
		}	
	}
	
printf("Menor número é: %d está na posição %d \n", menor, i);


return 0;
}
