#include <stdlib.h>
#include <stdio.h>

typedef struct sDadosPessoa {

char nome[30];
float altura;
int peso;

} DadosPessoa


float somaAltura(int matriz, int linhas, int colunas) {

	int i, j;
	float somaAltura;

	for(i = 0; i < linhas; i++)
	{
		for(j = 0; j < colunas; j++)
		{
		somaAltura = somaAltura + matriz[i*linhas+j].altura;	
		}	
	}

	return somaAltura;
	}


int somaPeso(DadosPessoa matriz, int linhas, int colunas) {


	int i, j;
	int somaPeso;

	for(i = 0; i < linhas; i++)
	{
		for(j = 0; j < colunas; j++)
		{
		somaPeso = somaPeso + matriz[i*linhas+j].peso;	
		}	
	}

	return somaPeso;

	}

int main(){

DadosPessoa matriz;
int linhas, colunas, pesoTotal;
float alturaTotal;
int i, j;

	printf("Digite Linhas:");
	scanf("%d", &linhas);

	printf("Digite Colunas:");
	scanf("%d", &colunas);

	matriz = (DadosPessoa*) malloc(linhas * colunas * sizeof(DadosPessoa));

	for(i = 0; i < linhas; i++)
	{
		for(j = 0; j < colunas; j++)
		{
		printf("Nome:");
		scanf("%s", &matriz[i*linhas+j].nome);

		printf("O Peso da pessoa:");
		scanf("%d", &matriz[i*linhas+j].peso);
		
		// %s", matriz[i*linhas+j].nome

		printf("A Altura da pessoa:");	
		scanf("%f", &matriz[i*linhas+j].altura);
		}
	}

	alturaTotal = somaAltura(matriz, linhas, colunas);
	pesoTotal = somaPeso(matriz, linhas, colunas);

	printf("Soma dos pesos %d", pesoTotal);
	printf("Soma das alturas %f" , alturaTotal);

free(matriz);
}

