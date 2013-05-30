/* 34) Escreva um algoritmo que lê uma matriz M(5,5) e calcula as somas:
a. da linha 4 de M
b. da coluna 2 de M
c. da diagonal principal
d. da diagonal secundária
e. de todos os elementos da matriz M */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define QTE 5

int main() {

int M[QTE][QTE];
int i, j; //Variáveis for.
int somaLinha = 0, somaColuna = 0 ,somaPrincipal = 0, somaSecundaria = 0, somaTotal = 0;

	//Inserir os valores da Matriz.
	for(i = 0; i < QTE; i++)
	{
		for(j = 0; j < QTE; j++)
		{ 
		printf("Digite M[%d][%d]:", i+1, j+1);
		scanf("%d", &M[i][j]);	
		}
	}

	//Mostrar a matriz M
	// ,M[i][2],M[i][3],M[i][4]

	//[%d][%d][%d]

	for(i = 0; i < QTE; i++)
	{
	printf("[%d][%d][%d][%d][%d]\n", M[i][0],M[i][1],M[i][2],M[i][3],M[i][4]);	
	}

	//Soma linha 4

	for(i = 0; i < QTE; i++){
		somaLinha = somaLinha + M[3][i];
	}

	//Soma Coluna 2

	for(i = 0; i < QTE; i++){
		somaColuna = somaColuna + M[i][1];
	}

	//Soma Diagonal Principal

	j = 0;

	for(i = 0; i < QTE; i++){
		somaPrincipal = somaPrincipal + M[i][j];
	j++;
	}

	//Soma Diagonal secundária

	j = QTE;

	for(i = QTE; i >= 0; i--){
		somaSecundaria = somaSecundaria + M[i][j];
	j--;
	}

	//Soma total

	for(i = 0; i < QTE; i++){
		for(j = 0; j < QTE; j++)
		{
		somaTotal = somaTotal + M[i][j];	
		}
	}
printf("\n");
printf("Soma Linha 4: %d\n", somaLinha);
printf("Soma coluna 2:%d\n", somaColuna);
printf("Soma diagonal principal: %d\n", somaPrincipal);
printf("Soma diagonal secundária: %d\n", somaSecundaria);
printf("Soma total: %d\n", somaTotal);

return 0;	
}