#include <stdio.h>
#include <math.h>

int main ()
{
    float populacao, alfa, tempo;

    printf("Entre os valores da populacao inicial, alfa e o tempo que passou\n");
    scanf("%f %f %f", &populacao, &alfa, &tempo);

    populacao *= exp(alfa * tempo);
    floor(populacao);

    printf("Populaco final: %.0f\n", populacao);
    return 0;
}