#include<stdio.h>
#include<conio.h>
int main()
{
int a[100],max,x,i;
printf("enter no of integers");
scanf("%d",&x);
for(i=0;i<x;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<x;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("%d",max);
return 0;
}
