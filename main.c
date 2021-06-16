#include <stdio.h>

int main() {
   int a = 150, b = 360;
   int t;
   printf("Before. a: %d, b: %d\n", a, b);
   t = a;
   a = b;
   b = t;
   printf("After.  a: %d, b: %d\n", a, b);
   return 0;
}