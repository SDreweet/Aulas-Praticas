#include <stdio.h>

int main ()
{
    int i = 0;
    float x = 1, y;
    char operacao;

    do
    {
        if ( i == 0)
        {
            printf("%d)\tEntre com o valor real: ", i+1);
            scanf("%f", &y);
            i++;
        }

        if ( operacao != '/' || x != 0)
        {
            getchar();
            printf("\n\tEntre com a operacao: ");
            scanf("%c", &operacao);
        }


        
        if ( operacao != '=' && (operacao == '+' || operacao == '-' || operacao == '*' || operacao == '/'))
        {
            printf("\n%d)\tEntre com o valor real: ", i+1);
            scanf("%f", &x);
            i++;
        }

        if ( operacao != '=')
        {
          switch (operacao)
            {
                case '+':
                    y += x;
                    break;
                case '-':
                    y -= x;
                    break;
                case '*':
                    y *= x;
                    break;
                case '/':
                    if ( x == 0)
                        printf("\nA divisão por zero não está definida, por favor insira um denominador válido...");
                    else
                        y /= x;
                    break;
                default:
                    printf("\nPor favor, insira um operador valido...");
                    break;
            }  
        }
    } while ( operacao != '=');
    
    printf("\nResultado: %f\n", y);
    return 0;
}