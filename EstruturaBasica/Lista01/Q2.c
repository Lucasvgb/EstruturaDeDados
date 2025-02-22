#include <stdio.h>
#include <stdlib.h>

void binario(int n){
  if (n == 0){
    printf("%d", n);}
  else if (n > 0){
    binario(n/2);
    printf("%d", n%2);
    }
  }

int main(){
  int n;
  printf("\nDigite um valor para n: ");
  scanf("%d", &n);
  while (n > 0){
    binario(n);
    printf("\nDigite um valor para n:");
    scanf("%d", &n);}
  return 0;
}
