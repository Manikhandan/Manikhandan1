#include<stdio.h>
int main()
{
int n,r1,r;
printf("enter a number for n");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
r1=r1*10+r;
n=n/10;
}
if(n==r1)
printf("it is palindrome");
else
printf("is is not a palindrome");
return 0;
}
