int main(){

  int a = 10;
  int b = 20;
  int *ptr_a, *ptr_b;

  ptr_a = &a;
  ptr_b = &b;

  *ptr_a = b;
  *ptr_b = a;

  printf("Valor de A: %d\n", a);
  printf("Valor de B: %d\n", b);

  return 0;

}