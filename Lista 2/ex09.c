#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 9) Faça um algoritmo que leia o peso e a altura de 20 pessoas e diga quantas estão abaixo
do peso. IMC = peso/altura2 IMC <=18,5
*/

int main(){
	int peso, i, abaixo;
	float altura, imc, IMC = (18.5);


		for(i = 0; i < 20; i++){
		printf("Digite o peso da %d pessoa em quilos:", i+1);
		scanf("%d", &peso);
	
		printf("Digite a altura da primeira pessoa em metros:", i+1);
		scanf("%f", &altura);
	
		imc = (float) (peso / (altura*altura));
			if(imc < IMC)
				{
				abaixo++;
				}
			}
			
		// Exatamente 1 pessoa:		
		if(abaixo == 1) { printf("%d pessoa está abaixo do peso.\n", abaixo); }
			
		else {printf("%d pessoas estão abaixo do peso\n", abaixo);}

			

return 0;
}
