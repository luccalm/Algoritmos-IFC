/* Fazer um algoritmo que calcule a tabuada de um determinado número fornecido. A
tabuada deverá ser calculada utilizando os 3 tipos de estrutura de repetição:
a. Para-faça (for)
b. Repita (do-While)
c. Enquanto (while). */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int tab, i, num = 1, num2 = 1;
	
	printf("Escolha um número para a tabuada:");
	scanf("%d", &tab);

		printf("\nMétodo FOR: \n");
	for(i = 1; i <= 10; i++)
	{
		printf("%d por %d é: %d. \n", tab, i, tab*i);	
	}

	////////////////////////////////////////////////////////


		printf("Método do-while \n");

		do {
			printf("%d por %d é %d. \n", tab, num2, tab*num2);
			num2++;
		}
		while(num2 <= 10);



	//////////////////////////////////////////////////////

		printf("Método While: \n");
	while(num <= 10)
		{
		printf("%d por %d é: %d. \n", tab, num, tab*num);
		num++;
		}

return 0;
}
