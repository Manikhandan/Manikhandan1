#include <stdio.h>
void main()
{
  int a,b;
  printf("enter a and b value");
  scanf("%d%d",&a,&b);
  a^=b^=a^=b;
  printf("\n SWAP USING BITWISE OPERATOR");
  printf("\n swap value is %d and %d",a,b);
}
