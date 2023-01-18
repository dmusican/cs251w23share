#include <stdio.h>

int main() {

   int p = 2;
   int q = p;
   p = p + 1;
   printf("%i\n", q);


   int b[5];
   b[0] = 2;
   int c[5] = b;
   b[0] = 3;
   printf("%i\n",b[0]);
}
