#include <stdio.h>      
int main() {
  short a;
  long b;
  long long c;
  long double d;
  unsigned long long e;

  printf("size of short = %d bytes\n", sizeof(a));
  printf("size of long = %d bytes\n", sizeof(b));
  printf("size of long long = %d bytes\n", sizeof(c));
  printf("size of long double= %d bytes\n", sizeof(d));
  printf("size of unsigned long long = %d bytes\n", sizeof(e));
  return 0;
}

