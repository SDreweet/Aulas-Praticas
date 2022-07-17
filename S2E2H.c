#include <stdio.h>
#include <math.h>

int main ()
{
    float massa, meia_vida, tempo;
    float lambda; //constante de desintegração

    printf("Entre a massa inicial, a meia-vida e o tempo decorrido\n");
    scanf("%f %f %f", &massa, &meia_vida, &tempo);

    lambda = log(2)/meia_vida;
    massa *= exp(-1 * lambda * tempo);

    printf("Massa final: %.2f\n", massa);

    return 0;
}