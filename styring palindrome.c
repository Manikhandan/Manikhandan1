#include<stdio.h>
#include<string.h>
int main()
{
     char b[10],a[20]="malayalam";
    printf("%s\n",a);
   strcpy(b,a);  printf("%s\n",b);
     strrev(b);
  printf("%s\n",c);
  if( strcmp(a,b) == 0 )
    printf("palindrom");
    else 
    printf("not a palindrom");
    return 0;
    }
