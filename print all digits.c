#include<stdio.h>
#include<conio.h>
int main()
{
int a,n,s[10],i=0,count=0;
scanf("%d",&a);
while(a!=0)
{
n=a%10;
s[i]=n;
a=a/10;
i++;
count++;
}
for(i=--count;i>=0;i--)
{
printf("\t%d",s[i]);
}
return 0;
}
