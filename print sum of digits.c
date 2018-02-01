include<stdio.h>
include<conio.h>
int main()
{
int a,b,c=0;
scanf("%d",&a);
while(a!=0)
{
b=a%10;
c=c+b;
a=a/10;
}
printf("the no  is %d",c);
return 0;
}
