#include <stdio.h>
int main(void)
{
  float b, h, ans;
  printf("Enter B : ");
  scanf("%f", &b);
  printf("Enter H : ");
  scanf("%f", &h);
  printf("0.5 x %f x %f = %f", b, h, 0.5*b*h);
  return 0;
}   