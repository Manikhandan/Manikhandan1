#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    if(n==0||n==1)
    {
        printf("It is binary value");
    }
        else
        {
            printf("It is not binary value");
        }
    return 0;
}
