#include <stdio.h>

int main () 
{
    float p1, p2, p3, t1, t2, media_final;
    float frequencia;
    char conceito;
    int faltas;
    int aulas_total;

    printf("Entre, nessa ordem, as notas de P1, P2, P3, T1 e T2\n");
    scanf("%f %f %f %f %f", &p1, &p2, &p3, &t1, &t2);
    printf("Entre o toal de aulas e o numero de faltas:\n");
    scanf("%d %d", &aulas_total, &faltas);

    frequencia = 1 - faltas/aulas_total;
    media_final = 0.25*p1 + 0.25*p2 + 0.35*p3 + 0.075*(t1 + t2);

    if( frequencia < 0.75)
        conceito = "FF";
    else if( p1 < 3 || p2 < 3 || t1 == 0 || t2 == 0 || media_final < 6)
        conceito = 'D';
    else if( media_final >= 9)
        conceito = 'A';
    else if( media_final >= 7.5 && media_final < 9)
        conceito = 'B';
    else if( media_final >= 6 && media_final < 7.5)
        conceito = 'C';
    
    printf("Conceito: %c\n", conceito);

    return 0;
}