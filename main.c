#include "head/head.h"
#include <stdio.h>
int remembercount(int);

int main(int argc, char *argv[])
{
  int R1;
  printf("Start, untill the end.\n");
  R1 = remembercount(0);
}

int remembercount(int a)
{
  if(a == 0) printf("\n The number is \"%d\" of times \n", a);
  return 0;
}
