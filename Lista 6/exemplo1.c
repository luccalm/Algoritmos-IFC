/* Defina um registro para representar um cliente em uma loja com as seguintes características:
	Nome: char de 50
	Endereço: Char de 50
	Data nascimento: inteiro
	RG: Inteiro
	CPF: Inteiro
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct sDados{
	int nascimento, rg, cpf;
	char nome[50], endereco[50];
} Dados;

int main(){
	Dados pDados;

	//para carregar um registro
	printf("Digite o nome do cliente:");
	scanf("%s", &pDados.nome);
	
	printf("Digite o endereço do cliente:");
	scanf("%s", &pDados.endereco);
	
	//getchar(pMunicipal.data);
	
	printf("Digite a data de nascimento:");
	scanf("%d", &pDados.nascimento);
	
	printf("Digite o RG do cliente: ");
	scanf("%d", &pDados.rg);
	
	printf("Digite o CPF do cliente: ");
	scanf("%d", &pDados.cpf);

	//Para mostrar um registro
	printf("Nome: %s  Data de nascimento: %d \n", pDados.nome, pDados.nascimento);
	printf("Endereço: %s  \n", pDados.endereco);
	printf("RG: %d  CPF: %d", pDados.cpf, pDados.rg);
	

	return 0;
}