#include <stdio.h>

int main ()
{
    int i = 1;
    float x, y = 1;

    do
    {
        printf("\nEntre com o %do valor: ", i);
        scanf("%f", &x);
        if ( x != 0)
        {
          y *= x;
          i++;
        }
    } while ( x != 0 );
    
    printf("\nProdutorio dos valores informados: %.2f\n", y);
    return 0;
}