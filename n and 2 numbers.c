#include<stdio.h>
int main()
{ 
  int a,b,c;
  printf("\n Enter a limit:");
  scanf("%d %d",&a,&b);
  printf("enter the number:");
  scanf("%d",&c); 
  if(c>a && c<b)
   {
     printf("yes");
    }
  else
  {
    printf("No");
   }
  return 0;
  }
