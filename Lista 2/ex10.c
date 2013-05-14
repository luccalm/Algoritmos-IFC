/*  Faça um algoritmo que leia um número N (inteiro) e a seguir N números e escreva a
sua soma. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int num1, num2, i = 1, soma, n;

		printf("Digite um numero:");
		scanf("%d", &num1);
	
		printf("Digite a quantidade de termos:");
		scanf("%d", &n);

		soma = num1;

		while(n > 0)
		{
			printf("Digite o %dº número:", i);
			scanf("%d", &num2);
			soma = soma + num2;
			i++;
			n--;
		}

		printf("A soma dos números é: %d \n", soma);
return 0;
}
