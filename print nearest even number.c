#include<stdio.h>
#include<conio.h>
int main()
{
int n,n1;
scanf("%d",&n);
if(n%2!=0)
{
n1=--n;
}
else
{
n1=n-2;
}
printf("the nearest even velue is%d",n1);
return 0;
}
