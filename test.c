#include <stdio.h>
void myFunction(int *iptr, double *aptr, char *cptr);
int main(void)
{
  double a;
  a = 1999999.0;
  int x = 99;
  int *xAdr = &x;
  double *aAddr = &a;
  int b = 9;
  char c='p';
  char *cAddr = &c;
  printf("my address is = %lf and %p and %zu ", a, aAddr, sizeof(aAddr));
  printf("my address is = %d and %p and %zu ", x, xAdr, sizeof(xAdr));
  printf("my address is = %c and %p and %zu ", c, cAddr, sizeof(cAddr));

  //double c = (double)xAdr - (double)aAddr;
  myFunction(xAdr, aAddr,cAddr);

  return 0;
}


void myFunction(int *iptr, double *aptr, char *cptr) {
  printf("addresses are %p, %p, %p ", iptr, aptr, cptr);
}
