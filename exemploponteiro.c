#include <stdlib.h>
#include <stdio.h>

int main() {

int *idade; // declara um ponteiro do tipo inteiro.

idade = (int*) malloc(sizeof(int)); //aloca memória para o inteiro.

*idade = 20;

printf("A idade é %d.\n", *idade);

free(idade); //libera memória alocada.

}