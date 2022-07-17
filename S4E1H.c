#include <stdio.h>

int main ()
{
    int i;
    int numero_alunos;
    int numero_aprovados = 0; //após 2019
    int ano_ingresso;
    int divisor = 0; //da frequencia media
    float frequencia_media = 0;
    float frequencia;
    float menor_frequencia = 0;
    char conceito;

    printf("Enre o numero de alunos na turma\n");
    scanf("%d", &numero_alunos);

    for( i = 1; i <= numero_alunos; i++)
    {
        getchar ();

        printf("Entre o conceito, ano de ingresso e percentual de frequencia do aluno %d\n", i);
        scanf("%c %d %f", &conceito, &ano_ingresso, &frequencia);

        if ( ano_ingresso > 2019 && (conceito == 'C' ||  conceito == 'B' || conceito == 'A')) 
        {
            numero_aprovados++;
        }

        if ( conceito == 'A')
        {
            frequencia_media = frequencia_media + frequencia;
            divisor++;
        }

        if ( menor_frequencia > frequencia || menor_frequencia == 0)
        {
            menor_frequencia = frequencia;
        }
    }

    printf("\nfrequencia_media: %f\ndivisor_frequencia_media: %d\n", frequencia_media, divisor);

    frequencia_media = frequencia_media/divisor;

    printf("Numero de alunos aprovados com ingresso apos 2019: %d\n", numero_aprovados);
    printf("Frequencia media (percentual) dos alunos aprovados com conceito A: %.2f%\n", frequencia_media*100);
    printf("Menor frequencia registrada entre todos os alunos: %.2f%\n", menor_frequencia*100);

    return 0;
}