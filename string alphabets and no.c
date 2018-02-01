#include<stdio.h>
void main()
{
char a[10];
scanf("%s",&a);
for(i=0;i<a;i++)
{
if(((a[i]>='a')&&(a[i]<='z'))&&((a[i]>='A')&&(a[i]<='Z')))
{
if(a[i]>='1')&&(a[i]='9')
{
printf("yes");
}
}
printf("no");
}
}
