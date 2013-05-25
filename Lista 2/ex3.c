// Elabore um algoritmo que obtenha o máximo divisor comum (MDC) entre dois
// números inteiros positivos fornecidos.

// Uma breve explicação sobre o cálculo do MDC a partir das divisões sucessivas:

/* 
    CÁLCULO DO M.D.C. PELO PROCESSO DAS DIVISÕES SUCESSIVAS

            Nesse processo efetuamos várias divisões até chegar a uma divisão exata. O divisor desta divisão é o m.d.c. Acompanhe o cálculo do m.d.c.(48,30).

    Regra prática:

    1º) dividimos o número maior pelo número menor;
            48 / 30 = 1 (com resto 18)

    2º) dividimos o divisor 30, que é divisor da divisão anterior, por 18, que é o resto da divisão anterior, e assim sucessivamente;
            30 / 18 = 1 (com resto 12)

            18 / 12 = 1 (com resto 6)

            12 / 6 = 2 (com resto zero - divisão exata)

    3º) O divisor da divisão exata é 6. Então m.d.c.(48,30) = 6. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int num1, num2, resto, maior, menor;

	printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo número: ");
	scanf("%d", &num2);
	
	if(num1 > num2) //Verifica se o primeiro número é maior que o segundo.
	{
	maior = num1;	
	menor = num2;
	}
	else
	{
	maior = num2; //Caso o primeiro não seja maior o segundo será o maior.
	menor = num1;	
	}
	
	while(maior % menor != 0) //Realiza a divisão até que o resto seja 0.
	{
	resto = (maior % menor); //Faz a divisão do maior pelo menor e pega o resto (30 % 18 = 12)
	maior = menor; //O maior número agora será o menor (18)
	menor = resto; //O menor número agora será o resto (No exemplo acima 12)
	}
	printf("O MDC entre %d e %d é de: [%d]", num1, num2, menor); 
	

return 0;
}
