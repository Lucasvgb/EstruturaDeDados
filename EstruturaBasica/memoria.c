#include <stdio.h>


//Programa que mostra os endereços de memória e os valores alocados.
int main(){

  int a = 10;
  int c,b;

  printf("&a = %p, a = %d\n", &a, a);
  printf("&b = %p, b = %d\n", &b, b);
  printf("&c = %p, c = %d\n\n", &c, c);

  b = 20;
  c = a + b;

  printf("&a = %p, a = %d\n", &a, a);
  printf("&b = %p, b = %d\n", &b, b);
  printf("&c = %p, c = %d\n\n", &c, c);

  return 0;
}