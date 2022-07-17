#include <stdio.h>
#include <math.h>

int main ()
{
    int i; //contador
    int N; //limite superior
    int n = 0; //fatorial
    float variavel;
    float dividendo;
    float divisor = 1;
    float somatorio = 0;

    printf("Entre os valores de x e N:\n");
    scanf("%f %d", &variavel, &N);

    for( i = 0; i <= N; i++)
    {
        dividendo = pow(-1, i) * pow(variavel, 2 * i);
        
        while ( n < 2 * i)
        {
            divisor *= (n + 1);
            n++;
        }

        somatorio += dividendo/divisor;

        printf("\ndividendo: %f\ndivisor: %f\nsomatorio: %f\n", dividendo, divisor, somatorio);
    }

    printf("Valor aproximado de cosseno de %f: %f\n", variavel, somatorio);
    printf("Valor de cos(%f) pela funcao C: %f\n", variavel, cos(variavel));

    return 0;
}