// Leia um A vetor (10) de inteiros. Ordene, a seguir, os elementos de A em ordem crescente e escreva o vetor ordenado.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM 10

int main(){
int i, j, a[TAM], ax, troca;

for(i=0; i<TAM; i++){
printf("Digite um valor para A[%i]: ", i);
scanf("%i", &a[i]);
}

troca=1;
while(troca){
troca=0;
// move o indice maior para a direita
for (j = 0; j < TAM-1; ++j){
if(a[j]>=a[j+1]){
ax = a[j+1];
a[j+1] = a[j];
a[j] = ax;
troca=1;
}
}
}

for (i = 0; i < TAM; ++i){
printf("A[%i] = %i\n", i, a[i]);
}

return 0;
}


