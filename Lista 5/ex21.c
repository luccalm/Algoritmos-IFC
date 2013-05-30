/* 21) Faça um algoritmo que leia um código numérico inteiro e um vetor de 50 posições de
números. Se o código for zero, termine o algoritmo. Se o código for 1, mostre o vetor
na ordem como ele foi lido. Se o código for 2, mostre o vetor na ordem inversa, do
último até o primeiro. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define QTE 50

int main(){

int A[QTE], opcao, i;

for(i = 0; i < QTE; i++)
	{
	printf("Digite um valor para A[%d]:", i+1);
	scanf("%d", &A[i]);	
	}

do {

printf("\nDigite uma opção:\n0 - Terminar o algoritmo.\n1 - Mostre o vetor.\n2 - Mostre o vetor na ordem inversa.");
printf("\nOpção:");
scanf("%d", &opcao);
switch(opcao) {

case 1:
	for(i = 0; i < QTE; i++)
	{
	printf("[%d]", A[i]);	
	}
	printf("\n");
break;

case 2:
	for(i = QTE-1; i >= 0; i--)
	{
	printf("[%d]", A[i]);	
	}
	printf("\n");
break;

}

} while(opcao != 0);
printf("Saiu.\n");

return 0;
}