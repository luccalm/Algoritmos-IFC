/* Imprima uma tabela de conversão de polegadas para centímetros, de 1 a 20. Considere
que Polegada = Centímetro * 2,54. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float nConv, nPolegada;
	int i;

	nConv = 2.54;

	for(i = 1; i <= 20; i++)
		{
			//soma = ((float) i / multi) + soma;
			nPolegada = (float)i * nConv; 
			printf("%d polegadas em centimetros são: %.2f cm \n", i, nPolegada);
		}	

return 0;
}
