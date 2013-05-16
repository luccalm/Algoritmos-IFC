/* Defina um registro para representar um cliente em uma loja com as seguintes características:
	Nome: char de 50
	Endereço: Char de 50
	Data nascimento: inteiro
	RG: Inteiro
	CPF: Inteiro
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct sDados {
	char nome[50], endereco[50], nascimento[50], rg[50], cpf[50];
} Dados;

int main(){
	Dados pDados;

	//para carregar um registro
	printf("Digite o nome do cliente:");
	gets(pDados.nome);

	printf("Digite o endereço do cliente:");
	gets(pDados.endereco);
	
	printf("Digite a data de nascimento:");
	gets(pDados.nascimento);
	
	printf("Digite o RG do cliente: ");
	gets(pDados.rg);
	
	printf("Digite o CPF do cliente: ");
	gets(pDados.cpf);

	
	//Para mostrar um registro
	printf("Nome: %s  Data de nascimento: %s \n", pDados.nome, pDados.nascimento);
	printf("Endereço: %s  \n", pDados.endereco);
	printf("RG: %s  CPF: %s \n", pDados.cpf, pDados.rg);
	

	return 0;
}
