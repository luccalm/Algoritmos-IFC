/* 5) Construa um algoritmo que leia um conjunto de dados contendo altura e sexo ('M' para
masculino e 'F' para feminino) de “n” pessoas e, depois, calcule e escreva:
a. a maior e menor altura do grupo;
b. a média da altura das mulheres; 
c. o numero de homens e a diferença percentual entre eles e as mulheres. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int n, i, sexoMasculino = 0, sexoFeminino = 0, percentualHomens;
	char sexo;
	float alturaMaxima = 0, alturaMinima = 100; //Variáveis de altura
	float alturaPessoa, alturaMulheres, mediaAlturaMulheres = 0; 

	printf("Digite o número de pessoas:");
	scanf("%d", &n);

for(i = 0; i < n; i++)
{
	printf("Digite o sexo da pessoa [%d] (F = Feminino. M = Masculino):", i+1);
	scanf(" %c", &sexo);

	if(sexo == 'm' || sexo == 'M')
	{
	sexoMasculino++;	
	}
	if(sexo == 'f' || sexo == 'F')
	{
	sexoFeminino++;	
	} 

	printf("Digite a altura da pessoa %d em metros:", i+1);
	scanf("%f", &alturaPessoa);

	if(alturaPessoa > alturaMaxima)
		{
		alturaMaxima = alturaPessoa;	
		}
	if(alturaPessoa < alturaMinima)
		{
		alturaMinima = alturaPessoa;	
		}

	if(sexo == 'f' || sexo == 'F')
		{
		alturaMulheres = alturaMulheres + alturaPessoa; 	
		}

}

mediaAlturaMulheres = (float) alturaMulheres / sexoFeminino;
percentualHomens = (sexoMasculino * 100) / n;


printf("------------------------------------------------------\n", alturaMaxima, alturaMinima);
printf("A altura máxima do grupo é: %.2f m e a mínima: %.2f m.\n", alturaMaxima, alturaMinima);
printf("A média das mulheres é de: %.2f m.\n", mediaAlturaMulheres);
printf("O número de homens no grupo é %d e o percentual é: %d \n", sexoMasculino, percentualHomens );

return 0;
}