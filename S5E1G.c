#include <stdio.h>

int main ()
{
    int i = 1;
    float x, y = 1;

    do
    {
        printf("Entre com o %do valor: ", i);
        scanf("%f\n", &x);
        y *= x;
        i++;
    } while ( x != 0 );
    
    printf("Somatorio dos valores informados: %.2f\n", y);
    return 0;
}