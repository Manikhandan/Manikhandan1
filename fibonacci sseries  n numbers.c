#include<stdio.h>
int main()
{
     int f=0,s=1,i,last,n;
    scanf("%d",&last);
    printf("\n the given number is %d",last);
    
    printf("\n %d %d",f,s);
    for(i=2;i<=last;i++)
    {
         n=f+s;
        f=s;
        s=n;
    printf("\n %d",n);
    return 0;
    }
    
}
