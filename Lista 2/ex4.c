/* Escreva um algoritmo que determine se dois valores inteiros e positivos A e B são
primos entre si. (dois números inteiros são ditos primos entre si, caso não exista divisor
comum aos dois números). */

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
	if(menor == 1) { printf("Os números %d e %d são primos.", num1, num2); }
	printf("Os números %d e %d não são primos", num1, num2);

	

return 0;
}

