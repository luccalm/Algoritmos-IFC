#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Escreva um algoritmo que determine todos os divisores de um dado número N.
/*

10 / 2 = 5
5 / 5 = 0

5 e 2

*/


int main(){
	int num1, n=1;


	printf("Digite um número: ");
	scanf("%d", &num1);
	
	while(n <= num1)
	{
		if(num1 % n == 0)
		{
		printf("[%d]", n);
		}
	n++;		
	}
	
	
	
return 0;
}
