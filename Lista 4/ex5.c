/* 5) Monte e exiba uma matriz identidade 10 x 10, sabendo que em uma matriz identidade
os elementos da diagonal principal são 1 e os demais elementos são 0. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define CONT 10

int main(){

int j, i;
int a[CONT][CONT];

//Declara todos os elementos como 0 incialmente:
for(i = 0; i < CONT; i++) {
	for(j = 0; j < CONT; j++){
	a[i][j] = 0;
	}
}

j = 0;

//Substitui cada elemento da diagonal principal por 1:
for(i = 0; i < CONT; i++)
{
a[i][j] = 1;
j++;
}

//Mostra a matriz:
for(i = 0; i < CONT; i++)
{
printf("[%d][%d][%d][%d][%d][%d][%d][%d][%d][%d]\n", a[i][0],a[i][1],a[i][2],a[i][3],a[i][4],a[i][5],a[i][6],a[i][7],a[i][8],a[i][9]);	
}

return 0;
}
