#include<stdio.h>
void main()
{
  int a=10;
  int b=20;
  int temp=a;
  a=b;
  b=temp;
  printf("a=%d,b=%d\n",a,b);
  return 0;
}