#include<stdio.h>
void main()
{
int n,r,sum=0,s;
scanf("%d",&n);
s=n;
while(n>0)
{
r=n%10;
sum=sum*10+r;
n=n/10;
}
if(s=sum)
{
printf("it is yes");
}
else
{
printf("No");
}
}
