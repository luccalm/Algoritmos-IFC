/* Escreva um vetor que leia um vetor G de 20 elementos caracter que representa o gabarito
de uma prova. A seguir, para cada um dos 50 alunos da turma, leia o vetor de
respostas (R) do aluno e conte o número de acertos. Mostre o no de acertos do aluno
e uma mensagem APROVADO, se a nota for maior ou igual a 6; e mostre uma
mensagem de REPROVADO, caso contrário. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define QTE 20
int main(){

char A[5],B[50][20];
int i, ialunos, valor;
// Declaração valores:

for(i = 0; i < QTE; i++)
	{
	printf("Resposta da questão %d:", i+1);
	scanf("%c", &A[i]);
	getchar();
	}	

for(ialunos = 0; ialunos < 50 ; ialunos++)
{
	valor = 0;
		for(i = 0; i < QTE; i++)
		{
		printf("Digite a resposta da questão %d do aluno %d \n", i+1, ialunos+1);
		scanf("%c", &B[ialunos][i]);
		if(B[ialunos][i] == A[i]) //Verifica a resposta do aluno com a resposta do gabarito
		{
		valor++;	
		}
		getchar();
		}

if(valor > 12)
	{
	printf("Aluno aprovado com %d acertos. \n", valor);	
	}	
else
	{
	printf("Aluno reprovado. Nº de acertos: %d \n", valor);	
	}

printf("----------------------------\n");
}

return 0;
}
