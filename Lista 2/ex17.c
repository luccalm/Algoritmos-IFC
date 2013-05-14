/* Imprima uma tabela de conversão de polegadas para centímetros, de 1 a 20. Considere
que Polegada = Centímetro * 2,54. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float nConv = (2,54);
	int i, nPolegada;

	for(i = 1; i <= 20; i++)
		{
			//soma = ((float) i / multi) + soma;
			nPolegada = i * nConv; 
			printf("%d polegadas em centimetros são: %d cm \n", i, nPolegada);
		}	

return 0;
}
