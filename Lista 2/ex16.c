/* Faça um algoritmo que leia um número n (inteiro) calcule e escreva a soma dos n
primeiros termos da série: S = 1! + 2! + 3! + 4! + 5! + ... */

/* Primeiro termo: 1 == 1
	Segundo termo: 1*2 == 2
	Terceiro termo: 1*2*3 == 6
	Quarto termo: 1*2*3*4 == 24 
	Soma: 33
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int n, i, k = 1;
	int soma = 0, permutacao = 1;

	printf("Digite um número N:");
	scanf("%d", &n);

	for(i = 1; i <= n; i++)
		{
			while(k < i)
				{
				permutacao = permutacao + (permutacao * k);	
				k++;
				}	
		
		//Mostrar as permutações (Apenas para teste):
		printf("%d! = [%d]\n", i, permutacao);

		soma = soma + permutacao;
		
		//Reseto as variáveis para a próxima permutação:
		permutacao = 1;
		k = 1;
		}

		printf("A soma dos %d primeiros termos é %d \n", n, soma);
return 0;
}