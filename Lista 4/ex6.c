// 6) Leia uma matriz 3X3, e troque os elementos da 1a com a última coluna.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int B[3][3], i, j, temp;

for(i = 0; i < 3; i++)
{
	for (j = 0; j < 3; j++)
	{
	printf("Digite um número para B[%d][%d]:", i+1, j+1);
	scanf("%d", &B[i][j]);	
	}
}

printf("\nMatriz antes da troca:\n");
for(i = 0; i < 3; i++)
{
printf("[%d][%d][%d]\n", B[i][0],B[i][1],B[i][2]);
}

for(i = 0; i < 3; i++)
{
	temp = 0;
	//Faz a troca 
	temp = B[i][0];
	B[i][0] = B[i][2];
	B[i][2] = temp;
}

printf("Matriz depois da troca:\n");
for(i = 0; i < 3; i++)
{
	printf("[%d][%d][%d]\n", B[i][0],B[i][1],B[i][2]);

}
return 0;
}
