/*16) Escrever um algoritmo que lê 2 vetores de tamanho 10. Crie, a seguir, um vetor S de
20 posições que contenha os elementos dos outros 2 vetores em ordem crescente.
Obs.: copie primeiro os valores para o vetor S para depois ordená-los */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define QTE 20
int main(){

char A[5],B[50][20];
int i, ialunos, valor;
// Declaração valores:

for(i = 0; i < 20; i++)
	{
	printf("Resposta da questão %d:", i+1);
	scanf("%c", &A[i]);
	getchar();
	}	


	
	//gets()
//

for(ialunos = 0; ialunos < 50 ; ialunos++)
	{
	valor = 0;
	for(i = 0; i < 20; i++)
	{
	printf("Digite a resposta da questão %d do aluno %d \n", i+1, ialunos+1);
	scanf("%c", &B[ialunos][i]);
	if(B[ialunos][i] == A[i])
	{
	valor++;	
	}
	getchar();
	}
	if(valor >= 12)
	{
	printf("O aluno %d foi aprovado com %d acertos de um total de %d \n", ialunos, valor, QTE);	
	}
	else
	{	
	printf("O aluno %d foi reprovado com %d acertos de um total de %d \n", ialunos, valor, QTE);	
	}
	}
return 0;
}
