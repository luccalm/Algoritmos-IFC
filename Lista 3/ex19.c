/* Faça um programa que preencha um vetor com o número de
matrícula de 7 alunos e carregue outro vetor com a média final
desses alunos. Calcule e mostre:
◦ o matrícula do aluno com a maior média (desconsiderar empates)
◦ para cada aluno não aprovado, isto é, com média menor do que 7,
mostrar quanto esse aluno precisa tirar na prova de exame final
para ser aprovado. Considerar que a média para aprovação no
exame é 5. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int i;
float matriz[7][2], matricula, maior = 0, examefinal;

//Inserir a matrícula e nota do aluno:
for(i = 0; i < 7; i++)
	{
	printf("--------------------------------\n");
	printf("Digite a matrícula do aluno %d: ", i+1);	
	scanf("%f", &matriz[i][0]);

	printf("Digite a nota do aluno %d: ", i+1);
	scanf("%f", &matriz[i][1]);
	}

//Verificar qual aluno possui a maior média:
for(i = 0; i < 7; i++) {
	if(matriz[i][1] > maior)
		{
		maior = matriz[i][1];	
		matricula = matriz[i][0];
		}
}
printf("--------------------------------\n");
printf("Maior nota: %.1f. Nº de matrícula: [%.0f]. \n", maior, matricula);

//Verificar quais alunos tem média menor que 7
for (i = 0; i < 7; i++){
	if(matriz[i][1] < 7) {
		examefinal = (float) 10 - matriz[i][1]; //Caso a nota seja menor que 7 calcular a nota necessária para passar no exame.
		printf("---------------------------- \n");
		printf("Aluno nº %d \n", i+1);
		printf("Matricula: %.0f \n", matriz[i][0]);
		printf("Nota necessária: %.1f\n" , examefinal);
	}
}

	return 0;
}

