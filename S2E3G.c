#include <stdio.h>
#include <math.h>

int main ()
{
    double x, y, media;
    char tipo;
    
    printf("Entre os valores de x e y\n");
    scanf("%lf %lf", &x, &y);

    getchar ();
    printf("Entre o tipo de media (a ou g)\n");
    scanf("%c", &tipo);

    switch (tipo) 
    {
        case 'a':
            media = (x + y)/2;
            printf("Media aritmetica de %lf e %lf: %lf\n", x, y, media);
            break;
        case 'g':
            media = sqrt(x * y);
            printf("Media geometrica de %lf e %lf: %lf\n", x, y, media);
            break;
        default:
            printf("Por favor insira um caractere valido\n");
            break;
    }

    return 0;
}