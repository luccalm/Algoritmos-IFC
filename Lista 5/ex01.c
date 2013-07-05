/* Elaborar um algoritmo que lê um conjunto de 30 valores e os coloca em 2 vetores
conforme estes valores forem pares ou ímpares. O tamanho do vetor é de 5
posições. Se algum vetor estiver cheio, escrevê-lo. Terminada a leitura escrever o
conteúdo dos dois vetores. Cada vetor pode ser preenchido tantas vezes quantas for
necessário. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM 30
#define TRUE 1;
#define FALSE 0;
//Comentário 


int funcVerificar(int n)
{
int num;

num = n % 2;
return num;
}
 

int funcImprimir(int array[5])
{
int i;
for(i = 0; i < 5; i++)
{
printf("%d", array[i]);	

}
return;
} 

int main(){

int par[5], impar[5], n, i, resultado;	
int nPar = 0, nImpar = 0;


for(i = 0; i < TAM; i++)
	{
	printf("Digite um número:");
	scanf("%d",&n);	
	resultado = funcVerificar(n);
	if(resultado)
		{
		impar[nImpar] = n;
		if(nImpar++ == 4)
			{
			funcImprimir(impar[5]);	
			}
		nImpar = 0;
		}
	else
		{
		par[nPar] = n;
		if(nPar++ == 4)
			{
			funcImprimir(par[5]);	
			}
		}	
	}

if(nImpar > 0) { funcImprimir(impar[5]);}
if(nPar > 0) { funcImprimir(par[5]);}

return 0;
}



