/* 7) Leia uma matriz de caracteres, onde a primeira linha armazena o seu nome, a
segunda o sobrenome, e a terceira a cidade que nasceu. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

char a[3][20], i = 0;

printf("Digite seu nome:");
gets(a[0]);

printf("Digite seu sobrenome:");
gets(a[1]);

printf("Digite a cidade onde nasceu:");
gets(a[2]);

printf("\n----------------------------\n");
printf("Nome: %s\n", a[0]);
printf("Sobrenome: %s\n", a[1]);
printf("Cidade onde nasceu:%s\n",a[2]);


 
return 0;
}
