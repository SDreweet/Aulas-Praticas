#include <stdio.h>
#include <math.h>

int main ()
{
    float raio;
    float lado_cubo;

    printf("Entre o raio da esfera:\n");
    scanf("%f", &raio);

    lado_cubo = (2 * raio)/(sqrt(3));

    printf("Volume do cubo: %f\n", lado_cubo * lado_cubo * lado_cubo);
    printf("Area superificial do cubo: %f\n", 6 * lado_cubo * lado_cubo);

    return 0;
}