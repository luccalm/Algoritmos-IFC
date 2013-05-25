#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main () 
{
    int i;
    int a1;
    int a2;
    int n;
 
    printf("Digite o prim número: ");
    scanf("%d", &a1);
 
    printf("Digite o seg número: ");
    scanf("%d", &a2);
 
    printf("\n");
    printf("Termo 1: %d", a1);
    printf("\n");
    printf("Termo 2: %d", a2);
    printf("\n");
 
    for(i = 3; i <= 10; i++ )
    {
        if(i%2 == 0) 
        {
            n = a2 - a1;
        } 
        else 
        {
            n = a2 + a1;
        }
        printf("Termo %d: %d", i, n);
        printf("\n");
        a1 = a2;
        a2 = n;
    }
    printf("\n\n");
    system("pause");
}