/*16) Escrever um algoritmo que lê 2 vetores de tamanho 10. Crie, a seguir, um vetor S de
20 posições que contenha os elementos dos outros 2 vetores em ordem crescente.
Obs.: copie primeiro os valores para o vetor S para depois ordená-los */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define QTE 10
int main(){

int A[10], B[10], V[20], ordem[20], maior = 0, j = 10, i;

//Insere os valores no vetor A.
for(i = 0; i < 10; i++)
{
printf("Digite o valor de A[%d]", i+1);
scanf("%d", &A[i]);
}	

//Insere os valores no vetor B.
for(i = 0; i < 10; i++)
{
printf("Digite o valor de B[%d]", i+1);
scanf("%d", &B[i]);
}

//Guarda os valores do vetor A[10] e B[10] no vetor V[20].
for(i = 0; i < 10; i++)
{
V[i] = A[i];	
V[j] = B[j];
j++;
}


for(i = 0; i < 20; i++)
{
printf("[%d]", V[i]);	
}

// Faz a comparação com cada número para descobrir quantos números são menores que ele.
for(i = 0; i < 20; i++){
	maior = 0;
	for(j = 0; j < 20; j++) {
		if(V[i] > V[j])
			{
			maior++; //Caso o número seja maior acrescenta maior++	
			}
		ordem[maior] = V[i]; 
	}

}

for(i = 0; i < 20; i++)
{
printf("%d", ordem[i]);	
}

return 0;
}
