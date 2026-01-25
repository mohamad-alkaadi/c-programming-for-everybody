#include <stdio.h>

int main (){
  int mymult();
  int retval = mymult(6, 7);
  printf("Answer: %d\n", retval);
}

int mymult(a, b)
  int a, b;
{
  int c = a * b;
  return c;
}
