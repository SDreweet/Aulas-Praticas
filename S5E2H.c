#include <stdio.h>

int main ()
{
  int var1, var2, N, fib, soma, i;
  
  printf("\nEntre com um valor para N: ");
  scanf("%d", &N);

  if ( N < 2)
  {
    printf("\nPor favor, digite um valor para N maior que ou igual a 2\n");
  }
  else
  {
    printf("Valores da sequencia de Fibonacci menores que %d: \n", N);
    printf("1\n1\n");
    fib = 1, var1 = 1, var2 = 1, soma = 2;
    
    while ( fib < N ) //sequencia de Fibonacci
    {
      if ( var1 <= var2) //lógica de progressão da sequência
        var1 = fib;
      else
        var2 = fib;
      fib = var1 + var2;
      
      if ( fib < N) //checagem para não exceder N
      {
        printf("%d\n", fib);
        soma += fib;
      }
    }
    
    printf("Soma dos valores: %d\n", soma);
  }
  
  return 0;
}