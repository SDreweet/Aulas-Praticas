#include <stdio.h>
#include <math.h>

int main ()
{
    float raio, lado_cubo, pi = 3.14159265359;

    printf("Entre o lado do cubo:\n");
    scanf("%f", &lado_cubo);

    raio = (lado_cubo * sqrt(3))/2;
    
    printf("Volume da esfera: %f\n", (4 * pi * raio*raio*raio)/3);
    printf("Area superficial da esfera: %f\n", 4*pi*raio*raio);

    return 0;
}