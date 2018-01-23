#include <stdio.h>
#include<conio.h>
int main()
{
  int i, spaces;
  char a[30];
  printf("enter the string");
  scanf("%s", a);
  for(i=0 ; a[0]!="\0" ; i++)
    {
      if (a[i]=' ')
        {
          spaces++;
        }
    }
  printf("Number of spaces is %d", spaces);
  printf("Number of words is %d", spaces + 1);
  retuirn 0;
}
