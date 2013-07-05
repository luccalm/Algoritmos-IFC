/* Faça um algoritmo que leia um número n (inteiro) calcule e escreva a soma dos n
primeiros termos da série: S = 1! + 2! + 3! + 4! + 5! + ... */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int n, i, k;
	int soma = 0, permutacao;

	printf("Digite um número N:");
	scanf("%d", &n);

	for(i = 1; i <= n; i++)
		{
		permutacao = 1;
		k = 1;

			while(k <= i)
				{
				permutacao = permutacao * k;	
				k++;
				}	
		
		soma = soma + permutacao;
		}

		printf("A soma dos %d primeiros termos é %d \n", n, soma);
return 0;
}