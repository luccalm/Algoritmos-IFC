 #include <stdio.h>

 int main(void) {
   int idade = 0;
   float altura = 0.0;
   char sexo;

   printf("Indique a sua idade : ");
  scanf("%d", &idade);
   printf("Indique a sua altura : ");
   scanf("%f", &altura);
   printf("Indique o seu sexo (m/f) : ");
   scanf(" %c", &sexo);
   printf("Idade: %d, altura: %.1f, sexo: %c\n", idade, altura, sexo);
   return 0; 
 }