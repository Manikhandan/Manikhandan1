#include<stdio.h>
#include<conio.h>
int main()
{
 int a,b,temp;
 printf("\n Enter the number");
 scanf("%d%d",&a,&b);
 printf("\n before swapping is %d%d",a,b);
 temp=a;
 a=b;
 b=temp;
 printf("\n After swapping is%d%d",a,b);
 return 0;
}
