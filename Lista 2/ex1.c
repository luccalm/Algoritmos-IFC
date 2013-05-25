#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Tal qual a série de Finonacci, a série de Ricci é calculada somando os dois termos
anteriores. O que difere as duas séries é que a de Ricci os dois valores iniciais são
fornecidos e poderão ser quais números. Ex. {5, 9} 14, 23, 37, 60, 97 . . . Baseado
nisto, faça um algoritmo que calcule os “n” termos da série de Ricci.
*/
int main(){
	int num1, num2, num3, n;

	printf("Digite o primeiro número: ");
	scanf("%d", &num1)
	
	printf("Digite o segundo número: ");
	scanf("%d", &num2);
	
	printf("Digite a quantidade de termos: ");
	scanf("%d", &n);
	
	while(n > 0)
	{
	num3 = num1 + num2;
	num1 = num2;
	num2 = num3;
	n--;
	printf("[%d]", num3);
	}
	

return 0;
}
