#include <stdio.h>

int main ()
{
    int codigo, ingressos;
    float valor = 0;
    char fidelidade;

    do
    {
        printf("\nCódigo\tTitulo do Filme\t\t\t\t\tPreco (R$)\n");
        printf("1\tLightyear (3D)\t\t\t\t\t32.00\n");
        printf("2\tJurassic World: Dominio\t\t\t\t30.00\n");
        printf("3\tTop Gun: Maverick\t\t\t\t27.00\n");
        printf("4\tTudo em Todo Lugar ao Mesmo Tempo\t\t27.00\n");
        printf("5\tMinions 2: A Origem de Gru (3D)\t\t\t32,00\n\n");
        printf("Entre o codigo do filme e o numero de ingressos\n");
        scanf("%d %d", &codigo, &ingressos);

        switch (codigo)
        {
            case 1:
                valor = 32.00;
                break;
            case 2:
                valor = 30.00;
                break;
            case 3:
                valor = 27.00;
                break;
            case 4:
                valor = 27.00;
                break;
            case 5:
                valor = 32.00;
                break;
            default:
                printf("\nPor favor, insira um codigo valido.\n");
                break;
        }

        if( valor != 0)
        {
            valor = valor * ingressos;

            getchar ();
            printf("\nVoce tem o cartao de fidelidade? (S/N)\n");
            scanf("%c", &fidelidade);

            if( fidelidade == 'S')
            valor = 0.9 * valor;

            printf("\nvalor total a ser pago: R$ %.2f\n", valor);
        }

    } while (valor == 0);
    
    return 0;
}