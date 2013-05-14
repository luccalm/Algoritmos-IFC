/* Imprima uma PA, onde são fornecidos o primeiro termo, a razão e a quantidade de
termos desejada. */

// an = a1 + (n-1)*r;

#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(){
	int nTermos, nRazao, nPtermo, an, i;

	printf("Digite o primeiro termo:");
	scanf("%d", &nPtermo);

	printf("Digite a razão:");
	scanf("%d", &nRazao);

	printf("Digite a quantidade de termos:");
	scanf("%d", &nTermos);

	for(i = 1; i <= nTermos; i++)
		{
			an = nPtermo + (i-1)*nRazao; 
			printf("O %d termo vale: [%d] \n", i, an);
			an = 0;
		}	

return 0;
}
