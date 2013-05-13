// Elabore um algoritmo que obtenha o máximo divisor comum (MDC) entre dois
// números inteiros positivos fornecidos.

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
	printf("O MDC entre %d e %d é de: [%d]", num1, num2, menor);
	

return 0;
}
