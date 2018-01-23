#include<stdio.h>
#include<conio.h>
int main()
{
  int min,min1;
  int hrs;
   scanf("%d",&min);
   hrs=min/60;
   min1=min%60;
   printf(" %d\t%d",hrs,min1);
   return 0;
}
