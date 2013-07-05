#include <stdlib.h>
#include <stdio.h>

int main() {

int *idade, i, valor; // declara um ponteiro do tipo inteiro.

printf("Digite a quantidade:");
scanf("%d", &valor);

idade = (int*) malloc(valor * sizeof(int)); //aloca memória para o inteiro.

for(i = 0; i < valor; i++)
	{
	printf("Digite o valor para idades[%d]:", i);
	scanf("%d", &idade[i]);
	}

for(i = 0; i < valor; i++)
	{
	printf("Idade para idades[%d]: %d.\n", i, idade[i]);	
	}

free(idade); //libera memória alocada.

}