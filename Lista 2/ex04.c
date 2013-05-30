/* Escreva um algoritmo que determine se dois valores inteiros e positivos A e B são
primos entre si. (dois números inteiros são ditos primos entre si, caso não exista divisor
comum aos dois números). */

/* O processo é o mesmo do exercicio 3 pois se não existir um MDC entre os 2 números eles serão primos entre sim. 
por exemplo: Entre 4 e 10 o MDC comum é 2 portanto existe um divisor comum. Entre 7 e 5 o MDC é 1 portanto não existe
um divisor comum.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int num1, num2, resto, maior, menor;

	printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo número: ");
	scanf("%d", &num2);
	
	if(num1 > num2)
	{
	maior = num1;	
	menor = num2;
	}
	else
	{
	maior = num2;
	menor = num1;	
	}
	
	while(maior % menor != 0)
	{
	resto = (maior % menor);
	maior = menor;
	menor = resto;
	}
	if(menor == 1) { printf("Os números %d e %d são primos. \n", num1, num2); }
	else {printf("Os números %d e %d não são primos. \n", num1, num2); }

	

return 0;
}

