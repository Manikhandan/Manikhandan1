#include <stdio.h>
#include <string.h>
#include<conio.h>
int main()
{
    char s[200];
    int count = 0, i;
    printf("type the string\n");
    scanf("%[^\n]s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ')
            count++;    
    }
    printf("number of words: %d\n", count + 1);
    return 0;
}
