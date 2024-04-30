/*
Q4 - Se i e j são variáveis inteiras e pi e pj são ponteiros para inteiro, qual atribuição é ilegal? (1 ponto) 

a.
pi = &i; 

b.
*pj = &j; 

c.
*pj = j; 

d.
*pi = *pj; 

e.
i = (*pi)+*pj;

*/

#include <stdio.h>
int main(){

  int i;
  int j;

  int *pi;
  int *pj;

  pj = &j; 

  
  printf("O valor de j agora %d: ",j);


  return 0;
}