#include <stdio.h>
#include<conio.h>
int main()
{
int a,b[a],i,min;
scanf("%d",&a);
for(i=0;i<a;i++)
{
scanf("%d",&b[i]);
if(i==0)
min=b[i];
if(min>b[i])
min=b[i];
}
printf("%d",min);
return 0;
}
