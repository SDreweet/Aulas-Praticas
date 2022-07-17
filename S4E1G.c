#include <stdio.h>

int main () 
{
    float mensal; //salario
    float media = 0;
    float media_fem = 0;
    int divisor_media = 0;
    int divisor_media_fem = 0;
    int i; //contador
    int entrevistas;
    int idade;
    int maiorde25 = 0;
    char sexo;

    printf("Entre o numero de pessoas entrevistadas\n");
    scanf("%d", &entrevistas);

    for ( i = 1; i <= entrevistas; i++)
    {
        getchar ();

        printf("Entre o sexo, idade e salario mensal da pessoa %d\n", i);
        scanf("%c %d %f", &sexo, &idade, &mensal);

        if( idade >= 25)
        {
            maiorde25++;
        }
        if( idade > 18)
        {
            media += mensal;
            divisor_media++;
        }
        if( sexo = 'F')
        {
            media_fem += mensal;
            divisor_media_fem++;
        }
    }

    media = media/divisor_media;
    media_fem = media_fem/divisor_media_fem;

    printf("Numero de pessoas entrevistadas com idade maior ou igual a 25 anos: %d\n", maiorde25);
    printf("Salario medio das pessoas com idade maior que 18 anos: R$%.2f\n", media);
    printf("Salario medio das mulehres: R$%.2f\n", media_fem);

    return 0;
}
