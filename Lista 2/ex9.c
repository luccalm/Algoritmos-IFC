#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 9) Faça um algoritmo que leia o peso e a altura de 20 pessoas e diga quantas estão abaixo
do peso. IMC = peso/altura2 IMC <=18,5
*/

int main(){
	int peso, i;
	float altura, imc, IMC;

		for(i = 0; i < 20; i++){
		printf("Digite o peso em quilos ");
		scanf("%d", &peso);
	
		printf("Digite a sua altura em metros: ");
		scanf("%f", &altura);
	
		imc = (peso / (altura*altura));
		IMC = 18,5;
			if(imc < IMC)
				{
				printf("A pessoa %d está abaixo do peso. \n" ,i+1);
				}
			else
				{
				printf("A pessoa %d está acima do peso. \n" , i+1);
				}
		}
		
return 0;
}
