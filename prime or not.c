#include<stdio.h>
int main()
{
int i,n,c=0;
printf("Enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
c++;
}
if(c==2)
printf("The number is prime");
else
printf("The number is not a prime");
return 0;
}
