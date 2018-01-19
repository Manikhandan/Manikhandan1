#include<stdio.h>

void main() {
   int a,b,i;
   printf("Enter any two limits:");
   scanf("%d%d",&a,&b);
   for(i=a;i<=b;i++)
   {
       if((i%2)!=0)
       {
           printf("The odd numberds are :%d",i);
          printf("\n");
                 }
   }
}
