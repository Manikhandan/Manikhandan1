#include<stdio.h>
int main()
{
char letter;
printf("Enter Any letter\n");
scanf("%c",& letter);
if(letter>='a'&& letter<='z'||letter>='A'&& letter<='Z')
printf("alphabet", letter);
else
printf("not an alphabet", letter);
return 0;
}

