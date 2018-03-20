#include <stdio.h>
void main
{
int a,b,remainder,lcm,gcd,x,z;
printf("\n enter the first number:");
scanf("%d",&x);
printf("\n enter the second number:");
scanf("%d",&y);
x=a;
z=b;
do
{
remainder=a%b;
if(remainder==0)
break;
a=b;
b=remainder;
}while(remainder!=0);
gcd=b;
lcm=(x*z)/gcd;
printf("\n the lcm of the given number is: %d",lcm);
return 0;
}
