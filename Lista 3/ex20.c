/* Faça um programa que receba o código de cinco produtos e
seus respectivos preços. Calcule e mostre:
◦ A quantidade de produtos inferior a R$ 50,00;
◦ O código dos produtos com preço entre R$ 50,00 e R$ 100,00;
◦ A média dos preços dos produtos com preço superior a R$ 100,00; */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int i;
float produtos[5][2], mediaPreco, qntmedia, mediaFinal;

//Inserir o preço e o código de cada produto:
for(i = 0; i < 5; i++)
	{
	printf("Digite o código do produto %d:", i+1);
	scanf("%f", &produtos[i][0]);	
	
	printf("Preço do produto %d (Código: %.0f):", i+1, produtos[i][0]);
	scanf("%f", &produtos[i][1]);
	printf("------------------------------------\n");
	} 

printf("Código dos produtos com preço entre R$50 e R$100:" );
for(i = 0; i < 5; i++)
	{
	if(produtos[i][1] >= 50 && produtos[i][1] <= 100)
		{
		printf("[%.0f]", produtos[i][0]);
		}	
	if(produtos[i][1] > 100)
		{
		mediaPreco = mediaPreco + produtos[i][1];
		qntmedia++;	
		}
	}

mediaFinal = (float) mediaPreco / qntmedia;

printf("\nA média dos preços dos produtos com preço superior a R$100 é: R$ %.2f\n", mediaFinal);	



	return 0;
}

