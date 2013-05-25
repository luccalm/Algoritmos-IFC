/* Desenvolva um programa em C que leia todos os anos em que
o Brasil foi campeão mundial de futebol e após coletar todos os
dados:
◦ Informar a quantidade de anos que já se passaram desde a
conquista de cada título até hoje
◦ Quantos anos se passaram desde a conquista de um título até a
conquista do próximo. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int anos, i, conquistas[20], anoAtual, anosPassados, anosProximo;

printf("Digite o ano atual:");
scanf("%d", &anoAtual);

printf("Digite quantas vezes o Brasil foi campeão:");
scanf("%d", &anos);

for(i = 0; i < anos; i++)
	{
	printf("Digite o ano da conquista do titulo %d do Brasil:" , i+1);
	scanf("%d", &conquistas[i]);
	}

	printf("------------------------------------------------\n");
for (i = 0; i < anos; i++)
	{
	anosPassados = anoAtual - conquistas[i];
	printf("Se passaram %d anos desde a conquista do título de %d.\n", anosPassados,conquistas[i]); 
	}

	printf("------------------------------------------------\n");
for(i = 0; i < anos - 1; i++)
	{
	anosProximo = conquistas[i+1] - conquistas[i];	
	printf("Se passaram %d anos desde a conquista do título de %d até o pŕoximo.\n", anosProximo, conquistas[i]);
	}

	return 0;
}

