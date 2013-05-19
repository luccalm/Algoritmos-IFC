/* 1. Uma determinada biblioteca possui obras de ciências exatas, ciências humanas e ciências
biomédicas, totalizando 1.500 volumes, 500 de cada área. O proprietário resolveu
informatiza-la e, para tal, agrupou as informações sobre cada livro do seguinte modo:
Código de catalogação:__________________________ Doado: ______________________
Nome da obra: _____________________________________________________________
Nome do autor: _____________________________________________________________
Editora: _____________________________ No. De Páginas: ________________________
a) Construa um algoritmo que declare tal estrutura e que reúna todas as informações de
todas as obras em três vetores distintos para cada área;
b)
c) Elabore um trecho de algoritmo que, utilizando como premissa o que foi feito no item
a, realize uma consulta às informações. O usuário fornecerá código da obra e sua
área; existindo tal livro, informa seus campos; do contrário, envia mensagem de
aviso. A consulta repete-se até que o usuário introduza código finalizador com o valor
-1.
d) Idem ao item b, porém o usuário simplesmente informa o nome e a área do livro e
deseja consultar
e) escreva um trecho de algoritmo que liste todas as obras de cada área que
representem livros doados
f) Idem ao item d, porém, obras cujos livros sejam comprados e cujo número de
páginas se encontre entre 100 e 300
g) Elabore um trecho de algoritmo que faça a alteração de um registro; para tal, o
usuário fornece o código, a área e as demais informações sobre o livro;
h) Construa um trecho de algoritmo que efetue a exclusão de algum livro; o usuário
fornecerá o código e a área. Lembre-se de que somente pode ser excluído um livro
existente */


#include <stdio.h>
#include <stdlib.h>
#define TAM 2

/* typedef struct sDados {
	char autor[50], editora[50], nome[50];
	int doado, paginas, cod;
} Dados; */

typedef struct sDados {
	char autor[50], editora[50], nome[50];
	int doado, paginas, cod;
} Dados;

char MENU1() {
	Dados humanas[TAM], exatas[TAM], bio[TAM];
	int i, opcao1, humTOT, bioTOT, exaTOT;
	printf("------------------------------------------------------------- \n");
               printf("Escolha uma das áreas:\nOpção 1 - Humanas.\nOpção 2 - Exatas.\nOpção 3 - Biológicas.\n");
               printf("Opção -1: Voltar ao menu principal.\n");             
               printf("\nEscolha sua opção:");
               scanf("%d", &opcao1);
                           while(opcao1 != -1) {
                           switch(opcao1)
                           {
                           // Inicio Inserir Obra Humanas
                           case 1:
                                 if(humTOT == 1) { printf("Obras já inseridas."); MENU1(); }
                                 humTOT = 0;
                                 for(i = 0; i < TAM; i++)
                                    { // Início For obras humanas
                                    printf("\nObra número [%d] de Humanas: \n" , i+1);
                                    printf("------------------------------------------------------------- \n");
                                    printf("Digite o código da obra:");
                                    scanf("%d", &humanas[i].cod);
                                    getchar();
                                    printf("Digite o nome do volume %d:" , humanas[i].cod);
                                    gets(humanas[i].nome);
                                    printf("Digite o nome do autor do volume %d :" , humanas[i].cod);
                                    gets(humanas[i].autor);
                                    printf("Informe se o volume %d foi doado. (1 = Sim / 2 = Não)" , humanas[i].cod);
                                    scanf("%d", &humanas[i].doado);
                                    getchar();
                                    printf("Digite a editora do volume %d :" , humanas[i].cod);
                                    gets(humanas[i].editora);
                                    printf("Digite a quantidade de páginas do volume %d :" , humanas[i].cod);
                                    ("%d", &humanas[i].paginas);
                                    getchar();   
                                    } // Fim For Obras
                                    humTOT++;
                                    printf("%d", humTOT);
                                    MENU1();
                                    
                           break;
                           // Fim inserir obra humanas.

                           // Início inserir Obra exatas
                           case 2: 
                                 for(i = 0; i < TAM; i++)
                                    { // Início For obras exatas
                                    printf("Obra número [%d] de Exatas \n" , i+1);
                                    printf("Digite o código da obra:");
                                    scanf("%d", &exatas[i].cod);
                                    printf("Digite o nome do volume %d:" , exatas[i].cod);
                                    gets(exatas[i].nome);
                                    printf("Digite o nome do autor do volume %d :" , exatas[i].cod);
                                    gets(exatas[i].autor);
                                    printf("Informe se o volume %d foi doado. (1 = Sim / 2 = Não)" , exatas[i].cod);
                                    scanf("%d", &exatas[i].doado);
                                    printf("Digite a editora do volume %d :" , exatas[i].cod);
                                    gets(exatas[i].editora);
                                    printf("Digite a quantidade de páginas do volume %d :" , exatas[i].cod);
                                    scanf("%d", &exatas[i].paginas);   
                                    } // Fim For Obras exatas
                                    MENU1();
                           break;
                           // Fim inserir obra exatas

                           // Início inserir obra Biológicas
                           case 3:
                                 for(i = 0; i < TAM; i++)
                                    { // Início For obras Biológicas
                                    printf("Obra número [%d] de Biológicas\n" , i+1);
                                    printf("Digite o código da obra:");
                                    scanf("%d", &bio[i].cod);
                                    printf("Digite o nome do volume %d:" , bio[i].cod);
                                    gets(bio[i].nome);
                                    printf("Digite o nome do autor do volume %d :" , bio[i].cod);
                                    gets(bio[i].autor);
                                    printf("Informe se o volume %d foi doado. (1 = Sim / 2 = Não)" , bio[i].cod);
                                    scanf("%d", &bio[i].doado);
                                    printf("Digite a editora do volume %d :" , bio[i].cod);
                                    gets(bio[i].editora);
                                    printf("Digite a quantidade de páginas do volume %d :" , bio[i].cod);
                                    scanf("%d", &bio[i].paginas);   
                                    } // Fim For Obras Biológicas
                                    MENU1();
                           }
                           break;
                           // Fim inserir obra biológicas.
                  
	} main();
}

void MENU2() {
	printf("Teste2 \n");
	main();
}


int main(){
	int opcao;
   printf("------------------------------- ");
	printf("\nEscolha sua opção:\n");
   printf("1- Inserir Obra.\n");
   printf("2 -Consultar Obra.\n");
   printf("Opção:");
	scanf("%d", &opcao);
	while(opcao != 3){
	switch(opcao)
		{
		case 1:
		MENU1();

		case 2:
		MENU2();	
		
		}

	}
printf("Saiu!");

return 0;
}


