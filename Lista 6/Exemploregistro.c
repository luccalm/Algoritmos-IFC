#include <stdio.h>
#include <stdlib.h>
#define TAM 6

typedef struct sPassagem{
	int nPassagem, data, horario, poltrona, idade;
	char de[30], para[30], nome[50];
} Passagem;

int main(){
	Passagem pMunicipal;

	//para carregar um registro
	printf("Digite o numero da passagem: ");
	scanf("%d", &pMunicipal.nPassagem);
	
	printf("Digite a data da passagem: ");
	scanf("%d", &pMunicipal.data);
		
	printf("Digite o horário da passagem: ");
	scanf("%d", &pMunicipal.horario);
	
	printf("Digite a poltrona da passagem: ");
	scanf("%d", &pMunicipal.poltrona);

	printf("Digite a idade do usuário da passagem: ");
	scanf("%d", &pMunicipal.idade);
	
	
	printf("Digite a cidade de partida da passagem: ");
	scanf("%s", pMunicipal.de);

	getchar();

	printf("Digite a cidade de destino da passagem: ");
	scanf("%s", pMunicipal.para);

	printf("Digite o nome do usuario: ");
	scanf("%s", pMunicipal.nome);


	//Para mostrar um registro
	printf("Numero da passagem: %d  Data: %d\n", pMunicipal.nPassagem, pMunicipal.data);
	printf("De: %s  Para: %s\n", pMunicipal.de, pMunicipal.para);
	printf("Horario: %d  Poltrona: %d  Idade: %d\n", pMunicipal.horario, pMunicipal.poltrona, pMunicipal.idade);
	printf("Nome do passageiro: %s\n", pMunicipal.nome);

	return 0;
}
