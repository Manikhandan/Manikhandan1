#include<stdio.h>
int main()
{
int a=5,b=5,c;
printf("enter a number");
scanf("%d%d",&a,&b);
c=a+b;
if(c%2!=0)
{
printf("odd");
}
else
{
printf("even");
}
return 0;
}
