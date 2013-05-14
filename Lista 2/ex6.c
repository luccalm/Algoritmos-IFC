/* A conversão de graus fahrenheit para centígrados é obtida pela fórmula C=(5/9)*(F-
32). Escreva um algoritmo que calcule e escreva a conversão de fahrenheit para
centígrados que variem de 50 a 150 de 1 em 1. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int fah = 50;
	double cen;
	
	while(fah <= 150)
	{
	cen = (5.0/9.0)*(fah - 32);
	printf("%d fahrenheit são %lf graus centígrados. \n", fah, cen);	
	fah++;
	}

return 0;
}
