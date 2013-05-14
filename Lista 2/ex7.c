/* Fazer um algoritmo que calcule a tabuada de um determinado número fornecido. A
tabuada deverá ser calculada utilizando os 3 tipos de estrutura de repetição:
a. Para-faça (for)
b. Repita (do-While)
c. Enquanto (while). */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int tab, i;
	
	printf("Escolha um número para a tabuada");
	scanf("%d", &tab);

	for(i = 1; i <= 10; i++)
	{
		{
		printf("%d por %d é: %d. \n", tab, i, tab*i);	
		}
	}

return 0;
}
