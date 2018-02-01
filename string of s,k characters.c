#include<stdio.h>
#include<string.h>
int main()
{
    char s[30],a[30];
    scanf("%s",s);
    printf("\n the string is");
    int k;
    scanf("%d",&k);
    int i;
    for(i=0;i<k;i++)
    {   a[i]=s[i];
    }
        printf("\n %s",a);
        return 0;
    }
