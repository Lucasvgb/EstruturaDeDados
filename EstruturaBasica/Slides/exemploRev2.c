#include <stdio.h>

int main ( void ) {
   int a, b, c, *p;
   a = 2;
   p = &c;
   *p = 3;
   b = a + (*p);
   printf(" %d ", b);
   return 0;
}
