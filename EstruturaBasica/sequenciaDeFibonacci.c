#include <stdio.h>
#include <stdlib.h>

// Protótipo da função
long fibonaci(int num);


int main()
{
  int num;
  printf("Digite um numero: ");
  scanf("%d\n", &num);

  printf("O fibonaci de %d eh: %ld\n", num, fibonaci(num));

  return 0;
}

long fibonaci(int num)
{
  int n;
  if(n == 1 || n == 0)
    return n;
  else
    return fibonaci ((n - 1) + (n - 2));
}