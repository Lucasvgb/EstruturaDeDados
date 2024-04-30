/*
Escreva um programa em C que declare um array de inteiros com 5 elementos e um ponteiro para inteiro. Preencha o array com valores de 1 a 5. Em seguida, percorra o array utilizando o ponteiro e imprima cada elemento do array. Certifique-se de utilizar aritmética de ponteiros para acessar os elementos do array.
*/
#include <stdio.h>
int main(){

  int array[] = {1,2,3,4,5};
  int *ptr;

  for(int i = 0; i < 5; i++){
    ptr = &array[i];
    printf("%d,", *ptr);
  }
  printf("\n");

  return 0;
}