#include <stdio.h>
void main()
{
int a,b,remainder,gcd;
printf("\n enter the first number:");
scanf("%d",&a);
printf("\n enter the second number:");
scanf("%d",&b);
do
{
remainder=a%b;
if(remainder==0)
break;
a=b;
b=remainder;
}while(remainder!=0);
gcd=b;
printf("\n the gcd of the given number is: %d",gcd);
}
