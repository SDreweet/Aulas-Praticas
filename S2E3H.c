#include <stdio.h>

int main ()
{
    float x, y;
    float media;
    char opcao;

    printf("Entre os valores de x e y:\n", x, y);
    scanf("%f %f", &x, &y);

    printf("Entre o tipo de media (aritmetica ou harmonica) (a/h)\n");
    scanf("%c", &opcao);

    if( opcao == 'a')
    {
        media = (x + y)/2;
        printf("Media aritmetica de %f e %f: %f\n", x, y, media);
    }
    else if( opcao == 'h')
    {
        media = 2/(1/x + 1/y);
        printf("Media harmonica de %f e %f: %f\n", x, y, media);
    }
    else
        printf("Por favor digite uma opcao valida\n");
    
    return 0;
}