#include<stdio.h>
void main()
{
    char s[20]="rAjA";int flag=0,i;
    for(i=0;i<=10;i++)
    {
        if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')||(s[i]=='A')||(s[i]=='E')||(s[i]=='I')||(s[i]=='O')||(s[i]=='U'))
        {
          
          flag=1;
        }
        
    }
        if(flag==1)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    return 0;
}
