/* 2. Para o controle dos veículos que circulam em uma determinada cidade, a Secretaria dos
Transportes criou o seguinte registro-padrão:
Proprietário: ___________________________________ Combustível: _________________
Modelo: _____________________________________ Cor: __________________________
No. chassi: _______________________ Ano: __________ Placa: _____________________
Em que:
• combustível pode ser álcool, diesel ou gasolina;
• placa possui os três primeiros valores alfabéticos e os quatro restantes numéricos; */

#include <stdio.h>
#include <stdlib.h>
#define QNT 1

typedef struct sVeiculo{
	int chassi, ano;
	char placa[6], nome[30], combustivel[30], modelo[50], cor[50];
} Veiculo;


int main(){
	int i;
	Veiculo carros[QNT];

	for(i = 0; i < QNT; i++)
	{
	printf("Digite o nome do proprietario:");
	gets(carros[i].nome);

	printf("Digite o combustível utilizado (Álcool, Diesel ou Gasolina):");
	gets(carros[i].combustivel);
	
	printf("Digite o modelo do carro:");
	gets(carros[i].modelo);

	printf("Digite a cor do carro:");
	gets(carros[i].cor);
	
	printf("Digite o nº do chassi:");
	scanf("%d", &carros[i].chassi);

	printf("Digite o ano do veículo:");
	scanf(" %d", &carros[i].ano);
	getchar(); 

	//• placa possui os três primeiros valores alfabéticos e os quatro restantes numéricos;
	printf("Digite a placa do veículo:");
	gets(carros[i].placa);

	}

//b) Construa um algoritmo que liste todos os proprietários cujos carros são do ano de
//1980 ou posterior e que sejam movidos a diesel.


	printf("\nProprietários com veículos a diesel do ano de 1980 ou posterior:\n");
	for(i = 0; i < QNT; i++)
	{

		if(carros[i].ano >= 1980 && carros[i].combustivel == "Diesel")	
		{
		printf("Nome: %s \n", carros[i].nome);
		}
	}
	printf("\n");	

/* c) Escreva um algoritmo que liste todas as placas que comecem com a letra A e
terminem com 0, 2, 4 ou 7 e seus respectivos proprietários. (Sugestão: utilize a placa
como um vetor de caracter) */


	printf("\nPlacas que começam com A e terminam com 0, 2, 4 ou 7:");
	for(i = 0; i < QNT; i++)
	{
		if(carros[i].placa[0] == 'A' && carros[i].placa[6] == '2')	
		{
		printf("\nPlaca: %s ", carros[i].placa);
		}
	}
	printf("\n\n");		

/* d) Elabore um algoritmo que liste o modelo e a cor dos veículos cujas placas possuem
como segunda letra uma vogal e cuja soma dos valores numéricos fornece um
número par. */

/* e) Construa um algoritmo que permita a troca de proprietário com o fornecimento do
número do chassi apenas para carros com placas que não possuem nenhum dígito
igual a zero. */


return 0;
}