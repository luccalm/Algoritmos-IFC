/* Faça um algoritmo que leia o gênero (0 para masculino ou 1 para feminino) e a cor dos
cabelos (0 para louro, 1 para preto, 2 para ruivo ou 3 para castanho) de n pessoas e diga
qual o percentual de ruivas existente. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int nPessoas, nSexo, nCabelo, i, nRuiva = 0;
	

	printf("Digite a quantidade de pessoas:");
	scanf("%d", &nPessoas);

	for(i = 0; i < nPessoas; i++)
		{
			printf("Digite o sexo da pessoa nº %d (0 = masculino e 1 = feminino) \n", i+1);
			scanf("%d", &nSexo);	
				
			printf("Digite a cor do cabelo da pessoa nº %d (0 = louro, 1 = preto, 2 = ruivo e 3 = castanho) \n", i+1);	
			scanf("%d", &nCabelo);	
				if(nSexo == 1 && nCabelo == 2)
				{
					nRuiva++;
				}

		}
		printf("Existem %d ruivas de um total de %d pessoas.", nRuiva, nPessoas);

return 0;
}


		

