#include <stdio.h>
#include<conio.h>
int main()
{
char c[200];
int count=0,i;
printf("Enter the paragraph\n");
scanf("%[^\n]s",c);
for(i=0;c[i]!='\0';i++)
{
if(c[i]=='.')
count++;
}
printf("Number of lines in given paragraph are:%d\n",count);
return 0;
}
