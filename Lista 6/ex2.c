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

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define TAM 2

typedef struct sDados {
   char autor[50], editora[50], nome[50];
   int doado, paginas, cod;
} Dados;

int main(){
   Dados exatas[TAM], humanas[TAM], bio[TAM];
   int opcao = 0, opcao1, opcao3, i, menu, varCOD = 0, HUMdoado, EXAdoado, BIOdoado, HUMcomprado, EXAcomprado, BIOcomprado;
   char varNOME[50];
   // int Switch 
   int opConsultar;
   int vEncontrado;

   printf("\n\nEscolha uma das opções: \n");
   printf("Opção 1 - Inserir Obra.\nOpção 2 - Consultar Obra.\nOpção 3 - Livros doados.\nOpção 4 - Livros comprados.\n");
   printf("Opção 5 - Alterar registro.\nOpção 6 - Excluir uma obra.\nOpção 7 - Sair.\nDigite sua opção:");
   scanf("%d", &opcao);
   switch(opcao)
         {
            
            // Começo Case 1 - Inserir Obra.
            case 1:
               printf("------------------------------------------------------------- \n");
               printf("Escolha uma das áreas:\nOpção 1 - Humanas.\nOpção 2 - Exatas.\nOpção 3 - Biológicas.\n");
               printf("Opção -1: Voltar ao menu principal.\n");             
               printf("\nEscolha sua opção:");
               scanf("%d", &opcao1);
                           switch(opcao1)
                           {
                           // Inicio Inserir Obra Humanas
                           case 1:
                                 for(i = 0; i < TAM; i++)
                                    { // Início For obras humanas
                                    printf("\nObra número [%d]: \n" , i+1);
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
                                    scanf("%d", &humanas[i].paginas);   

                                    } // Fim For Obras humanas
                           break;
                           // Fim inserir obra humanas.

                           // Início inserir Obra exatas
                           case 2: 
                                 for(i = 0; i < TAM; i++)
                                    { // Início For obras exatas
                                    printf("Obra número [%d] \n" , i+1);
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
                           break;
                           // Fim inserir obra exatas

                           // Início inserir obra Biológicas
                           case 3:
                                 for(i = 0; i < TAM; i++)
                                    { // Início For obras Biológicas
                                    printf("Obra número [%d] \n" , i+1);
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
                           break;
                           // Fim inserir obra biológicas.
                           }   

                  
                  
         

            break;
            // Fim Case 1 - Inserir obra.


            // Começo Case 2 - Consultar obra.
            case 2:
            printf("------------------------------------------------------------- \n");
            printf("Escolha a área que deseja consultar:\n1 - Humanas.\n2 - Exatas\n3 - Biológicas.\nDigite -1 para voltar ao menu inicial.\n");
            printf("Escolha sua opção:");
            scanf("%d", &opConsultar);
            switch(opConsultar) {
               // Consultar obras humanas
               case 1:

                  printf("---------------------------------------------------------------");
                  printf("\nOpção 1 - Consultar pelo código.\nOpção 2 - Consultar pelo nome.\nDigite sua opção:");
                  scanf("%d", &opConsultar);
                  switch(opConsultar)
                        {
                        // Consultar humanas código.
                        case 1:
                        printf("\nDigite o código da obra:");
                        scanf("%d", &varCOD);
                           for(i = 0; i < TAM; i++)
                                 { //Inicio For 
                                    vEncontrado++;
                                    if(varCOD == humanas[i].cod)
                                       {
                                       printf("------------------------------------------------------------- \n");
                                       if(humanas[i].doado == 1) { printf("Código de catalogação: %d Doado: Sim \n",  humanas[i].cod ); } 
                                       if(humanas[i].doado == 2) { printf("Código de catalogação: %d Doado: Não \n", humanas[i].cod ); }
                                       printf("Nome da Obra: %s \n" , humanas[i].nome);
                                       printf("Nome do autor: %s \n", humanas[i].autor);
                                       break;
                                       }
                                 printf("Livro não encontrado.");
                                 }
                

                        break;
                        //Fim consultar humanas código.

                        // Consultar humanas nome.
                        case 2:
                        printf("Digite o nome da obra:");
                        gets(varNOME);
                        getchar();
                        
                           for(i = 0; i < TAM; i++)
                              { //Início FOR
                              if( strcmp(varNOME , humanas[i].nome) == 0 && vEncontrado < TAM)  
                                    {
                                    printf("------------------------------------------------------------- \n");
                                    if(humanas[i].doado == 1) { printf("Código de catalogação: %d Doado: Sim \n",  humanas[i].cod ); } 
                                    if(humanas[i].doado == 2) { printf("Código de catalogação: %d Doado: Não \n", humanas[i].cod ); }
                                    printf("Nome da Obra: %s \n" , humanas[i].nome);
                                    printf("Nome do autor: %s \n", humanas[i].autor);
                                    printf("Editora: %s \n Nº de Páginas: %d \n", humanas[i].editora, humanas[i].paginas);   
                                    printf("------------------------------------------------------------- \n");
                                    vEncontrado++;
                                    }
                              } // Fim FOR
                        
                     }
                        break;
                        // Fim consultar humanas nome.

               }
               break;   

               }
               break;
               
               // Fim consultar obras humanas

               // Consultar obras exatas
               case 2:
                  printf("Opção 1 - Consultar pelo nome.\nOpção 2 - Consultar pelo código.\nDigite sua opção:");
                  scanf("%d", &opcao);
                  switch(opcao)
                        {
                        // Consultar exatas código.
                        case 1:
                        printf("Digite o código da obra:");
                        scanf("%d", &varCOD);
                           for(i = 0; i < TAM; i++)
                                 { //Inicio For 
                                    if(varCOD == exatas[i].cod)
                                       {
                                       if(exatas[i].doado == 1) { printf("Código de catalogação: %d Doado: Sim \n",  exatas[i].cod ); } 
                                       if(exatas[i].doado == 2) { printf("Código de catalogação: %d Doado: Não \n", exatas[i].cod ); }
                                       printf("Nome da Obra: %s \n" , exatas[i].nome);
                                       printf("Nome do autor: %s \n", exatas[i].autor);
                                       printf("Editora: %s \n Nº de Páginas: %d \n", exatas[i].editora, exatas[i].paginas);
                                       }

                                 } // Fim For
                           if(i == TAM) {printf("Livro não encontrado");}

                        break;
                        //Fim consultar exatas código.

                        // Consultar exatas nome.
                        case 2:
                        printf("Digite o nome da obra:");
                        gets(varNOME);
                           for(i = 0; i < TAM; i++)
                              { //Início FOR
                              if( strcmp(varNOME,exatas[i].nome) == 0 )  
                                    {
                                    if(exatas[i].doado == 1) { printf("Código de catalogação: %d Doado: Sim \n",  exatas[i].cod ); } 
                                    if(exatas[i].doado == 2) { printf("Código de catalogação: %d Doado: Não \n", exatas[i].cod ); }
                                    printf("Nome da Obra: %s \n" , exatas[i].nome);
                                    printf("Nome do autor: %s \n", exatas[i].autor);
                                    printf("Editora: %s \n Nº de Páginas: %d \n", exatas[i].editora, exatas[i].paginas);   
                                    }
                              } // Fim FOR
                        if(i == TAM) { printf("Livro não encontrado."); }

                        break;
                        // Fim consultar exatas nome.
                        }

               break;
               //Fim consultar obras exatas

               // Consultar obras biológicas.
               case 3:
                      printf("Opção 1 - Consultar pelo nome.\nOpção 2 - Consultar pelo código.\nDigite sua opção:");
                  scanf("%d", &opcao);
                  switch(opcao)
                        {
                        // Consultar biologicas código.
                        case 1:
                        printf("Digite o código da obra:");
                        scanf("%d", &varCOD);
                           for(i = 0; i < TAM; i++)
                                 { //Inicio For 
                                    if(varCOD == bio[i].cod)
                                       {
                                       if(bio[i].doado == 1) { printf("Código de catalogação: %d Doado: Sim \n",  bio[i].cod ); } 
                                       if(bio[i].doado == 2) { printf("Código de catalogação: %d Doado: Não \n", bio[i].cod ); }
                                       printf("Nome da Obra: %s \n" , bio[i].nome);
                                       printf("Nome do autor: %s \n", bio[i].autor);
                                       printf("Editora: %s \n Nº de Páginas: %d \n", bio[i].editora, bio[i].paginas);
                                       }

                                 } // Fim For
                           if(i == TAM) {printf("Livro não encontrado");}

                        break;
                        //Fim consultar biologicas código.

                        // Consultar biologicas nome.
                        case 2:
                        printf("Digite o nome da obra:");
                        gets(varNOME);
                           for(i = 0; i < TAM; i++)
                              { //Início FOR
                              if( strcmp(varNOME,bio[i].nome) == 0 )  
                                    {
                                    if(bio[i].doado == 1) { printf("Código de catalogação: %d Doado: Sim \n",  bio[i].cod ); } 
                                    if(bio[i].doado == 2) { printf("Código de catalogação: %d Doado: Não \n", bio[i].cod ); }
                                    printf("Nome da Obra: %s \n" , bio[i].nome);
                                    printf("Nome do autor: %s \n", bio[i].autor);
                                    printf("Editora: %s \n Nº de Páginas: %d \n", bio[i].editora, bio[i].paginas);   
                                    }
                              } // Fim FOR
                        if(i == TAM) { printf("Livro não encontrado."); }

                        break;
                        // Fim consultar biologicas nome.
                        }

               break;
               // Fim consultar obras biológicas.

               case -1: break;

               default: printf("Opção inválida");
            }

            break;
            // Fim Case 2 - Consultar obra.

            // Começo case 3 - Livros doados.
            case 3:

            for(i = 0; i < TAM; i++)
                  {
                  if(humanas[i].cod == 1) {HUMdoado++;}
                  if(exatas[i].cod == 1) {EXAdoado++;}
                  if(bio[i].cod == 1) {BIOdoado++;}   
                  }
               printf("%d livros de Humanas foram doados de um total de %d. \n", HUMdoado, TAM);
               printf("%d livros de Exatas foram doados de um total de %d. \n", EXAdoado, TAM);
               printf("%d livros de Biológicas foram doados de um total de %d. \n", BIOdoado, TAM);


            break;
            // Fim case 3 - Livros doados.

            // Começo case 4 - Livros comprados.
            case 4: 
               for(i = 0; i < TAM; i++)
                  {
                  if(humanas[i].cod == 1 && 100 > humanas[i].paginas < 300) {HUMcomprado++;}
                  if(exatas[i].cod == 1 && 100 > exatas[i].paginas < 300) {EXAcomprado++;}
                  if(bio[i].cod == 1 && 100 > bio[i].paginas < 300) {BIOcomprado++;}   
                  }
               printf("%d livros de Humanas foram comprados de um total de %d. \n", HUMcomprado, TAM);
               printf("%d livros de Exatas foram comprados de um total de %d. \n", EXAcomprado, TAM);
               printf("%d livros de Biológicas foram comprados de um total de %d. \n", BIOcomprado, TAM);

            break;
            // Fim case 4 - Livros comprados.

            // Começo case 5 - Alterar registro.
            case 5:

            break;
            // Fim case 5 - alterar registro.

            // Começo case 6 - Excluir registro.
            case 6:

            break;
            // Fim case 6 - Excluir registro.

        
         } // Fim Switch Opcao
        


return 0;
}



