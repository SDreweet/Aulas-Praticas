#include <stdio.h>
#include <math.h>

int main ()
{
    int N;
    int i;
    int n;
    int montante;
    float variavel;
    float dividendo;
    float divisor;
    float somatorio = 0;

    printf("Digite a variavel e N\n");
    scanf("%f %d", &variavel, &N);
    
    for( i = 0; i <= N; i++)
    {
        divisor = 1;
        montante = (2*i+1);
        dividendo = pow(-1, i) * pow(variavel, montante);
        
        for( n = 1; n <= montante; n++)
        {
            divisor = divisor * n;
        }

        somatorio = somatorio + dividendo/divisor;

        printf("\n%da iteracao\nDividendo: %f\nDivisor: %f\nSomatorio: %f\n", i+1, dividendo, divisor, somatorio);
    }

    printf("\nO resultado do seno de %f pela Serie de Taylor-Maclaurin: %f\n", variavel, somatorio);
    printf("O resultado do seno de %f pela funcao sin(x) do math.h: %f\n", variavel, sin(variavel));

    return 0;
}