#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int j, a[20], temp;

for (j = 0; j < 20; ++j )
{
     if (a[j] > a[j+1])
     {
          temp = a[j+1];
          a[j+1] = a[j];
          a[j] = temp;
     }
}

}