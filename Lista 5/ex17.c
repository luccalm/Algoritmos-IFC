 /* Escrever um algoritmo que lê 2 vetores X
(10) e Y(10) . Crie, a seguir, um vetor Z que
seja:
a. a diferença entre X
 e Y;
b. a soma entre X
 e Y;
c. o produto entre X
 e Y;
Escreva o vetor Z a cada cálculo. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
 int main(){

int X[10], Y[10], i;


for(i = 0; i < 10; i++)
	{
	printf("Digite X[%d]:\n" , i+1);	
	scanf("%d", &X[i]);
	}

for(i = 0; i < 10; i++)
	{	
	printf("Digite Y[%d]:\n" , i+1);	
	scanf("%d", &Y[i]);
	}
	

for(i = 0; i < 10; i++)
	{
	printf("------------------------------------------------ \n");
	printf("X[%d] vale: %d e Y[%d] vale: %d \n", i+1, X[i], i+1, Y[i]);
	printf("A Diferença entre X[%d] e Y[%d] é: %d. \n" , i+1 , i+1 , X[i] - Y[i]);
	printf("A soma entre X[%d] e Y[%d] é: %d. \n" , i+1, i+1, X[i] + Y[i]);
	printf("A multiplicação entre X[%d] e Y[%d] é: %d. \n", i+1, i+1, X[i] * Y[i]);
	}

return 0;

}
