#include <stdio.h>

int main(){
  int maxval, minval, val;
  int first = 1;
  while( scanf("%d", &val) != EOF){
    if(first || val > maxval) maxval = val;
    if(first || val < minval) minval = val;
    first = 0;
  }
  printf("Maximum %d\n", maxval);
  printf("Minumum %d\n", minval);
}

