#include <stdio.h>

int main() {
  int x = 2;
  char y = 'A';
  int z = 4;
  x++; 
  z *= x;
  printf("The value of x is %i \n", x);
  printf("The value of y is %c \n", y);
  printf("The value of z is %i \n", z);
}